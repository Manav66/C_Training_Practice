#include <stdio.h>
#include <stdlib.h>
#include <unistd.h>
#include <sys/types.h>
#include <sys/wait.h>
#include <signal.h>

#define BUFFER_SIZE 25

void handle_signal(int sig) {}

int main() {
    int pipefd[2];
    pid_t pid;
    char buffer[BUFFER_SIZE];
    int data_size = 0;
    int bytes_written, bytes_read;

    if (pipe(pipefd) == -1) {
        perror("pipe");
        exit(EXIT_FAILURE);
    }

    pid = fork();

    if (pid < 0) {
        perror("fork");
        exit(EXIT_FAILURE);
    }

    if (pid == 0) {
        close(pipefd[1]);
        signal(SIGUSR1, handle_signal);

        while (1) {
            pause();
            bytes_read = read(pipefd[0], buffer, BUFFER_SIZE);
            if (bytes_read > 0) {
                printf("Child received: %s", buffer);
            } else {
                break;
            }
        }

        close(pipefd[0]);
        exit(EXIT_SUCCESS);
    } else {
        close(pipefd[0]);

        const char *data[] = {"Hello", "world", "from", "parent", "process"};
        data_size = sizeof(data) / sizeof(data[0]);

        for (int i = 0; i < data_size; ++i) {
            bytes_written = write(pipefd[1], data[i], BUFFER_SIZE);
            if (bytes_written == -1) {
                perror("write");
                exit(EXIT_FAILURE);
            }

            kill(pid, SIGUSR1);
            waitpid(pid, NULL, WUNTRACED);
        }

        close(pipefd[1]);
        wait(NULL);
        printf("Parent process exiting.\n");
    }

    return 0;
}


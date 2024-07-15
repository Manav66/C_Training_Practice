#include <sys/wait.h> /* wait */
#include <stdio.h>
#include <stdlib.h>   /* exit functions */
#include <unistd.h>   /* read, write, pipe, _exit */
#include <string.h>

#define ReadEnd  0
#define WriteEnd 1

void report_and_exit(const char *msg){
    perror(msg);
    exit(-1);
}

int main()
{
    int pipeFD[2];
    char buf;
    
    const char *msg = "HEllo from Manav";
    
    if (pipe(pipeFD) < 0) 
        report_and_exit("pipeFD");
    
    pid_t chldpid = fork();
    if(chldpid < 0)
        report_and_exit("Fork");
        
    if(chldpid == 0){
        close(pipeFD[WriteEnd]);
        
        while(read(pipeFD[ReadEnd], &buf, 1) > 0){
            write(STDOUT_FILENO, &buf, sizeof(buf));
        }
        
        close(pipeFD[ReadEnd]);
        _exit(0);
    }
    
    else{
        close(pipeFD[ReadEnd]);
        
        write(pipeFD[WriteEnd], msg, strlen(msg));
        close(pipeFD[WriteEnd]);
        
        wait(NULL);
        
        exit(0);
    }
    
    return 0;
}

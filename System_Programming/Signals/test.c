#include <stdio.h>
#include <unistd.h>
#include <signal.h>
#include <errno.h>
#include <stdlib.h>
 
 
int exit_flag = 0;
 
void signal_handler(int signum)
{
        printf("In the Signal Handler\n");
        //pause();
}
 
 
void another_signal_handler(int signum)
{
        printf("In the KILL Signal Handler\n");
        exit_flag = 1;
}

/*
void backslash_handler(int signum)
{
	
}
*/

void sig_fault_handler(int signum)
{
        printf("Caught Segmentation fault SIGSEGV. \n");
        exit(1);
}
 
void killing(pid_t pid)
{
        printf("Killing Before \n");
        kill(pid, SIGKILL);
        printf("Killing After \n");
}
 
int main()
{
        pid_t pid = getpid();
        signal(SIGINT, signal_handler); /* ctrl + c  */
        signal(SIGKILL, another_signal_handler); /*  kill -9 pid  */
        signal(SIGQUIT, SIG_DFL); /* ctrl + \  */
        signal(SIGSEGV, sig_fault_handler);
        while(!exit_flag)
        {
                sleep(5);
                printf("In the while Loop\n");
        }

 	/*
        int *ptr = NULL;
        *ptr = 47;
 	*/
 	
        killing(pid);
 
        printf("Exiting...");
        return 0;
}

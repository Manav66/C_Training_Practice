#include<stdio.h>
#include<signal.h>
#include<errno.h>
#include<unistd.h>

void signal_handler(int signum){
	if(signum == SIGINT)
    	{			
    		printf("Hello from Manav. Ctrl + c Pressed by the User\n");
	}
    	else
	{
		printf("Hello from Manav. SIGTERM Received.\n");
		_exit(0);
	}
}

int main(){
    signal(SIGINT, signal_handler);
    signal(SIGTERM, signal_handler);

    char c;
    scanf("%c", &c);
    while(c != 'n'){
        sleep(1);
    }

    printf("Ending the program");


    return 0;
}

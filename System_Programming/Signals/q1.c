// Write a program that catches the SIGINT signal (triggered by Ctrl+C) 
//and prints a custom message. 
//Ensure that the program does not terminate when SIGINT is received but continues running.

#include<stdio.h>
#include<signal.h>
#include<errno.h>
#include<unistd.h>

void signal_handler(int signum){
    printf("Hello from Manav. Ctrl + c Pressed by the User\n");
}

int main(){
    signal(SIGINT, signal_handler);
    
    char c;
    scanf("%c", &c);
    while(c != 'n'){
        sleep(1);
    }
    
    printf("Ending the program");
    
    
    return 0;
}

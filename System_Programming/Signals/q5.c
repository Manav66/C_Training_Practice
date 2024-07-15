#include<stdio.h>
#include<unistd.h>
#include<sys/wait.h>
#include<signal.h>

void alarm_handler(int signum)
{
	if(signum == SIGALRM)
	{
		printf("Ringing the alarm\n");
	}

}

int main()
{
	signal(SIGALRM, alarm_handler);

	alarm(5);

	printf("Alarm set. Wait for 5 seconds\n");

	while(1)
	{
		sleep(1);
	}	

	return 0;
}

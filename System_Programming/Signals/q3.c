#include<stdio.h>
#include<sys/wait.h>
#include<signal.h>
#include<unistd.h>

int main()
{
	signal(SIGINT, SIG_IGN);

	printf("Try ctrl + c, it will not stop\n");

	while(1)
	{
		sleep(0);
	}

	return 0;

}

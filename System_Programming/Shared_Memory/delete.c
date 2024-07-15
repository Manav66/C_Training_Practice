#include<stdio.h>
#include<stdlib.h>
#include<string.h>
#include<unistd.h>
#include<sys/wait.h>
#include<sys/mman.h>
#include<fcntl.h>

int main(int argc, char *argv[])
{
	if(argc != 2)
	{
		printf("Usage: %s Shared Memory Name \n", argv[0]);
		exit(EXIT_FAILURE);
	}

	if(shm_unlink(argv[1] == -1))
	{
		perror("shm_unlink");
	}

	return EXIT_SUCCESS;
}

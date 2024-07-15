#include <stdlib.h>
#include <unistd.h>
#include <sys/wait.h>
#include <fcntl.h>
#include <sys/mman.h>
#include <semaphore.h>
#include<stdio.h>

int main(int argc, char *argv[])
{
	int flags, opt, fd;
	char * addr;

	fd = shm_open("/demo_shm", O_CREAT | O_RDWR, 0666);

	if(fd == -1)
	{
		perror("shm");
	}	

	if(ftruncate(fd, 1024) == -1)
	{
		perror("ftruncate");
	}

	addr = mmap(NULL, 64, PROT_READ | PROT_WRITE, MAP_SHARED, fd, 0);

	if(addr == MAP_FAILED)
	{
		perror("mmap");
	}

	exit(EXIT_SUCCESS);
}

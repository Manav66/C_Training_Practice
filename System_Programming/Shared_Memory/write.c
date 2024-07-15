#include<stdio.h>
#include<stdlib.h>
#include<unistd.h>
#include<sys/wait.h>
#include<signal.h>
#include<errno.h>
#include<semaphore.h>
#include<sys/mman.h>
#include<fcntl.h>
#include<string.h>

int main(int argc, char *argv[])
{
	int fd;
	size_t len;
	char *addr;

	fd = shm_open(argv[1], O_RDWR, 0);

	if(fd == -1)
	{
		perror("shm open error");
	}

	len = strlen(argv[2]);

	if(ftruncate(fd, len) == -1)
		perror("Error in truncate");

	printf("Resized to avoid memory wastage to %ld bytes\n", (long) len);

	addr = mmap(NULL, len, PROT_READ | PROT_WRITE, MAP_SHARED, fd, 0);

	if(addr = MAP_FAILED)
		perror("mmap");

	if(close(fd) == -1)
		perror("close");

	printf("Copying %ld bytes\n", (long) len);

	memcpy(addr, argv[2], len);

	exit(EXIT_SUCCESS);
}

#include<stdio.h>
#include<stdlib.h>
#include<string.h>
#include<unistd.h>
#include<sys/mman.h>
#include<fcntl.h>
#include<sys/wait.h>
#include<sys/stat.h>
#include<sys/types.h>

int main(int argc, char *argv[])
{
	int fd;
	char *addr;
	struct stat sb;

	fd = shm_open(argv[1], O_RDONLY, 0);

	if(fd == -1)
		perror("shm_open");
	
	if(fstat(fd, &sb) == -1)
	{
		perror("fstat");
	}

	addr = mmap(NULL, sb.st_size, PROT_READ, MAP_SHARED, fd, 0);

	if(addr = MAP_FAILED)
		perror("mmap");

	if(close(fd) == -1)
		perror("close");

	write(1, addr, sb.st_size);
	printf("\n");

	exit(EXIT_SUCCESS);
}

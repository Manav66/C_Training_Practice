#include<stdio.h>
#include<stdlib.h>
#include<sys/stat.h>
#include<string.h>
#include<unistd.h>
#include<fcntl.h>

#define FIFO_FILE "MYFIFO"

int main()
{
	int fd;
	char buffer[512];

	mkfifo(FIFO_FILE, 0666);

	fd = open(FIFO_FILE, O_WRONLY);
	
	if(fd == -1)
	{
		perror("Error");
		exit(-1);
	}

	printf("Enter the message: ");
	fgets(buffer, sizeof(buffer), stdin);

	write(fd, buffer, strlen(buffer) + 1);

	close(fd);

	return 0;
}


#include <stdio.h>
#include <stdlib.h>
#include <fcntl.h>
#include <sys/stat.h>
#include <unistd.h>

#define FIFO_FILE "MYFIFO"

int main()
{
	int fd;
	char buffer[512];

	fd = open(FIFO_FILE, O_RDONLY);
	if(fd == -1)
	{
		perror("Error");
		exit(-1);
	}

	read(fd, buffer, sizeof(buffer));

	printf("Received message is: %s\n", buffer);

	close(fd);

	return 0;
}




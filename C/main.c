#include <stdio.h>
#include <unistd.h>
#include <fcntl.h>
#include <sys/stat.h>

int main() {
	int filedescriptor = open("D:/Code/practice/C/testfile.txt", O_WRONLY | O_CREAT, S_IRWXU);

	if (filedescriptor < 0)
	{
		printf("The open operation failed...\n");
		return -1;
	} else {
		printf("The open operation succeeded\n");
	}
	
	int writertn = write(filedescriptor, "Writing test data to the file", 30);

	if (writertn != 30)
	{
		printf("The write operation failed...\n");
		return -1;
	} else {
		printf("The write operation succeeded\n");
	}

	int closefile = close(filedescriptor);

	if (closefile == -1)
	{
		printf("The file did not close successfully...\n");
		return -1;
	} else {
		printf("The file closed successfully\n");
	}

	return 0;
}

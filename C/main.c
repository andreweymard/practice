#include <stdio.h>
#include <unistd.h>
#include <fcntl.h>
#include <sys/stat.h>

int main() {
	int filedescriptor;

	filedescriptor = open("D:/Code/practice/C/testfile.txt", O_WRONLY | O_CREAT, S_IRWXU);

	if (filedescriptor < 0)
	{
		printf("The open operation failed...");
		return -1;
	} else {
		printf("The open operation succeeded");
		return 0;
	}
}

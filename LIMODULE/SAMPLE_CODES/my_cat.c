/* FILE: my_cat.c 
 * Description: 
 */

#include <stdio.h>
#include <stdlib.h>
#include <sys/types.h>
#include <sys/stat.h>
#include <fcntl.h>
#include <unistd.h>

#define SIZE 1024

static void usage(char *program)
{
    printf("Usage:\n");
    printf("%s filename\n", program);
    exit(1);
}

int main(int argc, char *argv[])
{
    int fd, read_cnt, ret = 0;
    char *filename;
    char buf[SIZE];

    if (argc != 2)
    {
	usage(argv[0]); //This function prints usage and exits
    }

    filename = argv[1];
    // Open the file
    fd = open(filename, O_RDONLY);
    if (fd == -1)
    {
	perror("open");
	fprintf(stderr, "ERROR: Unable to open file %s\n", filename);
	return 2;
    }

    //Read from file
    while((read_cnt = read(fd, buf, sizeof(buf))) > 0)
    {
	//Write into stdout
	write(1, buf, read_cnt);
    }

    if(read_cnt == -1)
    {
	perror("read");
	fprintf(stderr, "ERROR: Failed to read from file %s\n", filename);
	ret = 3;
    }

    close(fd);

    return ret;
}

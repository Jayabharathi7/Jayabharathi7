/* FILE: simple_pipe.c 
 * Description: 
 */

#include <stdio.h>
#include <unistd.h>
#include <sys/types.h>
#include <sys/wait.h>

#define SIZE 1024

int main()
{
    int pipefds[2]; //Placeholder for pipe read[0] and write[1] file descriptors
    pid_t child_pid;
    char buf[SIZE];
    int status, read_cnt = 0;

    //Create a pipe
    pipe(pipefds);

    // fork a child
    child_pid = fork();

    switch(child_pid)
    {
	case 0: //Child
	    /* Child wants to read, close the write end */
	    close(pipefds[1]);
	    /* Read data from pipe */
	    read_cnt = read(pipefds[0], buf, sizeof(buf));
	    if (read_cnt > 0)
	    {
		printf("Child got data from parent\n");
		puts(buf);
	    }
	    //Close the read fd
	    close(pipefds[0]);
	    break;

	default: //Parent
	    /* Parent wants to write, close the read end */
	    close(pipefds[0]);
	    /* Send data to pipe */
	    write(pipefds[1], "hello", strlen("hello") + 1);
	    /* wait for child */
	    wait(&status);
	    puts("Parent exitting...");

	    //Close the write fd
	    close(pipefds[1]);
	    break;

	case -1:
	    perror("fork");
	    return(1);
    }

    return 0;
}

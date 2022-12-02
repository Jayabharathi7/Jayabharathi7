/* FILE: fork.c 
 * Description: 
 */

#include <stdio.h>
#include <unistd.h>
#include <sys/types.h>

int main()
{
    pid_t pid;

    // Create a child process using fork()
    pid = fork();

    if(pid > 0) // parent, pid -> child pid
    {
	printf("I am parent\n");
	printf("Parent PID = %d\n", getpid()); // Executed by parent
    }
    else //child, fork returns 0
    {
	printf("I am child\n");
	printf("Child PID = %d\n", getpid()); // Executed by child
    }

    return 0;
}

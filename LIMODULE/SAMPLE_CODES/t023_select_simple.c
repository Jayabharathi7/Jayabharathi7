/*------------------------------------------------------------------------------ 
 *
 *   Author         : Emertxe (http://www.emertxe.com) 
 *   Date           : Thu 12 May 2016 15:56:09 IST
 *   File           : t023.c
 *   Title          : IPC mechanism - Synchronous multiplexing - Select 
 *   Description    : As a part of socket APIs,select helps in multiplexing 
 *                    multiple I/O for synchronous handling. Here is a simple
 *                    program using select() to read from stdin with a time-out
 *
 *----------------------------------------------------------------------------*/
#include <stdio.h>
#include <sys/time.h>
#include <sys/types.h>
#include <unistd.h>

int main() 
{
	fd_set rfds;
	struct timeval tv;
	int retval;
	char buff[11];

	/* Watch stdin (fd 0) to see when it has input. */
	FD_ZERO(&rfds);
	FD_SET(0, &rfds);
	/* Wait up to five seconds. */
	tv.tv_sec = 5;
	tv.tv_usec = 0;
	printf("Enter the string in 5 secs\n");
	retval = select(1, &rfds, NULL, NULL, &tv);
	/* Don’t rely on the value of tv now! */

	if (retval == -1)
		perror("select()");
	else if (retval)
		/* FD_ISSET(0, &rfds) will be true. */
		read(0, buff, 10);
	else
		printf("No data within five seconds.\n");

	printf("Entered data is %s\n", buff);
	return 0;
}

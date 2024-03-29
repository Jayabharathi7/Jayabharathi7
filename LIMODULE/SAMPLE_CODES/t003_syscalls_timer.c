/*------------------------------------------------------------------------------ 
 *
 *   Author         : Emertxe (http://www.emertxe.com) 
 *   Date           : Tue 16 Feb 2016 16:27:07 IST
 *   File           : t003.c
 *   Title          : System calls usage in Linux - Timer 
 *   Description    : System calls in Linux provide unified access to resources
 *                    that Kernel is managing. This first program introduces 
 *                    a beginner to timer related system calls by getting time
 *                    of the day and printing all related information. 
 *
 *----------------------------------------------------------------------------*/
#include <stdio.h>
#include <stdlib.h>
#include <sys/types.h>
#include <sys/stat.h>
#include <fcntl.h>
#include <unistd.h>
#include <sys/mman.h>
#include <sys/time.h>
#include <time.h>	
#include <string.h>
int main()
{
	/* This structure has EPOC time in seconds and microseconds */
	struct timeval tv;
	/* This structure holds time in broke down time format */
	struct tm *cur_time;
	
	char *time_str;

	/* Create a timespec variable */
	struct timespec tspec = { 2, 3000};
	//tspec.tv_sec = 2;
	//tspec.tv_nsec = 3000;

	/* Store current seconds and microseconds in structure */
	gettimeofday(&tv, NULL);
	printf("tv_sec = %lu, tv_usec = %lu\n", tv.tv_sec, tv.tv_usec);

	/* To convert seconds to broke down time */
	cur_time = localtime(&tv.tv_sec);
	/* TODO print this seconds and compare with `date +%s`*/

	/* Printing hours minitues and seconds */
	printf("%d:%d:%d\n", cur_time->tm_hour, cur_time->tm_min, cur_time->tm_sec);
	/*TODO print all values from structure by refering man page */

	/* Get the time as a string */
	time_str = ctime(&tv.tv_sec);
	printf("TIME: %s, msec = %lu\n", time_str, tv.tv_usec/1000);

	//Introduce a delay of 2 sec + 3000 nanoseconds
	nanosleep(&tspec, NULL);

	// Print the time after delay
	gettimeofday(&tv, NULL);
	time_str = ctime(&tv.tv_sec);
	printf("TIME: %s, msec = %lu\n", time_str, tv.tv_usec/1000);

}



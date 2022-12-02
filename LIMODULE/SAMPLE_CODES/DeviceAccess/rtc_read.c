/* FILE: rtc_read.c 
 * Description: 
 */

#include <sys/types.h>
#include <sys/stat.h>
#include <fcntl.h>
#include <unistd.h>
#include <linux/rtc.h>
#include <sys/ioctl.h>

#include <stdio.h>
#include <stdlib.h>

int main()
{
    int fd;
    struct rtc_time rtc_data;

    // Open RTC device file
    fd = open("/dev/rtc", O_RDONLY);
    if (fd == -1)
    {
	perror("open");
	exit(1);
    }

    // Read time from RTC device using ioctl
    ioctl(fd, RTC_RD_TIME, &rtc_data);
    if (fd == -1)
    {
	perror("ioctl");
	exit(1);
    }

    // Print rtc_time structure
    /*
       int tm_sec; int tm_min; int tm_hour; int tm_mday; int tm_mon; int tm_year;
     */
    printf("%d %d %d\n", rtc_data.tm_mday, rtc_data.tm_mon + 1, rtc_data.tm_year + 1900);

    // close fd
    close(fd);

    return 0;
}

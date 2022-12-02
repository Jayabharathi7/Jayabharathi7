
#include <stdio.h>
#include <unistd.h>

int main()
{
    printf("Executing date\n");

    execlp("date", "date", NULL);
    //execlp("ls", "ls", "-l", "/tmp", NULL); //execute ls -l /etc

    printf("Will this execute?\n");

    return 0;
}

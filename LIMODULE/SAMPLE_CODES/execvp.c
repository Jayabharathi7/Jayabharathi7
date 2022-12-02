
#include <stdio.h>
#include <unistd.h>

int main()
{
    char *args[] = { "ls", "-l", "/etc", NULL };
    printf("Executing ls -l /etc\n");

    execvp(args[0], args);

    printf("Will this execute?\n");

    return 0;
}

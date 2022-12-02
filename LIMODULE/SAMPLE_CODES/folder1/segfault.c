/* FILE: segfault.c 
 * Description: 
 */

#include <stdio.h>

void foo()
{
    int x;
    int *ptr = NULL;
    x = 100;

 //   x = x / 0;

    *ptr = 50;
    printf("x = %d\n", x);

}
int main()
{
    puts("In main");

    foo();

    return 0;
}

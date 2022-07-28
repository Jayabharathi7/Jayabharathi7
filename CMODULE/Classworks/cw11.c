/*
 * NAME       :
 * DATE       :
 * DESCRIPTION:
 * INPUT      :
 * OUTPUT     :
 * */


/*
//Program to calculate average of numbers passed via command line//
#include<stdio.h>
#include<stdlib.h>
int main(int argc, char **argv)
{
		int i = 1, sum = 0;
		float avg;
		while(argv[i] != NULL)
		{
				sum = sum + atoi(argv[i]);
				i++;
		}
		printf("Sum = %d\n", sum);
		avg = sum / (argc - 1.0);
		printf("Avg = %f\n", avg);
		return 0;
}
*/

/*
//Macro to find the sum of two nos//
#include<stdio.h>
#define sum(a,b)   a+b
int main()
{
    int n1,n2;
    printf("enter the no: ");
    scanf("%d %d",&n1,&n2);
    printf("sum = %d\n",sum(n1,n2));
}
*/


/*
//Macro to get, set and clear Nth bit in an integer//
#include<stdio.h>
#define get(num,n)      (num >> (n-1)) & 1
#define clear(num,n)    num & (~(1<<(n-1)))
#define set(num,n)      num | (1 << (n-1))
int main()
{
    int num,n,op;
    printf("1.get\n2.clear\n3.set\nenter option:");
    scanf("%d",&op);
    printf("enter num value:");
    scanf("%d",&num);
    printf("enter nth bit:");
    scanf("%d",&n);
    switch(op)
    {
	case 1:
	    printf("nth bit = %d\n",get(num,n));
	    break;
	case 2:
	    printf("after clearing nth bit, the value is %d\n",clear(num,n));
	    break;
	case 3:
	    printf("after set the nth bit, the value is %d\n",set(num,n));
	    break;
	default:
	    printf("invalid option\n");
    }

}
*/


/*
//Macro to swap two nos of basic type//
#include<stdio.h>
#define swap(x,y,temp)  \
{                       \
    temp = x;           \
    x = y;              \
    y = temp;           \
}    
int main()
{
    int n;
    printf("1.integer\n2.char\n3.float\n4.double\nenter option:");
    scanf("%d",&n);
    int a,b,c;
    char d,e,f;
    float g,h,i;
    double j,k,l;
    switch(n)
    {
	case 1:
	    printf("enter x and y value:");
	    scanf("%d %d",&a,&b);
	    printf("before swapping x = %d y = %d\n",a,b);
	    swap(a,b,c);
	    printf("after swapping x = %d y = %d\n",a,b);
	    break;
	case 2:
	    getchar();
	    printf("enter x value and y value");
	    scanf("%c %c",&d,&e);
	    printf("before swapping x = %c y = %c\n",d,e);
	    swap(d,e,f);
	    printf("after swapping x = %c y = %c\n",d,e);
	    break;
	case 3:
	    printf("enter x and y value:");
	    scanf("%f %f",&g,&h);
	    printf("before swapping x = %g y = %g\n",g,h);
	    swap(g,h,i);
	    printf("after swapping x = %g y = %g\n",g,h);
	    break;
	case 4:
	    printf("enter x and y value:");
	    scanf("%lf %lf",&j,&k);
	    printf("before swapping x = %lf y = %lf\n",j,k);
	    swap(j,k,l);
	    printf("after swapping x = %lf y = %lf\n",j,k);
	    break;
    }
}
*/



//Macro to swap a nibble in a byte//
#include<stdio.h>
#define swap_nibble(num) num = ((((1 << 4) - 1) & num) << 4) | (num >> 4)
int main()
{
		int num;
		printf("Enter num: ");
		scanf("%d", &num);
		printf("Before swapping %d\n", num);
		swap_nibble(num);
		printf("After swapping %d\n", num);
}















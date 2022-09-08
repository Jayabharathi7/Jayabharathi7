/*
 * NAME       :
 * DATE       :
 * DESCRIPTION:
 * INPUT      :
 * OUTPUT     :
 * */


// pointer to functions
/*#include <stdio.h>

int addition (int a, int b)
{
    return (a+b); 
}

int subtraction (int a, int b)
{
    return (a-b);
}

int operation (int x, int y, int (*functocall)(int,int))
{
    int g;
    //g = (*functocall)(x,y);
    g = functocall(x,y);

    return g;
}

int main ()
{
    int m,n;
    int (*minus)(int,int) = subtraction;

    m = operation (7, 5, addition);
    n = operation (20, 5, minus);
    printf("%d %d\n", m, n);
    return 0;
}*/


/*#include <stdio.h>
#include "bubble_sort.h"

#define ARRAY_SIZE(arr) (sizeof(arr)/sizeof(arr[0]))

void print_int_array(int *arr, int size)
{
    int i = 0;

    for(i = 0; i < size; i++)
    {
    	printf("%4d", arr[i]);
    }

    puts("");
}

int compare_asc_int(void *a, void *b)
{
    if (*(int *)a > *(int *)b)
    {
    	return 1;
    }
    else
    {
    	return 0;
    }
}

int compare_dsc_int(void *a, void *b)
{
    if (*(int *)a < *(int *)b)
    {
    	return 1;
    }
    else
    {
    	return 0;
    }
}

int main()
{
    int a[] = {50, 20, 10, 100, 1, -2};
    int size;

    size = ARRAY_SIZE(a); // Get number of elements in array

    // Sort ascending //
    bubble_sort(a, size, sizeof(a[0]), compare_asc_int);
    print_int_array(a, size);

    // Sort descending //
    bubble_sort(a, size, sizeof(a[0]), compare_dsc_int);
    print_int_array(a, size);
    return 0;
}*/


/*#include <stdlib.h>
#include <stdio.h>

int main()
{
    int num;
    char *str = "1234";

    num = atoi(str);

    printf("%d\n", num);
}*/


/*#include <stdio.h>
#include <stdlib.h>

// Average of cmd line arguments
 // Run as: ./average 100 200 300
 // Should print sum and average
 //

int main(int argc, char *argv[])
{
    int i, sum = 0;
    double average;
    
    for (i = 1; i < argc; i++)
    {
	sum = sum + atoi(argv[i]);
    }

    average = (double)sum / (argc - 1) ;

    printf("sum = %d\n", sum);
    printf("average = %f\n", average);

    return 0;
}*/


/*#include <stdio.h>
#include <stdlib.h>

//static function can be called only in the file it is defined
static void usage(char *program)
{
    printf("Usage:\n");
    printf("%s <num1> <num2> ..... \n", program);

    exit(1);
}

int main(int argc, char *argv[])
{
    int i, sum = 0;
    
    if (argc == 1)
    	usage(argv[0]); //Will print usage and exit

    for (i = 1; i < argc; i++)
    {
	sum += atoi(argv[i]);
    }

    printf("average = %f\n", (double)sum / (argc - 1));
    return 0;
}*/


/*#include <stdio.h>
#include <stdlib.h>
#include <string.h>

// argc (argument count)  - Contains number of arguments including program name
// argv (argument vector) - Contains the actual arguments.
// argv[0] is the program name always
// Environment variables can be accessed using env
//

int main(int argc, char *argv[], char *env[])
{
    int i;
    char *user_name;
    
    puts("List of env variables");
    for (i = 0; env[i] != NULL; i++)
    {
	printf("%d:%s\n", i, env[i]);
    }

    for (i = 0; env[i] != NULL; i++) //env will have NULL as last element
    {
	if (strstr(env[i], "HOME") != NULL) //Search for variable containing HOME
	{
	    printf("Found %s\n", env[i]);
	}
    }

    user_name = getenv("USER"); // Get value of $USER
    puts(user_name);

    // Alternate (common method) to access specific env variable
    // Here we are getting $USER env variable
    // user = getenv("USER");
    //puts(user);
    //

    return 0;
}*/


/*#include <stdio.h>

// argc (argument count)  - Contains number of arguments including program name
// argv (argument vector) - Contains the actual arguments.
// argv[0] is the program name always
//

//int main(int argc, char **argv)
int main(int argc, char *argv[])
{
    int i;
    
    printf("No of args = %d\n", argc);

    puts("List of arguments");
    for (i = 0; i < argc; i++)
    {
	printf("%d: %s\n", i, argv[i]);
    }

    return 0;
}*/


/* FILE: incorrect_pf.c 
 // Description: 
 //

#include <stdio.h>

int main()
{
    printf("%d%d\n");
    return 0;
}*/


/*#include <stdarg.h>
#include <stdio.h>
#include <string.h>

int my_printf(char *fmt, ...)
{
    va_list ap;
    int int_val;
    double d_val;
    char *str = fmt;
    char temp[100];

    va_start(ap, fmt);

    while(*str != '\0')
    {
	if (*str == '%')
	{
	    switch(*(++str))
	    {
		case 'd':
		    int_val = va_arg(ap, int);
		    sprintf(temp, "%d", int_val);
		    puts(temp);
		    break;

		case 'f':
		    d_val = va_arg(ap, double);
		    sprintf(temp, "%f", d_val);
		    puts(temp);
		    break;

		default:
		    putchar(*str);
		    break;
	    }
	}
	else
	{
	    putchar(*str);
	}
	str++;
    }
    va_end(ap);

    return 1; // Should return no. of characters printed
}

int main()
{
    double res; 

    int i_val = 10;
    double d_val = 2.5;

    my_printf("hello %d %f", i_val, d_val);

    return 0;
}*/


/*#include <stdio.h>

int main()
{
    char buf[1000];

    int id = 150;
    float f = 3.56;

    sprintf(buf, "%d", id); //Convert integer to string (sprintf prints the message into a buf)
    printf("buf = %s\n", buf);

    printf("%d %f\n", id, f);
    sprintf(buf, "%d %f", id, f);

    printf("buf = %s\n", buf);

    //sprintf(buf, "%d", id);
    //sprintf(buf, "%f", f);
    //sprintf(buf + strlen(buf) , "%f", f);


}*/


/*#include <stdio.h>
#include <stdarg.h>

// In calc_mean we expect user to pass double values after num
// num indicates how many values the caller has passed
 //
double calc_mean(int num, ...)
{
    va_list ap;
    double temp, sum = 0;
    int i;

    va_start(ap, num);//Initialize argument pointer to num
    for (i = 0; i < num; i++)
    {
	temp = va_arg(ap, double); //Fetch the next argument (of double type)
	printf("%lf ", temp);
	sum += temp;
    }
    printf("\n");
    va_end(ap);
    return (sum / num);
}

int main()
{
    double res; 

    res = calc_mean(3, 3, 4, 5);
    printf("avg = %lf\n", res);

//    res = calc_mean(2, 1.0, 2.0);
//    printf("avg = %lf\n", res);

    return 0;
}*/


/*#include <stdio.h>

int main()
{
    int num = 0x12345678;
    int *iptr = &num;
    char *cptr = (char *)&num;
    short *sptr = (short *)&num;

    printf("*iptr = %x\n", *iptr);
    printf("*cptr = %x\n", *cptr);
    printf("*sptr = %x\n", *sptr);

    return 0;
}*/


/*#include <stdio.h>

inline int sum(int x, int y)
{
    return x + y;
}

int main()
{
    int res;

    res = sum(5, 10);
}*/


/*#include <stdio.h>

void change(int num)
{

    if (num < 0)
    {
	return;
    }
    else
    {
    	puts("num is +ve");
    }
}

int main()
{
    int x = -1;

    change(x);

    return 1;
}*/


/*#include <stdio.h>

int main()
{
    int x;
    char ch;

    printf("Enter a number: ");
    scanf("%d", &x);


    printf("Enter a char: ");
    scanf("%c", &ch);
    scanf("%c", &ch);
    
    printf("You entered %d and %d\n", x, ch);

    return 0;
}*/


/*#include <stdio.h>
#include <ctype.h>

int main()
{
    int x;
    char ch;

    printf("Enter a number: ");
    scanf("%d", &x);

    printf("Enter a Non whitespace char: ");
    while(isspace(ch = getchar()))
    	;

    printf("You entered %d and %c\n", x, ch);
    return 0;
}*/


/* FILE: buffer_input.c
 * Description: 
 */

/*#include <stdio.h>
int main()
{
    char ch;
    while(1)
    {
	ch = getchar();
	putchar(ch + 1);
    }
    return 0;
}*/


/* FILE: buffer_input.c
 // Description: Usage of ungetc
 //

#include <stdio.h>
int main()
{
    int x, y;
    char ch;

    printf("Enter int: ");
    scanf("%d", &x);

    // Ignore white spaces //
    while(isspace(ch = getchar()))
	    ;

    ungetc(ch, stdin); //Put the last char (in ch) back to input buffer
    scanf("%d", &y);

    printf("x = %d\n", x);
    printf("ch = %c\n", ch);
    printf("y = %d\n", y);
    return 0;
}*/


/*#include <stdio.h>
#include <unistd.h>

int main()
{
    while (1)
    {
	printf("hello");
	fflush(stdout);
	sleep(1);
    }
    return 0;
}*/


/*#include <stdio.h>

int main()
{
    while (1)
    {
	printf("hello");
	fflush(stdout); //flush o/p buffer
	sleep(1);
    }
    return 0;
}*/


/*#include <stdio.h>

int main()
{
    while (1)
    {
	printf("hello\n");
	sleep(1);
    }
    return 0;
}*/


/*#include <stdio.h>

int main()
{
    while (1)
    {
	printf("hello");
	fflush(stdout);
	sleep(1);
    }
    return 0;
}*/


/*#include <stdio.h>
#include <unistd.h>

int main()
{
    int i;
    for (i = 0; i < 5; i++)
    {
	printf("hello");
	sleep(1);
    }

    return 0;
}*/



/**********************************************************************

#include <stdio.h>

int main()
{
    char *str = "11111111111111111111111111111111111111111111111111111111111111111111111111111111111111111111111111111111111111111111111111111111111111111111111111111111111111111111111111111111111111111111111111111111111111111111111111111111111111111111111111111111111111111111111111111111111111111111111111111111111111111111111111111111111111111111111111111111111111111111111111111111111111111111111111111111111111111111111111111111111111111111111111111111111111111111111111111111111111111111111111111111111111111111111111111111";
    while (1)
    {
	printf("%s", str);
	sleep(1);
    }
    return 0;
}*/


/* FILE: percent.c
 // Description: 
 //

#include <stdio.h>
int main()
{
    int i = 0;

    for (i = 0; i <= 10; i++)
    {
	printf("%3d%%\r", i);
	fflush(stdout);
	sleep(1);
    }
    printf("\n");
    return 0;
}*/


/* FILE: percent.c
 // Description: 
 //

#include <stdio.h>
#include <unistd.h>
int main()
{
    int i = 0;

    for (i = 0; i <= 10; i++)
    {
	printf("%d%%\r", i);
	sleep(1);
    }
    printf("\n");
    return 0;
}*/


/* FILE: percent_discard.c
 // Description: 
 //

#include <stdio.h>
int main()
{
    int i;

    for (i = 1; i <= 5; i++)
    {
	printf("\r%3d%%", i);
	fflush(stdout);
	sleep(1);
    }
    printf("\n");
    return 0;
}*/


/* FILE: print_upper.c 
 // Description: 
 //

#include <stdio.h>
#include <ctype.h>

int main()
{
    char ch;

    while(1)
    {
	//Read char
	ch = getchar();
	
	//Check for char x
	if (ch == 'x')
	    break;

	putchar(toupper(ch)); //Print upper case
    }

    putchar('\n');

    return 0;
}*/


/* FILE: print_upper.c 
 // Description: 
 //

#include <stdio.h>
#include <ctype.h>

int main()
{
    char ch;

    //Read char until user enters x
    while((ch = getchar()) != 'x')
    {
	putchar(toupper(ch)); //Print upper case
    }

    putchar('\n');

    return 0;
}*/


/*#include <stdio.h>

int main()
{
    unsigned char ch; 

    ch = getchar();
    while (ch != EOF) // Check for EOF (Press Ctrl-D)
    {
    	putchar(ch + 1);
	ch = getchar();
    }

    puts("DONE");

    return 0;
}*/


/*#include <stdio.h>

int main()
{
    int ch; 

    ch = getchar();
    while (ch != EOF) // Check for EOF (Press Ctrl-D)
    {
    	putchar(ch + 1);
	ch = getchar();
    }

    puts("DONE");

    return 0;
}*/


/*#include <stdio.h>

int main()
{
    int ch;
    int n_chars = 0, n_words = 0, n_lines = 0;

    ch = getchar();
    while (ch != EOF) // Check for EOF (Press Ctrl-D)
    {
	//Count chars
	n_chars++;
	ch = getchar();
    }

    printf("No. of chars = %d\n", n_chars);

    return 0;
}*/


/*#include <stdio.h>

int main()
{
    int ch;
    int n_chars = 0, n_words = 0, n_lines = 0;

    // While ch is not EOF (ctrl-d)
    while( (ch = getchar()) != EOF)
    {
	//Count chars
	n_chars++;
    }
    
    printf("No. of chars = %d\n", n_chars);

    return 0;
}*/


/*#include <stdio.h>

int main()
{
    unsigned char ch = -1;
    
    //if (255 == -1)
    if (ch == -1)
    {
    	puts("Yes");
    }
    else
    {
    	puts("Nope");
    }

    return 0;
}*/


/*#include <stdio.h>

int main()
{
    printf("Hello\rWorld\n");
    printf("Hello\b");
    printf("Hello\vWorld");
    return 0;
}*/


/* FILE: print_dir_path.c
 // Description: 
 //

#include <stdio.h>
int main()
{
    puts("C:\temp\new");
    puts("C:\\temp\\new");
    return 0;
}*/


/*#include <stdio.h>

int main()
{
    puts("hello");
    puts("\f");
    puts("world");
}*/


/* FILE: char_ascii.c
 // Description: 
 //

#include <stdio.h>
int main()
{
    printf("%d\n", 65);
    printf("%c\n", 65);
    printf("%c\n", 'A');
    return 0;
}*/


/* FILE: flag_format.c
 // Description: 
 //

#include <stdio.h>
int main()
{
    int num = 0xAF;

    printf("num = %d\n", num);
    printf("num = %o\n", num);
    printf("num = %X\n", num);

    printf("num = %#o\n", num); // Prints prefix 0
    printf("num = %#X\n", num); // Prints prefix 0X
    return 0;
}*/


/*#include <stdio.h>

int main()
{
    double f = 453.1285618;
    //double f = 0.0000004;
    double g = 1.2567;
    //double f = 0.00000000789;

    printf("%f\n", f);
    printf("%6.2f\n", g);
    printf("%10.2f\n", g);

    printf("%.2f\n", f);
    printf("%f\n%e\n%g\n", f, f, f);


    f = 0.00000000789; //Store a very small value
    printf("f is %f\n", f);
    printf("%.9f\n", f);
    printf("%5.2f\n", f);

    printf("%Lf\n",1.23456789L);

    return 0;
}*/


/*#include <stdio.h>

int main()
{
    double f = 453.1285618;

    printf("%f\n", f);
    printf("%.2f\n", f);//Precision set to 2 decimal places
    printf("%10.2f\n", f);//Width = 10, precision = 2

#if 0
    f = 0.00000000789; //Store a very small value
    printf("f is %f\n", f);
    printf("%.9f\n", f);

    printf("%6.2f\n", f);
    printf("%10.2f\n", g);

    printf("%f\n%e\n%g\n", f, f, f);


    f = 0.00000000789; //Store a very small value
    printf("f is %f\n", f);
    printf("%.9f\n", f);
    printf("%5.2f\n", f);

    printf("%Lf\n",1.23456789L);
#endif

    return 0;
}*/


/*#include <stdio.h>

int main()
{
    double val = 0.00000000789;

    printf("val = %.12f\n", val);

    return 0;
}*/


/*#include <stdio.h>

int main()
{
    //double f = 453.1285618;
    //double f = 0.0000004;
    double f = 0.00000000789;

    printf("%f\n%e\n%g\n", f, f, f);


#if 0
    f = 0.00000000789; //Store a very small value
    printf("f is %f\n", f);
    printf("%.9f\n", f);
    printf("%5.2f\n", f);

    printf("%Lf\n",1.23456789L);
#endif

    return 0;
}*/


/*#include <stdio.h>

int main()
{
    int i, j;
    int a[3][4] = {
		    {1, 1245, 230, 4},
		    {12, 1, 23, 4000}, 
		    {1000, -145, -2, 45}
		}; 

    for (i = 0; i < 3; i++)
    {
	for (j = 0; j < 4; j++)
	{
	    printf("%-7d", a[i][j]); //minus for left align
	}
	puts("");
    }
    return 0;
}*/


/* FILE: percent_print.c
 // Description: 
 //

#include <stdio.h>
int main()
{
    printf("100%"); //Incorrect
    printf("100%%\n");
    return 0;
}*/


/*#include <stdio.h>

int main()
{
    int width;
    for (width = 1; width < 15; width++)
    {
	printf("%*d\n", width, 1);
    }
    return 0;
}*/


/*#include <stdio.h>

int main()
{
    int sum = 0;
    int num1, num2, num3;
    char ch1, ch2;

    printf("Enter numbers as comma/space/colon seperated values\n");
    //scanf("%d%c%d%c%d", &num1, &ch1, &num2, &ch2, &num3);
    scanf("%d%*c%d%*c%d", &num1, &num2, &num3); // Skips a char

    sum = num1 + num2 + num3;
    printf("Sum = %d\n", sum);

    return 0;
}*/


/*#include <stdio.h>

int main()
{
    char *str = "hi";
    printf("%s\n", str);
    printf("%9s\n", str);

#if 0
    printf("%3d\n", 1);
    printf("%3d\n", 12);
    printf("%3d\n", 123);
    printf("%3d\n", 1234);

    printf("%-3d:\n", 1);
    printf("%-3d:\n", 12);
    printf("%-3d:\n", 123);
    printf("%-3d:\n", 1234);

#endif
    return 0;
}*/


/* FILE: string_precision.c 
 // Description: 
 //

#include <stdio.h>

int main()
{
    char *str = "Hello World";
    printf("%.5s\n", str); //Print 5 chars
    return 0;
}*/


/*#include <stdio.h>

int main()
{
    unsigned int x = 1 << 31;

    printf("uint x = %u\n", x);
    printf("uint x = %d\n", x);

    return 0;
}*/


/*#include <stdio.h>
#include <stdlib.h>

int main()
{
    char name[30];
    char temp[30];
    unsigned int id;
    int status;

    printf("Enter name: ");
    status = scanf("%[a-zA-Z]", name);

    if (status == 1) //Check whether user typed alphabet correctly
    	printf("Name: %s\n", name);
    else
    {
    	printf("%s\n", "You entered invalid name");
    	return 1;
    }

    getchar(); //Ignore \n

    printf("Enter an ID: ");
    status = scanf("%[0-9]", temp);
    if (status == 1)
    {
    	//printf("Print string temp: %s\n", temp);
    	id = atoi(temp); //Convert string to integer
    	printf("ID: %d\n", id);
    }
    else
    {
    	printf("%s\n", "You entered invalid ID");
    	return 1;
    }

    return 0;
}*/


/*#include <stdio.h>

int main()
{
    int ret;
    int num = 12345678;
    char string[] = "Hello World";

    ret = printf("%s\n", string);
    printf("The previous printf() printed %d chars\n", ret);

    ret = printf("%d", num);
    printf("The previous printf() printed %d chars\n", ret);

    return 0;
}*/


/*#include <stdio.h>

int main()
{
    char x, y;

    printf("Enter 2 chars: ");
    scanf("%c%c", &x, &y);

    printf ("x = %d, y = %d\n", x, y);

    return 0;
}*/


/* FILE: print_ret_quiz.c
 // Description: 
 //

#include <stdio.h>
int main()
{
    printf("%d", printf("%d", printf("%d", 43)));
    return 0;
}*/


/*#include <stdio.h>

int main()
{
    int x = 99, count;

    printf("Enter a number: ");
    count = scanf("%d", &x);

    if (count == 1)
    {
	printf("You entered %d\n", x);
    }
    else
    {
    	puts("You entered invalid value");
	printf("Value of x is %d\n", x);
    }
    return 0;
}*/


/*#include <stdio.h>

int main()
{
    int x, y;

    printf("Enter 2 numbers: ");
    scanf("%d%d", &x, &y);

    printf ("x = %d, y = %d\n", x, y);

    return 0;
}*/


/*#include <stdio.h>

int main()
{
    int int_val, count;
    float float_val;
    char str[100];

    printf("Enter int float and string: ");
    count = scanf("%d%f%s", &int_val, &float_val, str);

    printf("Items read = %d\n", count);

    return 0;
}*/


/* FILE: basic_string_io.c 
 // Description: 
 //

#include <stdio.h>

int main()
{
    char str[20];

    printf("Enter a string: ");
    gets(str); //Read a string and store it in str
    puts(str); //Print str

    printf("Enter a string: ");
    scanf("%s", str);
    printf("You entered %s\n", str);

    return 0;
}*/


/* gets_Vs_fgets.c
 * Illustrates use of fgets, and problems with gets
 * gets is dangerous as it may lead to buffer overflow.
 * ie., it does not check for the size of the
 * input string array. This applies for scanf("%s", str)
 * also.
 * fgets is safer, as  you can specify the size of array.
 * If user enters more characters in stdin, they are ignored.
 * Only size - 1 characters are read. 1 byte is reserved for \0
 *

#include <stdio.h>

int main()
{
    char str[10];

    printf("Enter a string: ");

   //gets(str);

   fgets(str, 10, stdin);
   printf("%s\n", str);

    return 0;
}*/


//-rw-rw-r-- 1 mubeen_jukaku mubeen_jukaku 181 Oct 19 15:48 read_write.c//


/*#include <stdio.h>

int main()
{
    int ret;

    ret = printf("hello\n");
    (ret != -1) ? printf("Printed %d chars\n", ret) : puts("Failed to print");

    close(1); // close stdout

    ret = printf("world\n");
    (ret != -1) ? fprintf(stderr, "Printed %d chars\n", ret) : fprintf(stderr, "Failed to print\n");

    return 0;
}*/


/*#include <stdio.h>

int main()
{
    int ret;

    ret = printf("hello\n");

    close(1); // close stdout

    ret = printf("world\n");

    return 0;
}*/


/* FILE: read_write.c
 * Description: 
 *

#include <stdio.h>
#include <string.h>
int main()
{
    printf("hello\n");
    //write(1, "hello\n", strlen("hello\n"));
    return 0;
}*/


/* FILE: get_put_char.c 
 * Description: 
 *

#include <stdio.h>

int main()
{
    char ch;

    puts("Enter a char: ");
    ch = getchar();
    putchar(ch + 1);
    putchar('\n');

    return 0;
}*/


/* FILE: puts_gets.c 
 * Description: 
 *

#include <stdio.h>

int main()
{
    char str[10] = "hello";
    char name[10];

    //printf("str = %s\n", str);
    puts(str);

    printf("Enter your name: ");
    //gets(name); // Read a string
    fgets(name, sizeof(name), stdin);
    //scanf("%s", name);
    printf("Hello %s\n", name);

    return 0;
}*/


/* FILE: indentation.c
 * Description: File contains how to indent and space a file
 * Date: Wed Sep 28 15:22:51 IST 2016
 *

#include <stdio.h>
//      ^
//      | space after include

int main()
{
    int num1, num2, num3;
    // Space after comma
    int val = 0, i;
    // Space between binary operator and operands
    // No space for unary operator (eg: !num, ~num)

    // Wrong way
    val=~num1*(num2+num3) -(num1 +num2);

    // Correct way
    val = ~num1 * (num2 + num3) - (num1 + num2);

    for (i = 0; i < 100; i++)
    {
	if (num2 > num3)
	{
	    printf("%d is greater than %d\n", num2, num3);
	}
    }

    return 0;
}*/


/*#include <stdio.h>
int main() { int num1, num2, num3; int val = 0, i; val=~num1*(num2+num3) -(num1 +num2); val = ~num1 * (num2 + num3) - (num1 + num2); for (i = 0; i < 100; i++) { if (num2 > num3) { printf("%d is greater than %d\n", num2, num3); return 0; } } return 0; }*/


/*#include <stdio.h>

int count = 10;

void foo()
{
    count++;

    printf("%d\n", count);
}

int main()
{
    int count;

    printf("%d\n", count);

    count = 50;
    foo();
}*/


/*#include <stdio.h>

int main()
{
    int x = 5;
    int *ptr;

    ptr = &x; //Store address of x in ptr

    printf("&x  = %p\n", &x);
    printf("ptr = %p\n", ptr);

//    printf("&ptr = %p\n", &ptr);

    return 0;
}*/


/*#include <stdio.h>

int main()
{
    int x = 5;
    int *ptr;

    ptr = &x;

    printf("x = %d\n", x);
    printf("*ptr = %d\n", *ptr);

    return 0;
}*/


/*#include <stdio.h>

int main()
{
    int x;
    int *ptr;

    ptr = &x;

    *ptr = 10;

    printf("x = %d\n", x);
    printf("*ptr = %d\n", *ptr);

    return 0;
}*/


/* FILE: rule1.c
 * Description: Pointer is an integer
 *

#include <stdio.h>
int main()
{
    int x, y;
    int *ptr;

    x = 10;
    ptr = 10;

    printf("x = %d\n", x);
    printf("ptr = %d\n", ptr);

    // Check for exception (Size might differ) //
    printf("sizeof int = %lu\n", sizeof(int));
    printf("sizeof long = %lu\n", sizeof(long));
    printf("sizeof pointer = %lu\n", sizeof(int *));

    y = ptr;
    printf("y = %d\n", y);

    return 0;
}*/


/* FILE: rule2_address_op.c
 * Description: Rule 2 - Use & operator to access the address of a variable
 *

#include <stdio.h>
int main()
{
    int x;
    int y;
    int *ptr;

    printf("&x = %p\n", &x);
    printf("&y = %p\n", &y);
    printf("&ptr = %p\n", &ptr);

    return 0;
}*/


/*#include <stdio.h>

int main()
{
    int x = 5, y;
    int *ptr;

    ptr = &x; //Store address of x in ptr

    printf("*ptr = %d\n", *ptr);
    printf("x = %d\n", x);

    y = *ptr;
    printf("y = %d\n", y);

    *ptr = *ptr + 10;
    printf("x = %d\n", x);
    // print &x and print value of ptr
    printf("&x = %p, ptr = %p\n", &x, ptr);

    return 0;
}*/


/* FILE: rule4.c
 * Description: Type of a pointer
 * Illustrates: No. of bytes fetched, when de-referenced
 * type *ptr, when de-referenced gives sizeof(type) bytes
 *

#include <stdio.h>
int main()
{
    double d = 2.5;
    char ch = 'A';

    int *iptr;
    char *cptr;
    double *dptr;

    printf("Sizeof *iptr = %lu\n", sizeof(*iptr));
    printf("Sizeof *cptr = %lu\n", sizeof(*cptr));
    printf("Sizeof *dptr = %lu\n", sizeof(*dptr));

    cptr = &ch; //Store address of char ch
    dptr = &d;  //Store address of double d 

    printf("*cptr = %c\n", *cptr); //De-reference char pointer (fetches a char - 1 byte)
    printf("*dptr = %f\n", *dptr); //De-reference double pointer (fetches a double - 8 bytes)

    return 0;
}*/


/*char* func()
{
   char str[10];
   strcpy(str,"Hello!");
   return(str); 
}*/


/*void func()
{
    char *ch;
    ch = (char*) malloc(10);

    // do something with ch
}

int main()
{
    func();

    //do something here
}*/


/*#include <stdio.h>

int main()
{
    int x = 0x12345698;
    char *ptr = (char *)&x; //Typecast to suppress compiler warning about pointer mismatch
    int i;

    for (i = 0; i < 4; i++)
    {
    	//printf("%x ", ptr[i]);
    	//printf("%x ", *(ptr + i) & 0xFF);
    	printf("%hhx ", *(ptr + i));
    }

    puts("");

    return 0;
}*/


/*#include <stdio.h>

int main()
{
    int x = 100;
    int y;
    const int *ptr = &x; // *ptr is constant

    y = *ptr;
    //ptr++; // This is allowed

    *ptr = 5; // Is not OK

    ptr[0] = 1000;

}*/


/*#include <stdio.h>
#include <stdlib.h>
#include <limits.h>

int main()
{
    int *ptr = NULL;
    int n = 10, i;

    // Allocate array dymanically //
    ptr = malloc(n * sizeof(int));
    if (ptr == NULL)
    {
    	fprintf(stderr, "Error: Unable to allocate memory\n");
    	return 1;
    }

    //Use the dynamic memory
    for (i = 0; i < n; i++)
    {
    	ptr[i] = i + 1;
    	printf("%d ", ptr[i]);
    }
    printf("\n");

    // Free memory //
    if (ptr != NULL)
    {
    	free(ptr);
    	ptr = NULL;
    }

#if 0
    //Use the dynamic memory after freeing?
    for (i = 0; i < n; i++)
    {
    	ptr[i] = i + 1;
    	printf("%d ", ptr[i]);
    }
    printf("\n");
    //ptr[2] = 20;
#endif
    return 0;
}*/


/*#include <stdio.h>
#include <stdlib.h>

int main()
{
    int *ptr = NULL;
    int n = 10, i;

    // Allocate array dymanically //
    ptr = (int *)calloc(n, sizeof(int));
    if (ptr == NULL)
    {
    	fprintf(stderr, "Error: Unable to allocate memory\n");
    	return 1;
    }

    //Use the dynamic memory
    for (i = 0; i < n; i++)
    {
    	printf("%4d", ptr[i]);
    }
    printf("\n");

    // Free memory //
    if (ptr != NULL)
    {
    	free(ptr);
    	ptr = NULL;
    }

    return 0;
}*/


/*#include <stdio.h>
#include <stdlib.h>

int main()
{
    int *ptr = NULL;
    int n = 10;

    // Allocate array dymanically //
    ptr = malloc(n * sizeof(int));
    //ptr = malloc(-1);
    if (ptr == NULL)
    {
    	fprintf(stderr, "Error: Unable to allocate memory\n");
    	return 1;
    }

    *ptr = 10; //Store data
    *(ptr + 1) = 20;

    printf("*ptr = %d\n", *ptr);
    printf("*(ptr + 1) = %d\n", *(ptr + 1));

    // Free memory //
    if (ptr != NULL)
    {
    	free(ptr);
    	ptr = NULL;
    }

    return 0;
}*/


/*#include <stdio.h>
#include <stdlib.h>

int main()
{
    int *ptr = NULL, *new_ptr = NULL;
    int n = 10;

    //ptr = malloc(-1);
    // Allocate array dymanically //
    ptr = (int *)malloc(n * sizeof(int));
    if (ptr == NULL)
    {
    	fprintf(stderr, "Error: Unable to allocate memory\n");
    	return 1;
    }

    ptr[0] = 1;

    printf("ptr[0] = %d\n", ptr[0]);

    // Resize memory (double it)
    new_ptr = realloc(ptr, (n * 2) * sizeof(int));

    if (new_ptr != NULL)
    {
    	ptr = new_ptr; // Store in old ptr
    }
    else
    {
    	// realloc failes. Print error
    }


    // Free memory //
    if (ptr != NULL)
    {
    	free(ptr);
    	ptr = NULL;
    }

    // Do something else //

    return 0;
}*/


/*#include <stdio.h>
#include <stdlib.h>

int * foo(void)
{
    int *ptr = malloc(sizeof(int));
    *ptr = 10;

    return ptr;
}

int main()
{
    int *ptr;

    ptr = foo();

    printf("*ptr = %d\n", *ptr);

    if (ptr)
    {
	free(ptr);
	ptr = NULL;
    }

    return 0;
}*/


/*#include <stdio.h>
#include <stdlib.h>

int * foo(void)
{
    static int a = 10;

    return &a;
}

int main()
{
    int *ptr;
    ptr = foo();
    printf("*ptr = %d\n", *ptr);

    return 0;
}*/


/*#include <stdio.h>
#include <stdlib.h>

int main()
{
    int *ptr = NULL, *new_ptr = NULL;
    int n = -1, i;

    // Allocate array dymanically //
    ptr = (int *)malloc(5 * sizeof(int));
    if (ptr == NULL)
    {
    	fprintf(stderr, "Error: Unable to allocate memory\n");
    	return 1;
    }

    for (i = 0; i < 5; i++) //Store values 1 to 5
	ptr[i] = i + 1;

    printf("Enter new size: "); // get new size
    scanf("%d", &n);

    if(n < 1)
    {
	printf("Enter a valid +ve no:\n");
	goto ERR;
    }

    new_ptr = realloc(ptr, n * sizeof(int)); //Resize
    if (new_ptr == NULL)
    {
	fprintf(stderr, "Error: Unable to re-allocate memory\n");
	n = 5; //Reset to old size
    }
    else
    {
	ptr = new_ptr; //We will continue to use ptr, instead of new_ptr
	for (i = 5; i < n; i++) //Store values 6 to n
	    ptr[i] = i + 1;
    }

    for (i = 0; i < n; i++) //Print values
	printf("%4d", ptr[i]);

    puts("");

ERR:
    // Free memory //
    if (ptr != NULL)
    {
    	free(ptr);
    	ptr = NULL;
    }

    // Do something else //

    return 0;
}*/


/*#include <stdio.h>
#include <stdlib.h>
#include <string.h>

char *my_strdup(const char *str)
{
    char *ptr;

    // Allocate memory for new string
    ptr = (char *)malloc(strlen(str) + 1);
    if (ptr != NULL)
    {
    	strcpy(ptr, str); // Copy original string to new string
    }

    return ptr; // Return address of new string
}

int main()
{
    char str[] = "Hello";
    char *dup;

    dup = my_strdup(str); //Implement my_strdup.
    if (dup == NULL)
    {
    	printf("ERROR: Cannot duplicate string. Malloc failed\n");
    	return 1;
    }

    printf("Duplicate string is %s\n", dup);

    free(dup);
    dup = NULL;

    return 0;
}*/


/* sum_array.c
 * Function to find the sum of array elements
 *

#include <stdio.h>
#include <stdlib.h>

int sum_array(int *arr, int n);

int sum_array(int *arr, int n)
{
    int i, total = 0;

    for (i = 0; i < n; i++)
    {
    	total += *(arr + i);
    }

    return total;
}

int main()
{
    //int a[100];
    int *a;
    int sum, limit, i;

    printf("Enter no. of elements in array: ");
    scanf("%d", &limit);

    a = malloc(limit * sizeof(int));

    printf("Enter elements in array: ");
    for (i = 0; i < limit; i++)
    {
	scanf("%d", &a[i]);
    }

    sum = sum_array(a, limit);

    free(a);

    printf("sum = %d\n", sum);
}*/


/*#include <stdio.h>
#include <string.h>
#include <stdlib.h>

int main()
{
    char str[] = "hello";
    char *dup;

    // Duplicate str. dup contains the address of duplicate string
    dup = strdup(str);

    if (dup == NULL)
    {
	printf("ERROR: memory allocation failed in strdup");
	return 1;
    }

    puts("Printing the duplicate string");
    puts(dup);


    // Free the memory
    free(dup);

    return 0;
}*/


/*#include <stdio.h>

int main()
{
    int x = 1;
    char *ptr = (char *)&x;

    if (*ptr == 1)
    {
    	puts("Little Endian");
    }
    else
    {
    	puts("Big Endian");
    }

    return 0;
}*/


/*#include <stdio.h>

int main()
{
    int x = 1;

    if (*(char *)(&x) == 1) //Type cast to char* and de-reference. This will fetch only 1 byte
    {
    	puts("Little Endian");
    }
    else
    {
    	puts("Big Endian");
    }

    return 0;
}*/


/*#include <stdio.h>

int main()
{
    int num = 0x12345678;
    char *cptr = &num;
    int *iptr = &num;

    printf("*iptr = %x\n", *iptr);
    printf("*cptr = %x\n", *cptr);


    return 0;
}*/


/*#include <stdio.h>

int main()
{
    int x = 5;
    int *ptr;
    int **pptr;

    ptr = &x; // ptr is pointing to an integer
    pptr = &ptr; //pptr is pointing to int * (integer pointer)

    printf("pptr = %p\n", pptr); //Contains &ptr
    printf("&ptr = %p\n", &ptr); // For validation
    puts("");

    printf("&x    = %p\n", &x);
    printf("ptr   = %p\n", ptr); // Contains &x
    printf("*pptr = %p\n", *pptr); // *pptr is same as ptr
    puts("");

    printf("*ptr   = %d\n", *ptr); // Get x using ptr
    printf("**pptr = %d\n", **pptr); // Get x using pptr

    return 0;
}*/


/* FILE: 2_multlevel.c
 * Description: 
 *

#include <stdio.h>

void foo(int **pptr)
{
    **pptr = 50;
}

int main()
{
    int x = 10;
    int *ptr = &x;

    foo(&ptr);

    printf("x = %d\n", x);

    return 0;
}*/


/* FILE: 3_alloc_array.c
 * Description: 
 *

#include <stdio.h>
#include <stdlib.h>

void alloc_mem(int **pptr, int nmemb)
{
    *pptr = (int *)malloc(nmemb * sizeof(int));
    **pptr = 1;
}

int main()
{
    int *ptr = NULL;

    alloc_mem(&ptr, 5);
    if (ptr == NULL)
	exit(1);

    printf("Allocated memory\n");
    printf("ptr[0] = %d\n", ptr[0]);
    
    // Free mem
    if (ptr != NULL)
    {
	free(ptr);
	ptr = NULL;
    }

    return 0;
}*/


/*int main()
{
    short testarray[4][3] = { {1}, {2, 3}, {4, 5, 6} };
    printf( "%d\n", sizeof( testarray ) );
    return 0;
}*/


/*#include <stdio.h>

int *check ( int i , int j )
{
    int *p, *q ;
    p = &i ;
    q = &j ;

    printf("&i = %lu\n", &i);
    printf("&j = %lu\n", &j);
    if ( i >= 45 )
	return ( p ) ;
    else
	return ( q ) ;
}

int main( )
{
    int *c;
    c = check ( 10, 20 ) ;
    printf ("c = %lu\n", c) ;
    return 0;
}*/


/*#include <stdio.h>
int main()
{
    static char *s[] = {"white", "yellow", "violet", "black"};
    char **ptr[] = {s+3, s+2, s+1, s}, ***p;

    p = ptr;
    **++p;

    printf("%s\n", *--*++p+3);

    puts("");
    return 0;
}*/


/*#include <stdio.h>
int main( )
{
    static char s[25] ="The cocaine man";
    int i = 0 ;
    char ch ;

    ch = s[++i] ;
    printf ( "%c", ch );
    ch = s[i++] ;
    printf ( "%c", ch );
    ch = i++[s] ;
    printf ( "%c", ch );
    ch = ++i[s] ;
    printf ( "%c", ch );

    puts("");
    return 0;
}*/


/*#include <stdio.h>
int main()
{
    int *ptr = NULL;

    printf("ptr = %lu\n", ptr); // Print ptr
    printf("*ptr = %d\n", *ptr); // Not allowed to deref NULL pointer

    return 0;
}*/


/*#include <stdio.h>
int main()
{
    int *ptr1;
    int *ptr2;
    int *ptr3;

    printf("*ptr = %d\n", *ptr1); //never de-reference an un initialized pointer
    printf("*ptr = %d\n", *ptr2);
    printf("*ptr = %d\n", *ptr3);

    return 0;
}*/


/*#include <stdio.h>

void swap_generic(void *ptr1, void *ptr2, int size);

void swap_generic(void *ptr1, void *ptr2, int size)
{
    int i;
    char temp;

    for (i = 0; i < size; i++)
    {
    	// Swap one byte
    	temp = *(char *)ptr1;
    	*(char *)ptr1 = *(char *)ptr2;
    	*(char *)ptr2 = temp;

    	// Increment pointer by 1
    	ptr1 = (char *)ptr1 + 1;
    	ptr2 = (char *)ptr2 + 1;
    }
}

void swap_generic2(void *ptr1, void *ptr2, int size)
{
    int i;
    char temp;

    for (i = 0; i < size; i++)
    {
    	// Swap one byte
    	temp = ((char *)ptr1)[i];
	((char *)ptr1)[i] = ((char *)ptr2)[i];
	((char *)ptr2)[i] = temp;
    }

}

// Implement a generic swap function //
int main()
{
    int x = 5, y = 10;
    int a[3] = {1, 2, 3};
    int b[3] = {5, 6, 7};
    int i;

    double d1 = 7.5, d2 = 3.56;

    swap_generic(&x, &y, sizeof(x));
    printf("x = %d, y = %d\n", x, y); // Should print 10 and 5

    swap_generic(&d1, &d2, sizeof(d1));
    printf("d1 = %f, d2 = %f\n", d1, d2); // Should print 3.56 and 7.5

    swap_generic(a, b, sizeof(a)); // Swap arrays

    // Print array elements //
    for (i = 0; i < 3; i++)
    {
    	printf("a[%d] = %d, b[%d] = %d\n", i, a[i], i, b[i]);
    }
}*/


/*#include <stdio.h>

void swap_generic(...);
// Implement a generic swap function //
int main()
{
    int x = 5, y = 10;
    int a[3] = {1, 2, 3};
    int b[3] = {5, 6, 7};
    int i;

    double d1 = 7.5, d2 = 3.5;

    swap_generic(.....); // Swap 2 ints
    printf("x = %d, y = %d\n", x, y); // Should print 10 and 5

    swap_generic(.....); // Swap 2 doubles
    printf("d1 = %f, d2 = %f\n", d1, d2); // Should print 3.56 and 7.5

    //swap_generic(.....); //Swap arrays a and b

    // Print array elements //
    for (i = 0; i < 3; i++)
    {
    	printf("a[%d] = %d, b[%d] = %d\n", i, a[i], i, b[i]);
    }
}*/


/*#include <stdio.h>

void swap_generic(void *ptr1, void *ptr2, size_t size);

// Implement a generic swap function //
void swap_generic(void *ptr1, void *ptr2, size_t size)
{
}

int main()
{
    int x = 5, y = 10;
    int a[3] = {1, 2, 3};
    int b[3] = {5, 6, 7};
    int i;

    double d1 = 7.5, d2 = 3.56;

    //swap_generic(.....); // Swap 2 ints
    swap_generic(&x, &y, sizeof(x)); // Swap 2 ints
    printf("x = %d, y = %d\n", x, y); // Should print 10 and 5

    swap_generic(&d1, &d2, sizeof(d1)); // Swap 2 doubles
    printf("d1 = %f, d2 = %f\n", d1, d2); // Should print 3.56 and 7.5

    swap_generic(a, b, sizeof(a)); // Swap 2 arrays

    // Print array elements //
    for (i = 0; i < 3; i++)
    {
    	printf("a[%d] = %d, b[%d] = %d\n", i, a[i], i, b[i]);
    }
}*/


/*#include <stdio.h>

int main()
{
    int a[5] = {1, 2, 3, 4, 5};

    void *vptr = a;

    printf("%d\n", *vptr);
    printf("%d\n", vptr[2]);
    printf("%p\n", vptr + 3);

    return 0;
}*/


/*#include <stdio.h>

int main()
{
    int a[5] = {1, 2, 3, 4, 5};

    void *vptr = a;

    printf("%d\n", *(int *)vptr);
    printf("%d\n", ((int *)vptr)[2]);
    //printf("%d\n", 2[(int *)vptr]);
    printf("%p\n", vptr);
    printf("%p\n", (int *)vptr + 3);
}*/


/*#include <stdio.h>
#include <stdlib.h>

int main()
{
    void *ptr;
    int *iptr;

    ptr = malloc(15);

    // Store a short
    *(short *)ptr = 0x1234;

    // Store a char after the short
    *((char *)ptr + 2) = 'A';

#if 1
    *((int *)((char *)ptr + 3)) = 0x12345678;
    *((double *)((char *)ptr + 7)) = 2.5;
#else
    iptr = (char *)ptr + 3;
    *iptr = 0x12345678;
#endif

    // Print the values
    printf("short val = %hx\n", *(short *)ptr);
    printf("1st char val = %c\n", *((char *)ptr + 2));
    printf("int val = %x\n", *((int *)((char *)ptr + 3)));

    // Free mem
    if (ptr != NULL)
    {
    	free(ptr);
    	ptr = NULL;
    }
    return 0;
}*/


/* FILE: void_ptr_basics1.c
 * Description: Typecast a void *
 *

#include <stdio.h>
int main()
{
    void *ptr;
    int x = 10, y;

    ptr = &x;
    y = *(int *)ptr;

    printf("y = %d\n", y);
    printf("%d\n", *(int *)ptr);
    return 0;
}*/


/*//Store data as below
// | 'A'  | 25    | 5000 | 2.5    |
// | char | short | int  | double |
#include <stdio.h>
#include <stdlib.h>

int main()
{
    void *ptr;
    int *iptr;

    ptr = malloc(15);
    if (ptr == NULL)
    {
    	printf("Memory allocation failed\n");
    	return 1;
    }

    // Store a char
    *((char *)ptr) = 'A';

    // Store a short after char
    *(short *)((char *)ptr + 1) = 25;

    *(int *)((char *)ptr + 3) = 5000;

    *(double *)((char *)ptr + 7) = 2.5;

    // Print the values
    printf("char val = %c\n", *(char *)ptr);
    printf("short val = %hd\n", *(short *)((char *)ptr + 1));
    printf("int val = %d\n", *(int *)((char *)ptr + 3));
    printf("double val = %f\n", *(double *)((char *)ptr + 7));

    // Free mem
    if (ptr != NULL)
    {
    	free(ptr);
    	ptr = NULL;
    }
    return 0;
}*/


/*#include <stdio.h>

int main()
{
    int num = 0x12345678;
    int *ptr = &num;
    char *cptr = (char *)&num;

    int int_val;
    char char_val;

    int_val = *ptr;
    char_val = *cptr;

    printf("*ptr = %x, int_val = %x\n", *ptr, int_val);
    printf("*cptr = %x, char_val = %x\n", *cptr, char_val);

    *cptr = 0x55;
    printf("*cptr = %x, char_val = %x\n", *cptr & 0xFF, char_val);

    return 0;
}*/


/*#include <stdio.h>

int main()
{
    int x = 50;
    int *ptr;

    ptr = &x;

    printf("&x = %p\n", &x);
    printf("ptr = %p\n", ptr);
    printf("*ptr = %d\n", *ptr);

    if(sizeof(char *) == sizeof(int *))
    {
	printf("Size of all pointers are equal\n");
    }
    else
    {
	printf("No they are not equal\n");
    }
}*/


/*#include <stdio.h>

int main()
{
    int x = 50, y;
    int *ptr;

    ptr = &x; // Store address of x in ptr

    *ptr = 25; // Change variable x using ptr

    printf("x = %d, *ptr = %d\n", x, *ptr);

    printf("&x = %p, ptr = %p\n", &x, ptr);

    y = *ptr + 10;

    printf("y = %d\n", y);

    printf("x = %d\n", x);

    return 0;
}*/


/* FILE: simple_ptr_add.c 
 * Description: 
 *

#include <stdio.h>

int main()
{
    double x = 5;
    double *ptr = &x;

    printf("ptr = %lu\n", ptr);
    printf("ptr + 1 = %lu\n", ptr + 1);

    return 0;
}*/


/* FILE: pointer_arithmetic1.c
 * Description: 
 *

#include <stdio.h>
int main()
{
    int a[5] = {1, 2, 3, 4, 5};
    int *ptr;

    //store address of a in ptr (2nd interpretation)
    ptr = a;

    printf("ptr = %p, &a = %p\n", ptr , &a);
    //prints address of a  (2nd interpretation)
    printf("a = %p\n", a);
    return 0;
}*/


/* FILE: pointer_arithmetic3.c
 * Description: Array access using pointer arithmetic
 *

#include <stdio.h>
int main()
{
    int a[5] = {10, 20, 30, 40, 50};
    int i;

    for (i = 0; i < 5; i++)
    {
	printf("%d ", *(a + i));
    }

    printf("\n");
    return 0;
}*/


/* FILE: pointer_arithmetic3.c
 * Description: Array access using pointer arithmetic
 *

#include <stdio.h>
int main()
{
    int a[5] = {10, 20, 30, 40, 50};
    int i;

    for (i = 0; i < 5; i++)
    {
	//printf("%d ", *(a + i));
	//printf("%d ", i[a] );
	printf("%lu ", (a + i));
	//printf("%lu ", &a[i]);
	//printf("\n");
    }

    printf("\n");
    return 0;
}*/


/* FILE: pointer_arithmetic1.c
 * Description: 
 *

#include <stdio.h>
int main()
{
    int a[5] = {1, 2, 3, 4, 5};
    int *ptr;

    //store address of a in ptr (2nd interpretation)
    ptr = a;
    printf("ptr = %p, &a = %p\n", ptr , &a);

    ptr = ptr + 1;
    printf("ptr = %p\n", ptr);
    return 0;
}*/


/* FILE: pointer_arithmetic1.c
 * Description: 
 *

#include <stdio.h>
int main()
{
    int a[5] = {1, 2, 3, 4, 5};
    int *ptr;

    //store address of a in ptr (2nd interpretation)
    ptr = a;
    printf("*ptr = %d\n", *ptr);

    ptr = ptr + 1;
    printf("*ptr = %d\n", *ptr);

    printf("*(ptr + 3) = %d\n", *(ptr + 3));

    printf("*ptr = %d\n", *ptr);
    return 0;
}*/


/* FILE: pointer_arithmetic3.c
 * Description: Array access using pointer arithmetic
 *

#include <stdio.h>
int main()
{
    int a[5] = {10, 20, 30, 40, 50};
    int *ptr;
    int i;

    //store address of a in ptr (2nd interpretation)
    ptr = a;

    for (i = 0; i < 5; i++)
    {
	printf("%d ", *(ptr + i));
    }

    printf("\n");
    return 0;
}*/


/* FILE: pointer_arithmetic3.c
 * Description: Array access using pointer arithmetic
 *

#include <stdio.h>
int main()
{
    int a[5] = {10, 20, 30, 40, 50};
    int *ptr;
    int i;

    //store address of a in ptr (2nd interpretation)
    ptr = a;

    for (i = 0; i < 5; i++)
    {
	printf("%d ", *ptr);
	ptr = ptr + i;
    }

    printf("\n");
    return 0;
}*/


/* FILE: pointer_arithmetic3.c
 * Description: Array access using pointer arithmetic
 *

#include <stdio.h>
int main()
{
    int a[5] = {10, 20, 30, 40, 50};
    int *ptr;
    int i;

    //store address of a in ptr (2nd interpretation)
    ptr = a;

    for (i = 0; i < 5; i++)
    {
	printf("%d ", *ptr);
	ptr = ptr + i;
    }

    printf("\n");
    return 0;
}*/


/* FILE: pointer_arithmetic3.c
 * Description: Array access using pointer arithmetic
 *

#include <stdio.h>
int main()
{
    int a[5] = {10, 20, 30, 40, 50};
    int *ptr;
    int i;

    //store address of a in ptr (2nd interpretation)
    ptr = a;

    for (i = 0; i < 5; i++)
    {
	printf("%d ", *ptr);
	ptr = ptr + 1;
    }

    printf("\n");
    return 0;
}*/


/* FILE: pointer_arithmetic3.c
 * Description: Array access using pointer arithmetic
 *

#include <stdio.h>
int main()
{
    int a[5] = {10, 20, 30, 40, 50};
    int *ptr;
    int i;

    //store address of a in ptr (2nd interpretation)
    ptr = a;

    for (i = 0; i < 5; i++)
    {
	*ptr = *(ptr + i);
	printf("%d ", *ptr);
    }

    for (i = 0; i < 5; i++)
    {
	printf("a[%d] = %d\n", i, a[i]);
    }
    printf("\n");
    return 0;
}*/


/* FILE: simple_ptr_add.c 
 * Description: 
 *

#include <stdio.h>

int main()
{
    char ch;
    int x = 5;
    double d;
    int *ptr = &x;
    char *cptr = &ch;
    double *dptr = &d;

    printf("cptr = %lu\n", cptr);
    printf("cptr + 1 = %lu\n", cptr + 1);

    printf("ptr = %lu\n", ptr);
    printf("ptr + 1 = %lu\n", ptr + 1);

    printf("dptr = %lu\n", dptr);
    printf("dptr + 1 = %lu\n", dptr + 1);

    return 0;
}*/


/*#include <stdio.h>

int main()
{
    int x = 10;
    int *ptr = &x;

    printf("%p\n", ptr);
    ptr = ptr * 3; // Pointer multiplication not allowed.
    printf("%p\n", ptr);
    return 0;
}*/


/*#include <stdio.h>

int main()
{
    int x = 5, y = 10, z;
    int *ptr1, *ptr2;

    ptr1 = &x;
    ptr2 = ptr1;

    z = *ptr2 + 20;
    printf("%p %p\n", ptr1, ptr2);

    ptr1 = &y;
    *ptr1 = 50;

    printf("x = %d, y = %d, z = %d\n", x, y, z);
    printf("*ptr1 =  %d, *ptr2 = %d\n", *ptr1, *ptr2);

    return 0;
}*/


 /* sigbus.c - Program to demostrate SIGBUS error.
  * This error occurs if we force alignment only.
  *

#include <stdio.h>
#include <stdlib.h>
 
int main(int argc, char **argv) {
    int *iptr;
    char *cptr;
 
#if 1
#if defined(__GNUC__)
# if defined(__i386__)
    // Enable Alignment Checking on x86 //
    __asm__("pushf\norl $0x40000,(%esp)\npopf");
# elif defined(__x86_64__) 
     // Enable Alignment Checking on x86_64 //
    __asm__("pushf\norl $0x40000,(%rsp)\npopf");
# endif
#endif
#endif
 
    // malloc() always provides aligned memory //
    cptr = malloc(sizeof(int) + 1);
 
    // Increment the pointer by one, making it misaligned //
    iptr = (int *) ++cptr;
 
    printf("Accessing integer\n");
    // Dereference it as an int pointer, causing an unaligned access //
    *iptr = 42;
 
    return 0;
}*/


/*#include <stdio.h>

void swap(int *ptr1, int *ptr2)
{
    int temp = *ptr1;
    *ptr1 = *ptr2;
    *ptr2 = temp;
}

int main()
{
    int x = 5, y = 10;

    swap(&x, &y);
    printf("x = %d, y = %d\n", x, y);
}*/


/*#include <stdio.h>

int main()
{
    int *ptr;

    printf("ptr = %p\n", ptr);
    printf("*ptr = %d\n", *ptr); 

    return 0;
}*/


/*#include <stdio.h>

int main()
{
    puts("Hello World");

    return 0;
}*/


/*# 1 "hello.c"
# 1 "<built-in>"
# 1 "<command-line>"
# 31 "<command-line>"
# 1 "/usr/include/stdc-predef.h" 1 3 4
# 32 "<command-line>" 2
# 1 "hello.c"

# 1 "/usr/include/stdio.h" 1 3 4
# 27 "/usr/include/stdio.h" 3 4
# 1 "/usr/include/features.h" 1 3 4
# 364 "/usr/include/features.h" 3 4
# 1 "/usr/include/x86_64-linux-gnu/sys/cdefs.h" 1 3 4
# 415 "/usr/include/x86_64-linux-gnu/sys/cdefs.h" 3 4
# 1 "/usr/include/x86_64-linux-gnu/bits/wordsize.h" 1 3 4
# 416 "/usr/include/x86_64-linux-gnu/sys/cdefs.h" 2 3 4
# 365 "/usr/include/features.h" 2 3 4
# 388 "/usr/include/features.h" 3 4
# 1 "/usr/include/x86_64-linux-gnu/gnu/stubs.h" 1 3 4
# 10 "/usr/include/x86_64-linux-gnu/gnu/stubs.h" 3 4
# 1 "/usr/include/x86_64-linux-gnu/gnu/stubs-64.h" 1 3 4
# 11 "/usr/include/x86_64-linux-gnu/gnu/stubs.h" 2 3 4
# 389 "/usr/include/features.h" 2 3 4
# 28 "/usr/include/stdio.h" 2 3 4*/


/*	.file	"hello.c"
	.section	.rodata
.LC0:
	.string	"Hello World"
	.text
	.globl	main
	.type	main, @function
main:
.LFB0:
	.cfi_startproc
	pushq	%rbp
	.cfi_def_cfa_offset 16
	.cfi_offset 6, -16
	movq	%rsp, %rbp
	.cfi_def_cfa_register 6
	leaq	.LC0(%rip), %rdi
	call	puts@PLT
	movl	$0, %eax
	popq	%rbp
	.cfi_def_cfa 7, 8
	ret
	.cfi_endproc
.LFE0:
	.size	main, .-main
	.ident	"GCC: (Ubuntu 6.3.0-12ubuntu2) 6.3.0 20170406"
	.section	.note.GNU-stack,"",@progbits*/


/*#include <math.h>
#include <stdio.h>

int main()
{
    double num = 25.0;
    double res;

    res = sqrt(num);

    printf("res = %f\n", res);

    return 0;
}*/


/*#include <stdio.h>

int main()
{
#if 0
    puts("hello");
    printf("First case\n");
#else
    puts("world");
    printf("second case\n");
#endif

    return 0;

}*/


/*#include <stdio.h>

int main()
{
    int x, y, temp;

#if 0
    x = x ^ y;
    y = x ^ y;
    x = x ^ y;
#else
    temp = x;
    x = y;
    y = temp;
#endif

    return 0;
}*/


/*#include <stdio.h>

#define METHOD1
int main()
{

#ifdef METHOD1
    puts("hello");
    printf("First case");
#else
    puts("world");
    printf("second case");
#endif


    return 0;

}*/


/*#include <stdio.h>

int main()
{
    int x, y, temp;

#ifdef SPACE_OPTIMIZED
    x = x ^ y;
    y = x ^ y;
    x = x ^ y;
#else
    temp = x;
    x = y;
    y = temp;
#endif

    return 0;
}*/


/*#include <stdio.h>

//#define SPACE_OPTIMIZED

int main()
{
    int x, y, temp;

#ifdef SPACE_OPTIMIZED
    x = x ^ y;
    y = x ^ y;
    x = x ^ y;
#else
    temp = x;
    x = y;
    y = temp;
#endif

    return 0;
}*/


/*#include <stdio.h>

#define DEBUG 1

#if (DEBUG == 1)
#define ERR_PRINT(args...) printf("%d:%s\n", __LINE__, \
__FILE__); printf(args)
#define WARN_PRINT(args...)
#define DBG_PRINT(args...)

#elif(DEBUG == 2)
#define ERR_PRINT(args...) printf("%d:%s\n", __LINE__, \
__FILE__); printf(args)
#define WARN_PRINT(args...) printf("%d:%s\n", __LINE__, \
__FILE__); printf(args)
#define DBG_PRINT(args...)

#elif(DEBUG == 3)
#define ERR_PRINT(args...) printf("%d:%s\n", __LINE__, \
__FILE__); printf(args)
#define WARN_PRINT(args...) printf("%d:%s\n", __LINE__, \
__FILE__); printf(args)
#define DBG_PRINT(args...) printf("%d:%s\n", __LINE__, \
__FILE__); printf(args)

#else
//#warning "DEBUG macro is not set. Please define it"
#define ERR_PRINT(args...)
#define WARN_PRINT(args...)
#define DBG_PRINT(args...)
#endif

int main()
{
    ERR_PRINT("ERROR: This is error %d\n", 3);
    DBG_PRINT("DEBUG: This is info\n");
    WARN_PRINT("WARN: This is warning %d\n", 1);
    return 0;
}*/


/*#include <stdio.h>

int main()
{
    int x, y, temp;

    
   // x = x ^ y;
    
   //y = x ^ y;
    
   // x = x ^ y;
    

    return 0;
}*/


/* FILE: test_blank_macro.c
 * Description: 
 *

#define SQUARE (x) (x * x)

#include <stdio.h>
int main   ()
{
    int size = SQUARE(5);

    printf("%d\n", size);

    return 0;
}*/


/*#include <stdio.h>

#if 0
#if (QT_LIB < 2)
#error "Version unsupported"
#endif

#ifndef __STDC__
#error "Not an ANSI compiler"
#endif
#endif

void display(int val)
{
    if (val < 0)
    {
	printf("Error in %s: %s @ %d on %s @ %s \n",
	    __FILE__, __func__, __LINE__, __DATE__, __TIME__);

	return;
    }

}

int main()
{
    printf("Error in %s: %s @ %d on %s @ %s \n",
	    __FILE__, __func__, __LINE__, __DATE__, __TIME__);

    display(-1);

    return 0;
}*/


/*# 1 "built_in.c"
# 1 "<built-in>"
# 1 "<command-line>"
# 1 "built_in.c"
# 1 "/usr/include/stdio.h" 1 3 4
# 28 "/usr/include/stdio.h" 3 4
# 1 "/usr/include/features.h" 1 3 4
# 324 "/usr/include/features.h" 3 4
# 1 "/usr/include/i386-linux-gnu/bits/predefs.h" 1 3 4
# 325 "/usr/include/features.h" 2 3 4
# 357 "/usr/include/features.h" 3 4
# 1 "/usr/include/i386-linux-gnu/sys/cdefs.h" 1 3 4
# 378 "/usr/include/i386-linux-gnu/sys/cdefs.h" 3 4
# 1 "/usr/include/i386-linux-gnu/bits/wordsize.h" 1 3 4
# 379 "/usr/include/i386-linux-gnu/sys/cdefs.h" 2 3 4
# 358 "/usr/include/features.h" 2 3 4
# 389 "/usr/include/features.h" 3 4
# 1 "/usr/include/i386-linux-gnu/gnu/stubs.h" 1 3 4



# 1 "/usr/include/i386-linux-gnu/bits/wordsize.h" 1 3 4
# 5 "/usr/include/i386-linux-gnu/gnu/stubs.h" 2 3 4


# 1 "/usr/include/i386-linux-gnu/gnu/stubs-32.h" 1 3 4
# 8 "/usr/include/i386-linux-gnu/gnu/stubs.h" 2 3 4
# 390 "/usr/include/features.h" 2 3 4
# 29 "/usr/include/stdio.h" 2 3 4





# 1 "/usr/lib/gcc/i686-linux-gnu/4.6/include/stddef.h" 1 3 4
# 212 "/usr/lib/gcc/i686-linux-gnu/4.6/include/stddef.h" 3 4
typedef unsigned int size_t;
# 35 "/usr/include/stdio.h" 2 3 4

# 1 "/usr/include/i386-linux-gnu/bits/types.h" 1 3 4
# 28 "/usr/include/i386-linux-gnu/bits/types.h" 3 4
# 1 "/usr/include/i386-linux-gnu/bits/wordsize.h" 1 3 4
# 29 "/usr/include/i386-linux-gnu/bits/types.h" 2 3 4


typedef unsigned char __u_char;
typedef unsigned short int __u_short;
typedef unsigned int __u_int;
typedef unsigned long int __u_long;


typedef signed char __int8_t;
typedef unsigned char __uint8_t;
typedef signed short int __int16_t;
typedef unsigned short int __uint16_t;
typedef signed int __int32_t;
typedef unsigned int __uint32_t;




__extension__ typedef signed long long int __int64_t;
__extension__ typedef unsigned long long int __uint64_t;







__extension__ typedef long long int __quad_t;
__extension__ typedef unsigned long long int __u_quad_t;
# 131 "/usr/include/i386-linux-gnu/bits/types.h" 3 4
# 1 "/usr/include/i386-linux-gnu/bits/typesizes.h" 1 3 4
# 132 "/usr/include/i386-linux-gnu/bits/types.h" 2 3 4


__extension__ typedef __u_quad_t __dev_t;
__extension__ typedef unsigned int __uid_t;
__extension__ typedef unsigned int __gid_t;
__extension__ typedef unsigned long int __ino_t;
__extension__ typedef __u_quad_t __ino64_t;
__extension__ typedef unsigned int __mode_t;
__extension__ typedef unsigned int __nlink_t;
__extension__ typedef long int __off_t;
__extension__ typedef __quad_t __off64_t;
__extension__ typedef int __pid_t;
__extension__ typedef struct { int __val[2]; } __fsid_t;
__extension__ typedef long int __clock_t;
__extension__ typedef unsigned long int __rlim_t;
__extension__ typedef __u_quad_t __rlim64_t;
__extension__ typedef unsigned int __id_t;
__extension__ typedef long int __time_t;
__extension__ typedef unsigned int __useconds_t;
__extension__ typedef long int __suseconds_t;

__extension__ typedef int __daddr_t;
__extension__ typedef long int __swblk_t;
__extension__ typedef int __key_t;


__extension__ typedef int __clockid_t;


__extension__ typedef void * __timer_t;


__extension__ typedef long int __blksize_t;




__extension__ typedef long int __blkcnt_t;
__extension__ typedef __quad_t __blkcnt64_t;


__extension__ typedef unsigned long int __fsblkcnt_t;
__extension__ typedef __u_quad_t __fsblkcnt64_t;


__extension__ typedef unsigned long int __fsfilcnt_t;
__extension__ typedef __u_quad_t __fsfilcnt64_t;

__extension__ typedef int __ssize_t;



typedef __off64_t __loff_t;
typedef __quad_t *__qaddr_t;
typedef char *__caddr_t;


__extension__ typedef int __intptr_t;


__extension__ typedef unsigned int __socklen_t;
# 37 "/usr/include/stdio.h" 2 3 4
# 45 "/usr/include/stdio.h" 3 4
struct _IO_FILE;



typedef struct _IO_FILE FILE;





# 65 "/usr/include/stdio.h" 3 4
typedef struct _IO_FILE __FILE;
# 75 "/usr/include/stdio.h" 3 4
# 1 "/usr/include/libio.h" 1 3 4
# 32 "/usr/include/libio.h" 3 4
# 1 "/usr/include/_G_config.h" 1 3 4
# 15 "/usr/include/_G_config.h" 3 4
# 1 "/usr/lib/gcc/i686-linux-gnu/4.6/include/stddef.h" 1 3 4
# 16 "/usr/include/_G_config.h" 2 3 4




# 1 "/usr/include/wchar.h" 1 3 4
# 83 "/usr/include/wchar.h" 3 4
typedef struct
{
  int __count;
  union
  {

    unsigned int __wch;



    char __wchb[4];
  } __value;
} __mbstate_t;
# 21 "/usr/include/_G_config.h" 2 3 4

typedef struct
{
  __off_t __pos;
  __mbstate_t __state;
} _G_fpos_t;
typedef struct
{
  __off64_t __pos;
  __mbstate_t __state;
} _G_fpos64_t;
# 53 "/usr/include/_G_config.h" 3 4
typedef int _G_int16_t __attribute__ ((__mode__ (__HI__)));
typedef int _G_int32_t __attribute__ ((__mode__ (__SI__)));
typedef unsigned int _G_uint16_t __attribute__ ((__mode__ (__HI__)));
typedef unsigned int _G_uint32_t __attribute__ ((__mode__ (__SI__)));
# 33 "/usr/include/libio.h" 2 3 4
# 53 "/usr/include/libio.h" 3 4
# 1 "/usr/lib/gcc/i686-linux-gnu/4.6/include/stdarg.h" 1 3 4
# 40 "/usr/lib/gcc/i686-linux-gnu/4.6/include/stdarg.h" 3 4
typedef __builtin_va_list __gnuc_va_list;
# 54 "/usr/include/libio.h" 2 3 4
# 172 "/usr/include/libio.h" 3 4
struct _IO_jump_t; struct _IO_FILE;
# 182 "/usr/include/libio.h" 3 4
typedef void _IO_lock_t;





struct _IO_marker {
  struct _IO_marker *_next;
  struct _IO_FILE *_sbuf;



  int _pos;
# 205 "/usr/include/libio.h" 3 4
};


enum __codecvt_result
{
  __codecvt_ok,
  __codecvt_partial,
  __codecvt_error,
  __codecvt_noconv
};
# 273 "/usr/include/libio.h" 3 4
struct _IO_FILE {
  int _flags;




  char* _IO_read_ptr;
  char* _IO_read_end;
  char* _IO_read_base;
  char* _IO_write_base;
  char* _IO_write_ptr;
  char* _IO_write_end;
  char* _IO_buf_base;
  char* _IO_buf_end;

  char *_IO_save_base;
  char *_IO_backup_base;
  char *_IO_save_end;

  struct _IO_marker *_markers;

  struct _IO_FILE *_chain;

  int _fileno;



  int _flags2;

  __off_t _old_offset;



  unsigned short _cur_column;
  signed char _vtable_offset;
  char _shortbuf[1];



  _IO_lock_t *_lock;
# 321 "/usr/include/libio.h" 3 4
  __off64_t _offset;
# 330 "/usr/include/libio.h" 3 4
  void *__pad1;
  void *__pad2;
  void *__pad3;
  void *__pad4;
  size_t __pad5;

  int _mode;

  char _unused2[15 * sizeof (int) - 4 * sizeof (void *) - sizeof (size_t)];

};


typedef struct _IO_FILE _IO_FILE;


struct _IO_FILE_plus;

extern struct _IO_FILE_plus _IO_2_1_stdin_;
extern struct _IO_FILE_plus _IO_2_1_stdout_;
extern struct _IO_FILE_plus _IO_2_1_stderr_;
# 366 "/usr/include/libio.h" 3 4
typedef __ssize_t __io_read_fn (void *__cookie, char *__buf, size_t __nbytes);







typedef __ssize_t __io_write_fn (void *__cookie, __const char *__buf,
     size_t __n);







typedef int __io_seek_fn (void *__cookie, __off64_t *__pos, int __w);


typedef int __io_close_fn (void *__cookie);
# 418 "/usr/include/libio.h" 3 4
extern int __underflow (_IO_FILE *);
extern int __uflow (_IO_FILE *);
extern int __overflow (_IO_FILE *, int);
# 462 "/usr/include/libio.h" 3 4
extern int _IO_getc (_IO_FILE *__fp);
extern int _IO_putc (int __c, _IO_FILE *__fp);
extern int _IO_feof (_IO_FILE *__fp) __attribute__ ((__nothrow__ , __leaf__));
extern int _IO_ferror (_IO_FILE *__fp) __attribute__ ((__nothrow__ , __leaf__));

extern int _IO_peekc_locked (_IO_FILE *__fp);





extern void _IO_flockfile (_IO_FILE *) __attribute__ ((__nothrow__ , __leaf__));
extern void _IO_funlockfile (_IO_FILE *) __attribute__ ((__nothrow__ , __leaf__));
extern int _IO_ftrylockfile (_IO_FILE *) __attribute__ ((__nothrow__ , __leaf__));
# 492 "/usr/include/libio.h" 3 4
extern int _IO_vfscanf (_IO_FILE * __restrict, const char * __restrict,
   __gnuc_va_list, int *__restrict);
extern int _IO_vfprintf (_IO_FILE *__restrict, const char *__restrict,
    __gnuc_va_list);
extern __ssize_t _IO_padn (_IO_FILE *, int, __ssize_t);
extern size_t _IO_sgetn (_IO_FILE *, void *, size_t);

extern __off64_t _IO_seekoff (_IO_FILE *, __off64_t, int, int);
extern __off64_t _IO_seekpos (_IO_FILE *, __off64_t, int);

extern void _IO_free_backup_area (_IO_FILE *) __attribute__ ((__nothrow__ , __leaf__));
# 76 "/usr/include/stdio.h" 2 3 4




typedef __gnuc_va_list va_list;
# 91 "/usr/include/stdio.h" 3 4
typedef __off_t off_t;
# 103 "/usr/include/stdio.h" 3 4
typedef __ssize_t ssize_t;







typedef _G_fpos_t fpos_t;




# 165 "/usr/include/stdio.h" 3 4
# 1 "/usr/include/i386-linux-gnu/bits/stdio_lim.h" 1 3 4
# 166 "/usr/include/stdio.h" 2 3 4



extern struct _IO_FILE *stdin;
extern struct _IO_FILE *stdout;
extern struct _IO_FILE *stderr;







extern int remove (__const char *__filename) __attribute__ ((__nothrow__ , __leaf__));

extern int rename (__const char *__old, __const char *__new) __attribute__ ((__nothrow__ , __leaf__));




extern int renameat (int __oldfd, __const char *__old, int __newfd,
       __const char *__new) __attribute__ ((__nothrow__ , __leaf__));








extern FILE *tmpfile (void) ;
# 210 "/usr/include/stdio.h" 3 4
extern char *tmpnam (char *__s) __attribute__ ((__nothrow__ , __leaf__)) ;





extern char *tmpnam_r (char *__s) __attribute__ ((__nothrow__ , __leaf__)) ;
# 228 "/usr/include/stdio.h" 3 4
extern char *tempnam (__const char *__dir, __const char *__pfx)
     __attribute__ ((__nothrow__ , __leaf__)) __attribute__ ((__malloc__)) ;








extern int fclose (FILE *__stream);




extern int fflush (FILE *__stream);

# 253 "/usr/include/stdio.h" 3 4
extern int fflush_unlocked (FILE *__stream);
# 267 "/usr/include/stdio.h" 3 4






extern FILE *fopen (__const char *__restrict __filename,
      __const char *__restrict __modes) ;




extern FILE *freopen (__const char *__restrict __filename,
        __const char *__restrict __modes,
        FILE *__restrict __stream) ;
# 296 "/usr/include/stdio.h" 3 4

# 307 "/usr/include/stdio.h" 3 4
extern FILE *fdopen (int __fd, __const char *__modes) __attribute__ ((__nothrow__ , __leaf__)) ;
# 320 "/usr/include/stdio.h" 3 4
extern FILE *fmemopen (void *__s, size_t __len, __const char *__modes)
  __attribute__ ((__nothrow__ , __leaf__)) ;




extern FILE *open_memstream (char **__bufloc, size_t *__sizeloc) __attribute__ ((__nothrow__ , __leaf__)) ;






extern void setbuf (FILE *__restrict __stream, char *__restrict __buf) __attribute__ ((__nothrow__ , __leaf__));



extern int setvbuf (FILE *__restrict __stream, char *__restrict __buf,
      int __modes, size_t __n) __attribute__ ((__nothrow__ , __leaf__));





extern void setbuffer (FILE *__restrict __stream, char *__restrict __buf,
         size_t __size) __attribute__ ((__nothrow__ , __leaf__));


extern void setlinebuf (FILE *__stream) __attribute__ ((__nothrow__ , __leaf__));








extern int fprintf (FILE *__restrict __stream,
      __const char *__restrict __format, ...);




extern int printf (__const char *__restrict __format, ...);

extern int sprintf (char *__restrict __s,
      __const char *__restrict __format, ...) __attribute__ ((__nothrow__));





extern int vfprintf (FILE *__restrict __s, __const char *__restrict __format,
       __gnuc_va_list __arg);




extern int vprintf (__const char *__restrict __format, __gnuc_va_list __arg);

extern int vsprintf (char *__restrict __s, __const char *__restrict __format,
       __gnuc_va_list __arg) __attribute__ ((__nothrow__));





extern int snprintf (char *__restrict __s, size_t __maxlen,
       __const char *__restrict __format, ...)
     __attribute__ ((__nothrow__)) __attribute__ ((__format__ (__printf__, 3, 4)));

extern int vsnprintf (char *__restrict __s, size_t __maxlen,
        __const char *__restrict __format, __gnuc_va_list __arg)
     __attribute__ ((__nothrow__)) __attribute__ ((__format__ (__printf__, 3, 0)));

# 418 "/usr/include/stdio.h" 3 4
extern int vdprintf (int __fd, __const char *__restrict __fmt,
       __gnuc_va_list __arg)
     __attribute__ ((__format__ (__printf__, 2, 0)));
extern int dprintf (int __fd, __const char *__restrict __fmt, ...)
     __attribute__ ((__format__ (__printf__, 2, 3)));








extern int fscanf (FILE *__restrict __stream,
     __const char *__restrict __format, ...) ;




extern int scanf (__const char *__restrict __format, ...) ;

extern int sscanf (__const char *__restrict __s,
     __const char *__restrict __format, ...) __attribute__ ((__nothrow__ , __leaf__));
# 449 "/usr/include/stdio.h" 3 4
extern int fscanf (FILE *__restrict __stream, __const char *__restrict __format, ...) __asm__ ("" "__isoc99_fscanf")

                               ;
extern int scanf (__const char *__restrict __format, ...) __asm__ ("" "__isoc99_scanf")
                              ;
extern int sscanf (__const char *__restrict __s, __const char *__restrict __format, ...) __asm__ ("" "__isoc99_sscanf") __attribute__ ((__nothrow__ , __leaf__))

                      ;
# 469 "/usr/include/stdio.h" 3 4








extern int vfscanf (FILE *__restrict __s, __const char *__restrict __format,
      __gnuc_va_list __arg)
     __attribute__ ((__format__ (__scanf__, 2, 0))) ;





extern int vscanf (__const char *__restrict __format, __gnuc_va_list __arg)
     __attribute__ ((__format__ (__scanf__, 1, 0))) ;


extern int vsscanf (__const char *__restrict __s,
      __const char *__restrict __format, __gnuc_va_list __arg)
     __attribute__ ((__nothrow__ , __leaf__)) __attribute__ ((__format__ (__scanf__, 2, 0)));
# 500 "/usr/include/stdio.h" 3 4
extern int vfscanf (FILE *__restrict __s, __const char *__restrict __format, __gnuc_va_list __arg) __asm__ ("" "__isoc99_vfscanf")



     __attribute__ ((__format__ (__scanf__, 2, 0))) ;
extern int vscanf (__const char *__restrict __format, __gnuc_va_list __arg) __asm__ ("" "__isoc99_vscanf")

     __attribute__ ((__format__ (__scanf__, 1, 0))) ;
extern int vsscanf (__const char *__restrict __s, __const char *__restrict __format, __gnuc_va_list __arg) __asm__ ("" "__isoc99_vsscanf") __attribute__ ((__nothrow__ , __leaf__))



     __attribute__ ((__format__ (__scanf__, 2, 0)));
# 528 "/usr/include/stdio.h" 3 4









extern int fgetc (FILE *__stream);
extern int getc (FILE *__stream);





extern int getchar (void);

# 556 "/usr/include/stdio.h" 3 4
extern int getc_unlocked (FILE *__stream);
extern int getchar_unlocked (void);
# 567 "/usr/include/stdio.h" 3 4
extern int fgetc_unlocked (FILE *__stream);











extern int fputc (int __c, FILE *__stream);
extern int putc (int __c, FILE *__stream);





extern int putchar (int __c);

# 600 "/usr/include/stdio.h" 3 4
extern int fputc_unlocked (int __c, FILE *__stream);







extern int putc_unlocked (int __c, FILE *__stream);
extern int putchar_unlocked (int __c);






extern int getw (FILE *__stream);


extern int putw (int __w, FILE *__stream);








extern char *fgets (char *__restrict __s, int __n, FILE *__restrict __stream)
     ;






extern char *gets (char *__s) ;

# 662 "/usr/include/stdio.h" 3 4
extern __ssize_t __getdelim (char **__restrict __lineptr,
          size_t *__restrict __n, int __delimiter,
          FILE *__restrict __stream) ;
extern __ssize_t getdelim (char **__restrict __lineptr,
        size_t *__restrict __n, int __delimiter,
        FILE *__restrict __stream) ;







extern __ssize_t getline (char **__restrict __lineptr,
       size_t *__restrict __n,
       FILE *__restrict __stream) ;








extern int fputs (__const char *__restrict __s, FILE *__restrict __stream);





extern int puts (__const char *__s);






extern int ungetc (int __c, FILE *__stream);






extern size_t fread (void *__restrict __ptr, size_t __size,
       size_t __n, FILE *__restrict __stream) ;




extern size_t fwrite (__const void *__restrict __ptr, size_t __size,
        size_t __n, FILE *__restrict __s);

# 734 "/usr/include/stdio.h" 3 4
extern size_t fread_unlocked (void *__restrict __ptr, size_t __size,
         size_t __n, FILE *__restrict __stream) ;
extern size_t fwrite_unlocked (__const void *__restrict __ptr, size_t __size,
          size_t __n, FILE *__restrict __stream);








extern int fseek (FILE *__stream, long int __off, int __whence);




extern long int ftell (FILE *__stream) ;




extern void rewind (FILE *__stream);

# 770 "/usr/include/stdio.h" 3 4
extern int fseeko (FILE *__stream, __off_t __off, int __whence);




extern __off_t ftello (FILE *__stream) ;
# 789 "/usr/include/stdio.h" 3 4






extern int fgetpos (FILE *__restrict __stream, fpos_t *__restrict __pos);




extern int fsetpos (FILE *__stream, __const fpos_t *__pos);
# 812 "/usr/include/stdio.h" 3 4

# 821 "/usr/include/stdio.h" 3 4


extern void clearerr (FILE *__stream) __attribute__ ((__nothrow__ , __leaf__));

extern int feof (FILE *__stream) __attribute__ ((__nothrow__ , __leaf__)) ;

extern int ferror (FILE *__stream) __attribute__ ((__nothrow__ , __leaf__)) ;




extern void clearerr_unlocked (FILE *__stream) __attribute__ ((__nothrow__ , __leaf__));
extern int feof_unlocked (FILE *__stream) __attribute__ ((__nothrow__ , __leaf__)) ;
extern int ferror_unlocked (FILE *__stream) __attribute__ ((__nothrow__ , __leaf__)) ;








extern void perror (__const char *__s);






# 1 "/usr/include/i386-linux-gnu/bits/sys_errlist.h" 1 3 4
# 27 "/usr/include/i386-linux-gnu/bits/sys_errlist.h" 3 4
extern int sys_nerr;
extern __const char *__const sys_errlist[];
# 851 "/usr/include/stdio.h" 2 3 4




extern int fileno (FILE *__stream) __attribute__ ((__nothrow__ , __leaf__)) ;




extern int fileno_unlocked (FILE *__stream) __attribute__ ((__nothrow__ , __leaf__)) ;
# 870 "/usr/include/stdio.h" 3 4
extern FILE *popen (__const char *__command, __const char *__modes) ;





extern int pclose (FILE *__stream);





extern char *ctermid (char *__s) __attribute__ ((__nothrow__ , __leaf__));
# 910 "/usr/include/stdio.h" 3 4
extern void flockfile (FILE *__stream) __attribute__ ((__nothrow__ , __leaf__));



extern int ftrylockfile (FILE *__stream) __attribute__ ((__nothrow__ , __leaf__)) ;


extern void funlockfile (FILE *__stream) __attribute__ ((__nothrow__ , __leaf__));
# 940 "/usr/include/stdio.h" 3 4

# 2 "built_in.c" 2
# 13 "built_in.c"
void display(int val)
{
    if (val < 0)
    {
 printf("Error in %s: %s @ %d on %s @ %s \n",
     "built_in.c", __func__, 18, "Nov 18 2016", "16:18:24");

 return;
    }

    printf("hello %d \n", val);
}

int main()
{
    printf("Error in %s: %s @ %d on %s @ %s \n",
     "built_in.c", __func__, 29, "Nov 18 2016", "16:18:24");
    display(-1);

    return 0;
}*/


/*# 1 "built_in.c"
# 1 "<built-in>"
# 1 "<command-line>"
# 1 "built_in.c"
# 1 "/usr/include/stdio.h" 1 3 4
# 28 "/usr/include/stdio.h" 3 4
# 1 "/usr/include/features.h" 1 3 4
# 324 "/usr/include/features.h" 3 4
# 1 "/usr/include/i386-linux-gnu/bits/predefs.h" 1 3 4
# 325 "/usr/include/features.h" 2 3 4
# 357 "/usr/include/features.h" 3 4
# 1 "/usr/include/i386-linux-gnu/sys/cdefs.h" 1 3 4
# 378 "/usr/include/i386-linux-gnu/sys/cdefs.h" 3 4
# 1 "/usr/include/i386-linux-gnu/bits/wordsize.h" 1 3 4
# 379 "/usr/include/i386-linux-gnu/sys/cdefs.h" 2 3 4
# 358 "/usr/include/features.h" 2 3 4
# 389 "/usr/include/features.h" 3 4
# 1 "/usr/include/i386-linux-gnu/gnu/stubs.h" 1 3 4



# 1 "/usr/include/i386-linux-gnu/bits/wordsize.h" 1 3 4
# 5 "/usr/include/i386-linux-gnu/gnu/stubs.h" 2 3 4


# 1 "/usr/include/i386-linux-gnu/gnu/stubs-32.h" 1 3 4
# 8 "/usr/include/i386-linux-gnu/gnu/stubs.h" 2 3 4
# 390 "/usr/include/features.h" 2 3 4
# 29 "/usr/include/stdio.h" 2 3 4





# 1 "/usr/lib/gcc/i686-linux-gnu/4.6/include/stddef.h" 1 3 4
# 212 "/usr/lib/gcc/i686-linux-gnu/4.6/include/stddef.h" 3 4
typedef unsigned int size_t;
# 35 "/usr/include/stdio.h" 2 3 4

# 1 "/usr/include/i386-linux-gnu/bits/types.h" 1 3 4
# 28 "/usr/include/i386-linux-gnu/bits/types.h" 3 4
# 1 "/usr/include/i386-linux-gnu/bits/wordsize.h" 1 3 4
# 29 "/usr/include/i386-linux-gnu/bits/types.h" 2 3 4


typedef unsigned char __u_char;
typedef unsigned short int __u_short;
typedef unsigned int __u_int;
typedef unsigned long int __u_long;


typedef signed char __int8_t;
typedef unsigned char __uint8_t;
typedef signed short int __int16_t;
typedef unsigned short int __uint16_t;
typedef signed int __int32_t;
typedef unsigned int __uint32_t;




__extension__ typedef signed long long int __int64_t;
__extension__ typedef unsigned long long int __uint64_t;







__extension__ typedef long long int __quad_t;
__extension__ typedef unsigned long long int __u_quad_t;
# 131 "/usr/include/i386-linux-gnu/bits/types.h" 3 4
# 1 "/usr/include/i386-linux-gnu/bits/typesizes.h" 1 3 4
# 132 "/usr/include/i386-linux-gnu/bits/types.h" 2 3 4


__extension__ typedef __u_quad_t __dev_t;
__extension__ typedef unsigned int __uid_t;
__extension__ typedef unsigned int __gid_t;
__extension__ typedef unsigned long int __ino_t;
__extension__ typedef __u_quad_t __ino64_t;
__extension__ typedef unsigned int __mode_t;
__extension__ typedef unsigned int __nlink_t;
__extension__ typedef long int __off_t;
__extension__ typedef __quad_t __off64_t;
__extension__ typedef int __pid_t;
__extension__ typedef struct { int __val[2]; } __fsid_t;
__extension__ typedef long int __clock_t;
__extension__ typedef unsigned long int __rlim_t;
__extension__ typedef __u_quad_t __rlim64_t;
__extension__ typedef unsigned int __id_t;
__extension__ typedef long int __time_t;
__extension__ typedef unsigned int __useconds_t;
__extension__ typedef long int __suseconds_t;

__extension__ typedef int __daddr_t;
__extension__ typedef long int __swblk_t;
__extension__ typedef int __key_t;


__extension__ typedef int __clockid_t;


__extension__ typedef void * __timer_t;


__extension__ typedef long int __blksize_t;




__extension__ typedef long int __blkcnt_t;
__extension__ typedef __quad_t __blkcnt64_t;


__extension__ typedef unsigned long int __fsblkcnt_t;
__extension__ typedef __u_quad_t __fsblkcnt64_t;


__extension__ typedef unsigned long int __fsfilcnt_t;
__extension__ typedef __u_quad_t __fsfilcnt64_t;

__extension__ typedef int __ssize_t;



typedef __off64_t __loff_t;
typedef __quad_t *__qaddr_t;
typedef char *__caddr_t;


__extension__ typedef int __intptr_t;


__extension__ typedef unsigned int __socklen_t;
# 37 "/usr/include/stdio.h" 2 3 4
# 45 "/usr/include/stdio.h" 3 4
struct _IO_FILE;



typedef struct _IO_FILE FILE;





# 65 "/usr/include/stdio.h" 3 4
typedef struct _IO_FILE __FILE;
# 75 "/usr/include/stdio.h" 3 4
# 1 "/usr/include/libio.h" 1 3 4
# 32 "/usr/include/libio.h" 3 4
# 1 "/usr/include/_G_config.h" 1 3 4
# 15 "/usr/include/_G_config.h" 3 4
# 1 "/usr/lib/gcc/i686-linux-gnu/4.6/include/stddef.h" 1 3 4
# 16 "/usr/include/_G_config.h" 2 3 4




# 1 "/usr/include/wchar.h" 1 3 4
# 83 "/usr/include/wchar.h" 3 4
typedef struct
{
  int __count;
  union
  {

    unsigned int __wch;



    char __wchb[4];
  } __value;
} __mbstate_t;
# 21 "/usr/include/_G_config.h" 2 3 4

typedef struct
{
  __off_t __pos;
  __mbstate_t __state;
} _G_fpos_t;
typedef struct
{
  __off64_t __pos;
  __mbstate_t __state;
} _G_fpos64_t;
# 53 "/usr/include/_G_config.h" 3 4
typedef int _G_int16_t __attribute__ ((__mode__ (__HI__)));
typedef int _G_int32_t __attribute__ ((__mode__ (__SI__)));
typedef unsigned int _G_uint16_t __attribute__ ((__mode__ (__HI__)));
typedef unsigned int _G_uint32_t __attribute__ ((__mode__ (__SI__)));
# 33 "/usr/include/libio.h" 2 3 4
# 53 "/usr/include/libio.h" 3 4
# 1 "/usr/lib/gcc/i686-linux-gnu/4.6/include/stdarg.h" 1 3 4
# 40 "/usr/lib/gcc/i686-linux-gnu/4.6/include/stdarg.h" 3 4
typedef __builtin_va_list __gnuc_va_list;
# 54 "/usr/include/libio.h" 2 3 4
# 172 "/usr/include/libio.h" 3 4
struct _IO_jump_t; struct _IO_FILE;
# 182 "/usr/include/libio.h" 3 4
typedef void _IO_lock_t;





struct _IO_marker {
  struct _IO_marker *_next;
  struct _IO_FILE *_sbuf;



  int _pos;
# 205 "/usr/include/libio.h" 3 4
};


enum __codecvt_result
{
  __codecvt_ok,
  __codecvt_partial,
  __codecvt_error,
  __codecvt_noconv
};
# 273 "/usr/include/libio.h" 3 4
struct _IO_FILE {
  int _flags;




  char* _IO_read_ptr;
  char* _IO_read_end;
  char* _IO_read_base;
  char* _IO_write_base;
  char* _IO_write_ptr;
  char* _IO_write_end;
  char* _IO_buf_base;
  char* _IO_buf_end;

  char *_IO_save_base;
  char *_IO_backup_base;
  char *_IO_save_end;

  struct _IO_marker *_markers;

  struct _IO_FILE *_chain;

  int _fileno;



  int _flags2;

  __off_t _old_offset;



  unsigned short _cur_column;
  signed char _vtable_offset;
  char _shortbuf[1];



  _IO_lock_t *_lock;
# 321 "/usr/include/libio.h" 3 4
  __off64_t _offset;
# 330 "/usr/include/libio.h" 3 4
  void *__pad1;
  void *__pad2;
  void *__pad3;
  void *__pad4;
  size_t __pad5;

  int _mode;

  char _unused2[15 * sizeof (int) - 4 * sizeof (void *) - sizeof (size_t)];

};


typedef struct _IO_FILE _IO_FILE;


struct _IO_FILE_plus;

extern struct _IO_FILE_plus _IO_2_1_stdin_;
extern struct _IO_FILE_plus _IO_2_1_stdout_;
extern struct _IO_FILE_plus _IO_2_1_stderr_;
# 366 "/usr/include/libio.h" 3 4
typedef __ssize_t __io_read_fn (void *__cookie, char *__buf, size_t __nbytes);







typedef __ssize_t __io_write_fn (void *__cookie, __const char *__buf,
     size_t __n);







typedef int __io_seek_fn (void *__cookie, __off64_t *__pos, int __w);


typedef int __io_close_fn (void *__cookie);
# 418 "/usr/include/libio.h" 3 4
extern int __underflow (_IO_FILE *);
extern int __uflow (_IO_FILE *);
extern int __overflow (_IO_FILE *, int);
# 462 "/usr/include/libio.h" 3 4
extern int _IO_getc (_IO_FILE *__fp);
extern int _IO_putc (int __c, _IO_FILE *__fp);
extern int _IO_feof (_IO_FILE *__fp) __attribute__ ((__nothrow__ , __leaf__));
extern int _IO_ferror (_IO_FILE *__fp) __attribute__ ((__nothrow__ , __leaf__));

extern int _IO_peekc_locked (_IO_FILE *__fp);





extern void _IO_flockfile (_IO_FILE *) __attribute__ ((__nothrow__ , __leaf__));
extern void _IO_funlockfile (_IO_FILE *) __attribute__ ((__nothrow__ , __leaf__));
extern int _IO_ftrylockfile (_IO_FILE *) __attribute__ ((__nothrow__ , __leaf__));
# 492 "/usr/include/libio.h" 3 4
extern int _IO_vfscanf (_IO_FILE * __restrict, const char * __restrict,
   __gnuc_va_list, int *__restrict);
extern int _IO_vfprintf (_IO_FILE *__restrict, const char *__restrict,
    __gnuc_va_list);
extern __ssize_t _IO_padn (_IO_FILE *, int, __ssize_t);
extern size_t _IO_sgetn (_IO_FILE *, void *, size_t);

extern __off64_t _IO_seekoff (_IO_FILE *, __off64_t, int, int);
extern __off64_t _IO_seekpos (_IO_FILE *, __off64_t, int);

extern void _IO_free_backup_area (_IO_FILE *) __attribute__ ((__nothrow__ , __leaf__));
# 76 "/usr/include/stdio.h" 2 3 4




typedef __gnuc_va_list va_list;
# 91 "/usr/include/stdio.h" 3 4
typedef __off_t off_t;
# 103 "/usr/include/stdio.h" 3 4
typedef __ssize_t ssize_t;







typedef _G_fpos_t fpos_t;




# 165 "/usr/include/stdio.h" 3 4
# 1 "/usr/include/i386-linux-gnu/bits/stdio_lim.h" 1 3 4
# 166 "/usr/include/stdio.h" 2 3 4



extern struct _IO_FILE *stdin;
extern struct _IO_FILE *stdout;
extern struct _IO_FILE *stderr;







extern int remove (__const char *__filename) __attribute__ ((__nothrow__ , __leaf__));

extern int rename (__const char *__old, __const char *__new) __attribute__ ((__nothrow__ , __leaf__));




extern int renameat (int __oldfd, __const char *__old, int __newfd,
       __const char *__new) __attribute__ ((__nothrow__ , __leaf__));








extern FILE *tmpfile (void) ;
# 210 "/usr/include/stdio.h" 3 4
extern char *tmpnam (char *__s) __attribute__ ((__nothrow__ , __leaf__)) ;





extern char *tmpnam_r (char *__s) __attribute__ ((__nothrow__ , __leaf__)) ;
# 228 "/usr/include/stdio.h" 3 4
extern char *tempnam (__const char *__dir, __const char *__pfx)
     __attribute__ ((__nothrow__ , __leaf__)) __attribute__ ((__malloc__)) ;








extern int fclose (FILE *__stream);




extern int fflush (FILE *__stream);

# 253 "/usr/include/stdio.h" 3 4
extern int fflush_unlocked (FILE *__stream);
# 267 "/usr/include/stdio.h" 3 4






extern FILE *fopen (__const char *__restrict __filename,
      __const char *__restrict __modes) ;




extern FILE *freopen (__const char *__restrict __filename,
        __const char *__restrict __modes,
        FILE *__restrict __stream) ;
# 296 "/usr/include/stdio.h" 3 4

# 307 "/usr/include/stdio.h" 3 4
extern FILE *fdopen (int __fd, __const char *__modes) __attribute__ ((__nothrow__ , __leaf__)) ;
# 320 "/usr/include/stdio.h" 3 4
extern FILE *fmemopen (void *__s, size_t __len, __const char *__modes)
  __attribute__ ((__nothrow__ , __leaf__)) ;




extern FILE *open_memstream (char **__bufloc, size_t *__sizeloc) __attribute__ ((__nothrow__ , __leaf__)) ;






extern void setbuf (FILE *__restrict __stream, char *__restrict __buf) __attribute__ ((__nothrow__ , __leaf__));



extern int setvbuf (FILE *__restrict __stream, char *__restrict __buf,
      int __modes, size_t __n) __attribute__ ((__nothrow__ , __leaf__));





extern void setbuffer (FILE *__restrict __stream, char *__restrict __buf,
         size_t __size) __attribute__ ((__nothrow__ , __leaf__));


extern void setlinebuf (FILE *__stream) __attribute__ ((__nothrow__ , __leaf__));








extern int fprintf (FILE *__restrict __stream,
      __const char *__restrict __format, ...);




extern int printf (__const char *__restrict __format, ...);

extern int sprintf (char *__restrict __s,
      __const char *__restrict __format, ...) __attribute__ ((__nothrow__));





extern int vfprintf (FILE *__restrict __s, __const char *__restrict __format,
       __gnuc_va_list __arg);




extern int vprintf (__const char *__restrict __format, __gnuc_va_list __arg);

extern int vsprintf (char *__restrict __s, __const char *__restrict __format,
       __gnuc_va_list __arg) __attribute__ ((__nothrow__));





extern int snprintf (char *__restrict __s, size_t __maxlen,
       __const char *__restrict __format, ...)
     __attribute__ ((__nothrow__)) __attribute__ ((__format__ (__printf__, 3, 4)));

extern int vsnprintf (char *__restrict __s, size_t __maxlen,
        __const char *__restrict __format, __gnuc_va_list __arg)
     __attribute__ ((__nothrow__)) __attribute__ ((__format__ (__printf__, 3, 0)));

# 418 "/usr/include/stdio.h" 3 4
extern int vdprintf (int __fd, __const char *__restrict __fmt,
       __gnuc_va_list __arg)
     __attribute__ ((__format__ (__printf__, 2, 0)));
extern int dprintf (int __fd, __const char *__restrict __fmt, ...)
     __attribute__ ((__format__ (__printf__, 2, 3)));








extern int fscanf (FILE *__restrict __stream,
     __const char *__restrict __format, ...) ;




extern int scanf (__const char *__restrict __format, ...) ;

extern int sscanf (__const char *__restrict __s,
     __const char *__restrict __format, ...) __attribute__ ((__nothrow__ , __leaf__));
# 449 "/usr/include/stdio.h" 3 4
extern int fscanf (FILE *__restrict __stream, __const char *__restrict __format, ...) __asm__ ("" "__isoc99_fscanf")

                               ;
extern int scanf (__const char *__restrict __format, ...) __asm__ ("" "__isoc99_scanf")
                              ;
extern int sscanf (__const char *__restrict __s, __const char *__restrict __format, ...) __asm__ ("" "__isoc99_sscanf") __attribute__ ((__nothrow__ , __leaf__))

                      ;
# 469 "/usr/include/stdio.h" 3 4








extern int vfscanf (FILE *__restrict __s, __const char *__restrict __format,
      __gnuc_va_list __arg)
     __attribute__ ((__format__ (__scanf__, 2, 0))) ;





extern int vscanf (__const char *__restrict __format, __gnuc_va_list __arg)
     __attribute__ ((__format__ (__scanf__, 1, 0))) ;


extern int vsscanf (__const char *__restrict __s,
      __const char *__restrict __format, __gnuc_va_list __arg)
     __attribute__ ((__nothrow__ , __leaf__)) __attribute__ ((__format__ (__scanf__, 2, 0)));
# 500 "/usr/include/stdio.h" 3 4
extern int vfscanf (FILE *__restrict __s, __const char *__restrict __format, __gnuc_va_list __arg) __asm__ ("" "__isoc99_vfscanf")



     __attribute__ ((__format__ (__scanf__, 2, 0))) ;
extern int vscanf (__const char *__restrict __format, __gnuc_va_list __arg) __asm__ ("" "__isoc99_vscanf")

     __attribute__ ((__format__ (__scanf__, 1, 0))) ;
extern int vsscanf (__const char *__restrict __s, __const char *__restrict __format, __gnuc_va_list __arg) __asm__ ("" "__isoc99_vsscanf") __attribute__ ((__nothrow__ , __leaf__))



     __attribute__ ((__format__ (__scanf__, 2, 0)));
# 528 "/usr/include/stdio.h" 3 4









extern int fgetc (FILE *__stream);
extern int getc (FILE *__stream);





extern int getchar (void);

# 556 "/usr/include/stdio.h" 3 4
extern int getc_unlocked (FILE *__stream);
extern int getchar_unlocked (void);
# 567 "/usr/include/stdio.h" 3 4
extern int fgetc_unlocked (FILE *__stream);











extern int fputc (int __c, FILE *__stream);
extern int putc (int __c, FILE *__stream);





extern int putchar (int __c);

# 600 "/usr/include/stdio.h" 3 4
extern int fputc_unlocked (int __c, FILE *__stream);







extern int putc_unlocked (int __c, FILE *__stream);
extern int putchar_unlocked (int __c);






extern int getw (FILE *__stream);


extern int putw (int __w, FILE *__stream);








extern char *fgets (char *__restrict __s, int __n, FILE *__restrict __stream)
     ;






extern char *gets (char *__s) ;

# 662 "/usr/include/stdio.h" 3 4
extern __ssize_t __getdelim (char **__restrict __lineptr,
          size_t *__restrict __n, int __delimiter,
          FILE *__restrict __stream) ;
extern __ssize_t getdelim (char **__restrict __lineptr,
        size_t *__restrict __n, int __delimiter,
        FILE *__restrict __stream) ;







extern __ssize_t getline (char **__restrict __lineptr,
       size_t *__restrict __n,
       FILE *__restrict __stream) ;








extern int fputs (__const char *__restrict __s, FILE *__restrict __stream);





extern int puts (__const char *__s);






extern int ungetc (int __c, FILE *__stream);






extern size_t fread (void *__restrict __ptr, size_t __size,
       size_t __n, FILE *__restrict __stream) ;




extern size_t fwrite (__const void *__restrict __ptr, size_t __size,
        size_t __n, FILE *__restrict __s);

# 734 "/usr/include/stdio.h" 3 4
extern size_t fread_unlocked (void *__restrict __ptr, size_t __size,
         size_t __n, FILE *__restrict __stream) ;
extern size_t fwrite_unlocked (__const void *__restrict __ptr, size_t __size,
          size_t __n, FILE *__restrict __stream);








extern int fseek (FILE *__stream, long int __off, int __whence);




extern long int ftell (FILE *__stream) ;




extern void rewind (FILE *__stream);

# 770 "/usr/include/stdio.h" 3 4
extern int fseeko (FILE *__stream, __off_t __off, int __whence);




extern __off_t ftello (FILE *__stream) ;
# 789 "/usr/include/stdio.h" 3 4






extern int fgetpos (FILE *__restrict __stream, fpos_t *__restrict __pos);




extern int fsetpos (FILE *__stream, __const fpos_t *__pos);
# 812 "/usr/include/stdio.h" 3 4

# 821 "/usr/include/stdio.h" 3 4


extern void clearerr (FILE *__stream) __attribute__ ((__nothrow__ , __leaf__));

extern int feof (FILE *__stream) __attribute__ ((__nothrow__ , __leaf__)) ;

extern int ferror (FILE *__stream) __attribute__ ((__nothrow__ , __leaf__)) ;




extern void clearerr_unlocked (FILE *__stream) __attribute__ ((__nothrow__ , __leaf__));
extern int feof_unlocked (FILE *__stream) __attribute__ ((__nothrow__ , __leaf__)) ;
extern int ferror_unlocked (FILE *__stream) __attribute__ ((__nothrow__ , __leaf__)) ;








extern void perror (__const char *__s);






# 1 "/usr/include/i386-linux-gnu/bits/sys_errlist.h" 1 3 4
# 27 "/usr/include/i386-linux-gnu/bits/sys_errlist.h" 3 4
extern int sys_nerr;
extern __const char *__const sys_errlist[];
# 851 "/usr/include/stdio.h" 2 3 4




extern int fileno (FILE *__stream) __attribute__ ((__nothrow__ , __leaf__)) ;




extern int fileno_unlocked (FILE *__stream) __attribute__ ((__nothrow__ , __leaf__)) ;
# 870 "/usr/include/stdio.h" 3 4
extern FILE *popen (__const char *__command, __const char *__modes) ;





extern int pclose (FILE *__stream);





extern char *ctermid (char *__s) __attribute__ ((__nothrow__ , __leaf__));
# 910 "/usr/include/stdio.h" 3 4
extern void flockfile (FILE *__stream) __attribute__ ((__nothrow__ , __leaf__));



extern int ftrylockfile (FILE *__stream) __attribute__ ((__nothrow__ , __leaf__)) ;


extern void funlockfile (FILE *__stream) __attribute__ ((__nothrow__ , __leaf__));
# 940 "/usr/include/stdio.h" 3 4

# 2 "built_in.c" 2
# 13 "built_in.c"
void display(int val)
{
    if (val < 0)
    {
 printf("Error in %s: %s @ %d on %s @ %s \n",
     "built_in.c", __func__, 18, "Oct 13 2016", "11:30:38");

 return;
    }

    printf("hello %d \n", val);
}

int main()
{
    display(-1);

    return 0;
}*/


/*#include <stdio.h>

unsigned int circular_right_shift(unsigned int x, int n)
{
    unsigned int result = 0;
    unsigned int no_of_bits = sizeof(x) * 8;

    if (n < 0)
    {
	printf("Error in %s(%s) @ %d on %s @ %s \n",
	__FILE__, __func__,  __LINE__, __DATE__, __TIME__);
	return 0;

    }
    

    n = n % no_of_bits;
    result = (x >> n) | (x << (no_of_bits - n));
    
    return result;
}

int main()
{
    unsigned int num = 5, shift_count = 2;
    unsigned int res;

    res = circular_right_shift(num, -1);

    num = 5, shift_count = 34;

    res = circular_right_shift(num, shift_count);
    printf("0x%X(%u) >> 0x%X(%u) = 0x%X\n", num, num, shift_count, shift_count, res);

    return 0;
}*/


/*#include <stdio.h>

#define MAX 100
#define PI 3.14

#define MEGA_BYTE (1024 * 1024)

#define PRINT_GREETING printf("Good morning")

int main()
{

    int size = MAX1;
    int arr[MEGA_BYTE];
    float r = 5;

    float area = PI * r * r;

    PRINT_GREETING;

    printf("%d %d\n", size, MAX);
    printf("MAX\n");

    printf("Area = %f\n", area);

    
    return 0;
}*/


/*# 1 "define_max.c"
# 1 "<built-in>"
# 1 "<command-line>"
# 31 "<command-line>"
# 1 "/usr/include/stdc-predef.h" 1 3 4
# 32 "<command-line>" 2
# 1 "define_max.c"
# 1 "/usr/include/stdio.h" 1 3 4
# 27 "/usr/include/stdio.h" 3 4
# 1 "/usr/include/x86_64-linux-gnu/bits/libc-header-start.h" 1 3 4
# 33 "/usr/include/x86_64-linux-gnu/bits/libc-header-start.h" 3 4
# 1 "/usr/include/features.h" 1 3 4
# 424 "/usr/include/features.h" 3 4
# 1 "/usr/include/x86_64-linux-gnu/sys/cdefs.h" 1 3 4
# 427 "/usr/include/x86_64-linux-gnu/sys/cdefs.h" 3 4
# 1 "/usr/include/x86_64-linux-gnu/bits/wordsize.h" 1 3 4
# 428 "/usr/include/x86_64-linux-gnu/sys/cdefs.h" 2 3 4
# 1 "/usr/include/x86_64-linux-gnu/bits/long-double.h" 1 3 4
# 429 "/usr/include/x86_64-linux-gnu/sys/cdefs.h" 2 3 4
# 425 "/usr/include/features.h" 2 3 4
# 448 "/usr/include/features.h" 3 4
# 1 "/usr/include/x86_64-linux-gnu/gnu/stubs.h" 1 3 4
# 10 "/usr/include/x86_64-linux-gnu/gnu/stubs.h" 3 4
# 1 "/usr/include/x86_64-linux-gnu/gnu/stubs-64.h" 1 3 4
# 11 "/usr/include/x86_64-linux-gnu/gnu/stubs.h" 2 3 4
# 449 "/usr/include/features.h" 2 3 4
# 34 "/usr/include/x86_64-linux-gnu/bits/libc-header-start.h" 2 3 4
# 28 "/usr/include/stdio.h" 2 3 4





# 1 "/usr/lib/gcc/x86_64-linux-gnu/7/include/stddef.h" 1 3 4
# 216 "/usr/lib/gcc/x86_64-linux-gnu/7/include/stddef.h" 3 4

# 216 "/usr/lib/gcc/x86_64-linux-gnu/7/include/stddef.h" 3 4
typedef long unsigned int size_t;
# 34 "/usr/include/stdio.h" 2 3 4

# 1 "/usr/include/x86_64-linux-gnu/bits/types.h" 1 3 4
# 27 "/usr/include/x86_64-linux-gnu/bits/types.h" 3 4
# 1 "/usr/include/x86_64-linux-gnu/bits/wordsize.h" 1 3 4
# 28 "/usr/include/x86_64-linux-gnu/bits/types.h" 2 3 4


typedef unsigned char __u_char;
typedef unsigned short int __u_short;
typedef unsigned int __u_int;
typedef unsigned long int __u_long;


typedef signed char __int8_t;
typedef unsigned char __uint8_t;
typedef signed short int __int16_t;
typedef unsigned short int __uint16_t;
typedef signed int __int32_t;
typedef unsigned int __uint32_t;

typedef signed long int __int64_t;
typedef unsigned long int __uint64_t;







typedef long int __quad_t;
typedef unsigned long int __u_quad_t;







typedef long int __intmax_t;
typedef unsigned long int __uintmax_t;
# 130 "/usr/include/x86_64-linux-gnu/bits/types.h" 3 4
# 1 "/usr/include/x86_64-linux-gnu/bits/typesizes.h" 1 3 4
# 131 "/usr/include/x86_64-linux-gnu/bits/types.h" 2 3 4


typedef unsigned long int __dev_t;
typedef unsigned int __uid_t;
typedef unsigned int __gid_t;
typedef unsigned long int __ino_t;
typedef unsigned long int __ino64_t;
typedef unsigned int __mode_t;
typedef unsigned long int __nlink_t;
typedef long int __off_t;
typedef long int __off64_t;
typedef int __pid_t;
typedef struct { int __val[2]; } __fsid_t;
typedef long int __clock_t;
typedef unsigned long int __rlim_t;
typedef unsigned long int __rlim64_t;
typedef unsigned int __id_t;
typedef long int __time_t;
typedef unsigned int __useconds_t;
typedef long int __suseconds_t;

typedef int __daddr_t;
typedef int __key_t;


typedef int __clockid_t;


typedef void * __timer_t;


typedef long int __blksize_t;




typedef long int __blkcnt_t;
typedef long int __blkcnt64_t;


typedef unsigned long int __fsblkcnt_t;
typedef unsigned long int __fsblkcnt64_t;


typedef unsigned long int __fsfilcnt_t;
typedef unsigned long int __fsfilcnt64_t;


typedef long int __fsword_t;

typedef long int __ssize_t;


typedef long int __syscall_slong_t;

typedef unsigned long int __syscall_ulong_t;



typedef __off64_t __loff_t;
typedef char *__caddr_t;


typedef long int __intptr_t;


typedef unsigned int __socklen_t;




typedef int __sig_atomic_t;
# 36 "/usr/include/stdio.h" 2 3 4
# 1 "/usr/include/x86_64-linux-gnu/bits/types/__FILE.h" 1 3 4



struct _IO_FILE;
typedef struct _IO_FILE __FILE;
# 37 "/usr/include/stdio.h" 2 3 4
# 1 "/usr/include/x86_64-linux-gnu/bits/types/FILE.h" 1 3 4



struct _IO_FILE;


typedef struct _IO_FILE FILE;
# 38 "/usr/include/stdio.h" 2 3 4



# 1 "/usr/include/x86_64-linux-gnu/bits/libio.h" 1 3 4
# 35 "/usr/include/x86_64-linux-gnu/bits/libio.h" 3 4
# 1 "/usr/include/x86_64-linux-gnu/bits/_G_config.h" 1 3 4
# 19 "/usr/include/x86_64-linux-gnu/bits/_G_config.h" 3 4
# 1 "/usr/lib/gcc/x86_64-linux-gnu/7/include/stddef.h" 1 3 4
# 20 "/usr/include/x86_64-linux-gnu/bits/_G_config.h" 2 3 4

# 1 "/usr/include/x86_64-linux-gnu/bits/types/__mbstate_t.h" 1 3 4
# 13 "/usr/include/x86_64-linux-gnu/bits/types/__mbstate_t.h" 3 4
typedef struct
{
  int __count;
  union
  {
    unsigned int __wch;
    char __wchb[4];
  } __value;
} __mbstate_t;
# 22 "/usr/include/x86_64-linux-gnu/bits/_G_config.h" 2 3 4




typedef struct
{
  __off_t __pos;
  __mbstate_t __state;
} _G_fpos_t;
typedef struct
{
  __off64_t __pos;
  __mbstate_t __state;
} _G_fpos64_t;
# 36 "/usr/include/x86_64-linux-gnu/bits/libio.h" 2 3 4
# 53 "/usr/include/x86_64-linux-gnu/bits/libio.h" 3 4
# 1 "/usr/lib/gcc/x86_64-linux-gnu/7/include/stdarg.h" 1 3 4
# 40 "/usr/lib/gcc/x86_64-linux-gnu/7/include/stdarg.h" 3 4
typedef __builtin_va_list __gnuc_va_list;
# 54 "/usr/include/x86_64-linux-gnu/bits/libio.h" 2 3 4
# 149 "/usr/include/x86_64-linux-gnu/bits/libio.h" 3 4
struct _IO_jump_t; struct _IO_FILE;




typedef void _IO_lock_t;





struct _IO_marker {
  struct _IO_marker *_next;
  struct _IO_FILE *_sbuf;



  int _pos;
# 177 "/usr/include/x86_64-linux-gnu/bits/libio.h" 3 4
};


enum __codecvt_result
{
  __codecvt_ok,
  __codecvt_partial,
  __codecvt_error,
  __codecvt_noconv
};
# 245 "/usr/include/x86_64-linux-gnu/bits/libio.h" 3 4
struct _IO_FILE {
  int _flags;




  char* _IO_read_ptr;
  char* _IO_read_end;
  char* _IO_read_base;
  char* _IO_write_base;
  char* _IO_write_ptr;
  char* _IO_write_end;
  char* _IO_buf_base;
  char* _IO_buf_end;

  char *_IO_save_base;
  char *_IO_backup_base;
  char *_IO_save_end;

  struct _IO_marker *_markers;

  struct _IO_FILE *_chain;

  int _fileno;



  int _flags2;

  __off_t _old_offset;



  unsigned short _cur_column;
  signed char _vtable_offset;
  char _shortbuf[1];



  _IO_lock_t *_lock;
# 293 "/usr/include/x86_64-linux-gnu/bits/libio.h" 3 4
  __off64_t _offset;







  void *__pad1;
  void *__pad2;
  void *__pad3;
  void *__pad4;

  size_t __pad5;
  int _mode;

  char _unused2[15 * sizeof (int) - 4 * sizeof (void *) - sizeof (size_t)];

};


typedef struct _IO_FILE _IO_FILE;


struct _IO_FILE_plus;

extern struct _IO_FILE_plus _IO_2_1_stdin_;
extern struct _IO_FILE_plus _IO_2_1_stdout_;
extern struct _IO_FILE_plus _IO_2_1_stderr_;
# 337 "/usr/include/x86_64-linux-gnu/bits/libio.h" 3 4
typedef __ssize_t __io_read_fn (void *__cookie, char *__buf, size_t __nbytes);







typedef __ssize_t __io_write_fn (void *__cookie, const char *__buf,
     size_t __n);







typedef int __io_seek_fn (void *__cookie, __off64_t *__pos, int __w);


typedef int __io_close_fn (void *__cookie);
# 389 "/usr/include/x86_64-linux-gnu/bits/libio.h" 3 4
extern int __underflow (_IO_FILE *);
extern int __uflow (_IO_FILE *);
extern int __overflow (_IO_FILE *, int);
# 433 "/usr/include/x86_64-linux-gnu/bits/libio.h" 3 4
extern int _IO_getc (_IO_FILE *__fp);
extern int _IO_putc (int __c, _IO_FILE *__fp);
extern int _IO_feof (_IO_FILE *__fp) __attribute__ ((__nothrow__ , __leaf__));
extern int _IO_ferror (_IO_FILE *__fp) __attribute__ ((__nothrow__ , __leaf__));

extern int _IO_peekc_locked (_IO_FILE *__fp);





extern void _IO_flockfile (_IO_FILE *) __attribute__ ((__nothrow__ , __leaf__));
extern void _IO_funlockfile (_IO_FILE *) __attribute__ ((__nothrow__ , __leaf__));
extern int _IO_ftrylockfile (_IO_FILE *) __attribute__ ((__nothrow__ , __leaf__));
# 462 "/usr/include/x86_64-linux-gnu/bits/libio.h" 3 4
extern int _IO_vfscanf (_IO_FILE * __restrict, const char * __restrict,
   __gnuc_va_list, int *__restrict);
extern int _IO_vfprintf (_IO_FILE *__restrict, const char *__restrict,
    __gnuc_va_list);
extern __ssize_t _IO_padn (_IO_FILE *, int, __ssize_t);
extern size_t _IO_sgetn (_IO_FILE *, void *, size_t);

extern __off64_t _IO_seekoff (_IO_FILE *, __off64_t, int, int);
extern __off64_t _IO_seekpos (_IO_FILE *, __off64_t, int);

extern void _IO_free_backup_area (_IO_FILE *) __attribute__ ((__nothrow__ , __leaf__));
# 42 "/usr/include/stdio.h" 2 3 4




typedef __gnuc_va_list va_list;
# 57 "/usr/include/stdio.h" 3 4
typedef __off_t off_t;
# 71 "/usr/include/stdio.h" 3 4
typedef __ssize_t ssize_t;






typedef _G_fpos_t fpos_t;
# 131 "/usr/include/stdio.h" 3 4
# 1 "/usr/include/x86_64-linux-gnu/bits/stdio_lim.h" 1 3 4
# 132 "/usr/include/stdio.h" 2 3 4



extern struct _IO_FILE *stdin;
extern struct _IO_FILE *stdout;
extern struct _IO_FILE *stderr;






extern int remove (const char *__filename) __attribute__ ((__nothrow__ , __leaf__));

extern int rename (const char *__old, const char *__new) __attribute__ ((__nothrow__ , __leaf__));



extern int renameat (int __oldfd, const char *__old, int __newfd,
       const char *__new) __attribute__ ((__nothrow__ , __leaf__));







extern FILE *tmpfile (void) ;
# 173 "/usr/include/stdio.h" 3 4
extern char *tmpnam (char *__s) __attribute__ ((__nothrow__ , __leaf__)) ;




extern char *tmpnam_r (char *__s) __attribute__ ((__nothrow__ , __leaf__)) ;
# 190 "/usr/include/stdio.h" 3 4
extern char *tempnam (const char *__dir, const char *__pfx)
     __attribute__ ((__nothrow__ , __leaf__)) __attribute__ ((__malloc__)) ;







extern int fclose (FILE *__stream);




extern int fflush (FILE *__stream);
# 213 "/usr/include/stdio.h" 3 4
extern int fflush_unlocked (FILE *__stream);
# 232 "/usr/include/stdio.h" 3 4
extern FILE *fopen (const char *__restrict __filename,
      const char *__restrict __modes) ;




extern FILE *freopen (const char *__restrict __filename,
        const char *__restrict __modes,
        FILE *__restrict __stream) ;
# 265 "/usr/include/stdio.h" 3 4
extern FILE *fdopen (int __fd, const char *__modes) __attribute__ ((__nothrow__ , __leaf__)) ;
# 278 "/usr/include/stdio.h" 3 4
extern FILE *fmemopen (void *__s, size_t __len, const char *__modes)
  __attribute__ ((__nothrow__ , __leaf__)) ;




extern FILE *open_memstream (char **__bufloc, size_t *__sizeloc) __attribute__ ((__nothrow__ , __leaf__)) ;





extern void setbuf (FILE *__restrict __stream, char *__restrict __buf) __attribute__ ((__nothrow__ , __leaf__));



extern int setvbuf (FILE *__restrict __stream, char *__restrict __buf,
      int __modes, size_t __n) __attribute__ ((__nothrow__ , __leaf__));




extern void setbuffer (FILE *__restrict __stream, char *__restrict __buf,
         size_t __size) __attribute__ ((__nothrow__ , __leaf__));


extern void setlinebuf (FILE *__stream) __attribute__ ((__nothrow__ , __leaf__));







extern int fprintf (FILE *__restrict __stream,
      const char *__restrict __format, ...);




extern int printf (const char *__restrict __format, ...);

extern int sprintf (char *__restrict __s,
      const char *__restrict __format, ...) __attribute__ ((__nothrow__));





extern int vfprintf (FILE *__restrict __s, const char *__restrict __format,
       __gnuc_va_list __arg);




extern int vprintf (const char *__restrict __format, __gnuc_va_list __arg);

extern int vsprintf (char *__restrict __s, const char *__restrict __format,
       __gnuc_va_list __arg) __attribute__ ((__nothrow__));



extern int snprintf (char *__restrict __s, size_t __maxlen,
       const char *__restrict __format, ...)
     __attribute__ ((__nothrow__)) __attribute__ ((__format__ (__printf__, 3, 4)));

extern int vsnprintf (char *__restrict __s, size_t __maxlen,
        const char *__restrict __format, __gnuc_va_list __arg)
     __attribute__ ((__nothrow__)) __attribute__ ((__format__ (__printf__, 3, 0)));
# 365 "/usr/include/stdio.h" 3 4
extern int vdprintf (int __fd, const char *__restrict __fmt,
       __gnuc_va_list __arg)
     __attribute__ ((__format__ (__printf__, 2, 0)));
extern int dprintf (int __fd, const char *__restrict __fmt, ...)
     __attribute__ ((__format__ (__printf__, 2, 3)));







extern int fscanf (FILE *__restrict __stream,
     const char *__restrict __format, ...) ;




extern int scanf (const char *__restrict __format, ...) ;

extern int sscanf (const char *__restrict __s,
     const char *__restrict __format, ...) __attribute__ ((__nothrow__ , __leaf__));
# 395 "/usr/include/stdio.h" 3 4
extern int fscanf (FILE *__restrict __stream, const char *__restrict __format, ...) __asm__ ("" "__isoc99_fscanf")

                               ;
extern int scanf (const char *__restrict __format, ...) __asm__ ("" "__isoc99_scanf")
                              ;
extern int sscanf (const char *__restrict __s, const char *__restrict __format, ...) __asm__ ("" "__isoc99_sscanf") __attribute__ ((__nothrow__ , __leaf__))

                      ;
# 420 "/usr/include/stdio.h" 3 4
extern int vfscanf (FILE *__restrict __s, const char *__restrict __format,
      __gnuc_va_list __arg)
     __attribute__ ((__format__ (__scanf__, 2, 0))) ;





extern int vscanf (const char *__restrict __format, __gnuc_va_list __arg)
     __attribute__ ((__format__ (__scanf__, 1, 0))) ;


extern int vsscanf (const char *__restrict __s,
      const char *__restrict __format, __gnuc_va_list __arg)
     __attribute__ ((__nothrow__ , __leaf__)) __attribute__ ((__format__ (__scanf__, 2, 0)));
# 443 "/usr/include/stdio.h" 3 4
extern int vfscanf (FILE *__restrict __s, const char *__restrict __format, __gnuc_va_list __arg) __asm__ ("" "__isoc99_vfscanf")



     __attribute__ ((__format__ (__scanf__, 2, 0))) ;
extern int vscanf (const char *__restrict __format, __gnuc_va_list __arg) __asm__ ("" "__isoc99_vscanf")

     __attribute__ ((__format__ (__scanf__, 1, 0))) ;
extern int vsscanf (const char *__restrict __s, const char *__restrict __format, __gnuc_va_list __arg) __asm__ ("" "__isoc99_vsscanf") __attribute__ ((__nothrow__ , __leaf__))



     __attribute__ ((__format__ (__scanf__, 2, 0)));
# 477 "/usr/include/stdio.h" 3 4
extern int fgetc (FILE *__stream);
extern int getc (FILE *__stream);





extern int getchar (void);
# 495 "/usr/include/stdio.h" 3 4
extern int getc_unlocked (FILE *__stream);
extern int getchar_unlocked (void);
# 506 "/usr/include/stdio.h" 3 4
extern int fgetc_unlocked (FILE *__stream);
# 517 "/usr/include/stdio.h" 3 4
extern int fputc (int __c, FILE *__stream);
extern int putc (int __c, FILE *__stream);





extern int putchar (int __c);
# 537 "/usr/include/stdio.h" 3 4
extern int fputc_unlocked (int __c, FILE *__stream);







extern int putc_unlocked (int __c, FILE *__stream);
extern int putchar_unlocked (int __c);






extern int getw (FILE *__stream);


extern int putw (int __w, FILE *__stream);







extern char *fgets (char *__restrict __s, int __n, FILE *__restrict __stream)
     ;
# 603 "/usr/include/stdio.h" 3 4
extern __ssize_t __getdelim (char **__restrict __lineptr,
          size_t *__restrict __n, int __delimiter,
          FILE *__restrict __stream) ;
extern __ssize_t getdelim (char **__restrict __lineptr,
        size_t *__restrict __n, int __delimiter,
        FILE *__restrict __stream) ;







extern __ssize_t getline (char **__restrict __lineptr,
       size_t *__restrict __n,
       FILE *__restrict __stream) ;







extern int fputs (const char *__restrict __s, FILE *__restrict __stream);





extern int puts (const char *__s);






extern int ungetc (int __c, FILE *__stream);






extern size_t fread (void *__restrict __ptr, size_t __size,
       size_t __n, FILE *__restrict __stream) ;




extern size_t fwrite (const void *__restrict __ptr, size_t __size,
        size_t __n, FILE *__restrict __s);
# 673 "/usr/include/stdio.h" 3 4
extern size_t fread_unlocked (void *__restrict __ptr, size_t __size,
         size_t __n, FILE *__restrict __stream) ;
extern size_t fwrite_unlocked (const void *__restrict __ptr, size_t __size,
          size_t __n, FILE *__restrict __stream);







extern int fseek (FILE *__stream, long int __off, int __whence);




extern long int ftell (FILE *__stream) ;




extern void rewind (FILE *__stream);
# 707 "/usr/include/stdio.h" 3 4
extern int fseeko (FILE *__stream, __off_t __off, int __whence);




extern __off_t ftello (FILE *__stream) ;
# 731 "/usr/include/stdio.h" 3 4
extern int fgetpos (FILE *__restrict __stream, fpos_t *__restrict __pos);




extern int fsetpos (FILE *__stream, const fpos_t *__pos);
# 757 "/usr/include/stdio.h" 3 4
extern void clearerr (FILE *__stream) __attribute__ ((__nothrow__ , __leaf__));

extern int feof (FILE *__stream) __attribute__ ((__nothrow__ , __leaf__)) ;

extern int ferror (FILE *__stream) __attribute__ ((__nothrow__ , __leaf__)) ;



extern void clearerr_unlocked (FILE *__stream) __attribute__ ((__nothrow__ , __leaf__));
extern int feof_unlocked (FILE *__stream) __attribute__ ((__nothrow__ , __leaf__)) ;
extern int ferror_unlocked (FILE *__stream) __attribute__ ((__nothrow__ , __leaf__)) ;







extern void perror (const char *__s);





# 1 "/usr/include/x86_64-linux-gnu/bits/sys_errlist.h" 1 3 4
# 26 "/usr/include/x86_64-linux-gnu/bits/sys_errlist.h" 3 4
extern int sys_nerr;
extern const char *const sys_errlist[];
# 782 "/usr/include/stdio.h" 2 3 4




extern int fileno (FILE *__stream) __attribute__ ((__nothrow__ , __leaf__)) ;




extern int fileno_unlocked (FILE *__stream) __attribute__ ((__nothrow__ , __leaf__)) ;
# 800 "/usr/include/stdio.h" 3 4
extern FILE *popen (const char *__command, const char *__modes) ;





extern int pclose (FILE *__stream);





extern char *ctermid (char *__s) __attribute__ ((__nothrow__ , __leaf__));
# 840 "/usr/include/stdio.h" 3 4
extern void flockfile (FILE *__stream) __attribute__ ((__nothrow__ , __leaf__));



extern int ftrylockfile (FILE *__stream) __attribute__ ((__nothrow__ , __leaf__)) ;


extern void funlockfile (FILE *__stream) __attribute__ ((__nothrow__ , __leaf__));
# 868 "/usr/include/stdio.h" 3 4

# 2 "define_max.c" 2
# 10 "define_max.c"

# 10 "define_max.c"
int main()
{

    int size = 100;
    int arr[(1024 * 1024)];
    float r = 5;

    float area = 3.14 * r * r;

    printf("Good morning");

    printf("%d %d\n", size, 100);
    printf("MAX\n");

    printf("Area = %f\n", area);


    return 0;
}*/


/*# 1 "define_max.c"
# 1 "<built-in>"
# 1 "<command-line>"
# 1 "define_max.c"
# 1 "/usr/include/stdio.h" 1 3 4
# 28 "/usr/include/stdio.h" 3 4
# 1 "/usr/include/features.h" 1 3 4
# 324 "/usr/include/features.h" 3 4
# 1 "/usr/include/i386-linux-gnu/bits/predefs.h" 1 3 4
# 325 "/usr/include/features.h" 2 3 4
# 357 "/usr/include/features.h" 3 4
# 1 "/usr/include/i386-linux-gnu/sys/cdefs.h" 1 3 4
# 378 "/usr/include/i386-linux-gnu/sys/cdefs.h" 3 4
# 1 "/usr/include/i386-linux-gnu/bits/wordsize.h" 1 3 4
# 379 "/usr/include/i386-linux-gnu/sys/cdefs.h" 2 3 4
# 358 "/usr/include/features.h" 2 3 4
# 389 "/usr/include/features.h" 3 4
# 1 "/usr/include/i386-linux-gnu/gnu/stubs.h" 1 3 4



# 1 "/usr/include/i386-linux-gnu/bits/wordsize.h" 1 3 4
# 5 "/usr/include/i386-linux-gnu/gnu/stubs.h" 2 3 4


# 1 "/usr/include/i386-linux-gnu/gnu/stubs-32.h" 1 3 4
# 8 "/usr/include/i386-linux-gnu/gnu/stubs.h" 2 3 4
# 390 "/usr/include/features.h" 2 3 4
# 29 "/usr/include/stdio.h" 2 3 4*/


/*#include <stdio.h>

void display(int val)
{
    printf("hello %d \n", val);

#line 100 "My Project"
    if (val < 0)
    {
	printf("Error in %s: %s @ %d on %s @ %s \n", __FILE__, __func__, __LINE__, __DATE__, __TIME__);

	return;
    }

}

int main()
{
    display(-1);

    return 0;
}*/


/*#include <stdio.h>

void display(int val)
{
    if (val < 0)
    {
	printf("Error in %s: %s @ %d on %s @ %s \n",
	    __FILE__, __func__, __LINE__, __DATE__, __TIME__);

	return;
    }

}

int main()
{
    printf("Iam in %s: %s @ %d on %s @ %s \n",
	    __FILE__, __func__, __LINE__, __DATE__, __TIME__);

    display(-1);

    return 0;
}*/


/*#include <stdio.h>
#include <qt.h>

#if (QT_VERSION < 3)
#error "Version unsupported. Min version reqd is v3.0"
#endif

#if 0
#ifndef __STDC__
#error "Not an ANSI compiler"
#endif
#endif

void display(int val)
{
    if (val < 0)
    {
    	// Do something

	return;
    }

    printf("hello %d \n", val);
}

int main()
{
    display(-1);

    return 0;
}*/


/*#include <stdio.h>

#ifndef DEBUG
#error "Please define DEBUG. "
#endif

#if(DEBUG == 1)
#define ERR_PRINT(args...) printf("%d:%s", __LINE__ , \
    __FILE__); printf(args)
#define WARN_PRINT(args...)
#elif(DEBUG == 2)
#define ERR_PRINT(args...) printf("%d:%s", __LINE__ , \
    __FILE__); printf(args)
#define WARN_PRINT(args...) printf("%d:%s", __LINE__ , \
    __FILE__); printf(args)
#endif

int main()
{
    ERR_PRINT("This is an ERROR message\n");
    WARN_PRINT("This is an WARNING Message\n");
}*/


/* FILE: test_error.c
 * Description: 
 *

#include <stdio.h>

//#error "There is some error in code"
#warning "There is some warning in code"
int main()
{
    return 0;
}*/


/*#include <stdio.h>

#define PRINT(expr) printf(#expr "= %d\n", expr)

int main()
{
    int x, y = 5, z = 10, a = 50, b = 12, c = 100;

    PRINT((a + b));
    //printf("(a + b) = %d\n", (a + b));

    //printf("(a + b) * c + z = %d\n", (a + b) * c + z);
}*/


/* Description: This program illustrates the use of ## (concatenate)
 * pre-processing construct. Here were are generating function definitions
 * which are similar in logic, but name and certain params vary

#include <stdio.h>

#define DEFINE_REG_FUNC(regaddr) \
    void set_register##regaddr(void)\
{\
    common_func(regaddr);\
    do_someting();\
}

DEFINE_REG_FUNC(100);
DEFINE_REG_FUNC(200);
DEFINE_REG_FUNC(300);
DEFINE_REG_FUNC(400);

int main()
{
    set_register100();
}*/


/*# 1 "function_def.c"
# 1 "<built-in>"
# 1 "<command-line>"
# 31 "<command-line>"
# 1 "/usr/include/stdc-predef.h" 1 3 4
# 32 "<command-line>" 2
# 1 "function_def.c"





# 1 "/usr/include/stdio.h" 1 3 4
# 27 "/usr/include/stdio.h" 3 4
# 1 "/usr/include/x86_64-linux-gnu/bits/libc-header-start.h" 1 3 4
# 33 "/usr/include/x86_64-linux-gnu/bits/libc-header-start.h" 3 4
# 1 "/usr/include/features.h" 1 3 4
# 424 "/usr/include/features.h" 3 4
# 1 "/usr/include/x86_64-linux-gnu/sys/cdefs.h" 1 3 4
# 427 "/usr/include/x86_64-linux-gnu/sys/cdefs.h" 3 4
# 1 "/usr/include/x86_64-linux-gnu/bits/wordsize.h" 1 3 4
# 428 "/usr/include/x86_64-linux-gnu/sys/cdefs.h" 2 3 4
# 1 "/usr/include/x86_64-linux-gnu/bits/long-double.h" 1 3 4
# 429 "/usr/include/x86_64-linux-gnu/sys/cdefs.h" 2 3 4
# 425 "/usr/include/features.h" 2 3 4
# 448 "/usr/include/features.h" 3 4
# 1 "/usr/include/x86_64-linux-gnu/gnu/stubs.h" 1 3 4
# 10 "/usr/include/x86_64-linux-gnu/gnu/stubs.h" 3 4
# 1 "/usr/include/x86_64-linux-gnu/gnu/stubs-64.h" 1 3 4
# 11 "/usr/include/x86_64-linux-gnu/gnu/stubs.h" 2 3 4
# 449 "/usr/include/features.h" 2 3 4
# 34 "/usr/include/x86_64-linux-gnu/bits/libc-header-start.h" 2 3 4
# 28 "/usr/include/stdio.h" 2 3 4





# 1 "/usr/lib/gcc/x86_64-linux-gnu/7/include/stddef.h" 1 3 4
# 216 "/usr/lib/gcc/x86_64-linux-gnu/7/include/stddef.h" 3 4

# 216 "/usr/lib/gcc/x86_64-linux-gnu/7/include/stddef.h" 3 4
typedef long unsigned int size_t;
# 34 "/usr/include/stdio.h" 2 3 4

# 1 "/usr/include/x86_64-linux-gnu/bits/types.h" 1 3 4
# 27 "/usr/include/x86_64-linux-gnu/bits/types.h" 3 4
# 1 "/usr/include/x86_64-linux-gnu/bits/wordsize.h" 1 3 4
# 28 "/usr/include/x86_64-linux-gnu/bits/types.h" 2 3 4


typedef unsigned char __u_char;
typedef unsigned short int __u_short;
typedef unsigned int __u_int;
typedef unsigned long int __u_long;


typedef signed char __int8_t;
typedef unsigned char __uint8_t;
typedef signed short int __int16_t;
typedef unsigned short int __uint16_t;
typedef signed int __int32_t;
typedef unsigned int __uint32_t;

typedef signed long int __int64_t;
typedef unsigned long int __uint64_t;







typedef long int __quad_t;
typedef unsigned long int __u_quad_t;







typedef long int __intmax_t;
typedef unsigned long int __uintmax_t;
# 130 "/usr/include/x86_64-linux-gnu/bits/types.h" 3 4
# 1 "/usr/include/x86_64-linux-gnu/bits/typesizes.h" 1 3 4
# 131 "/usr/include/x86_64-linux-gnu/bits/types.h" 2 3 4


typedef unsigned long int __dev_t;
typedef unsigned int __uid_t;
typedef unsigned int __gid_t;
typedef unsigned long int __ino_t;
typedef unsigned long int __ino64_t;
typedef unsigned int __mode_t;
typedef unsigned long int __nlink_t;
typedef long int __off_t;
typedef long int __off64_t;
typedef int __pid_t;
typedef struct { int __val[2]; } __fsid_t;
typedef long int __clock_t;
typedef unsigned long int __rlim_t;
typedef unsigned long int __rlim64_t;
typedef unsigned int __id_t;
typedef long int __time_t;
typedef unsigned int __useconds_t;
typedef long int __suseconds_t;

typedef int __daddr_t;
typedef int __key_t;


typedef int __clockid_t;


typedef void * __timer_t;


typedef long int __blksize_t;




typedef long int __blkcnt_t;
typedef long int __blkcnt64_t;


typedef unsigned long int __fsblkcnt_t;
typedef unsigned long int __fsblkcnt64_t;


typedef unsigned long int __fsfilcnt_t;
typedef unsigned long int __fsfilcnt64_t;


typedef long int __fsword_t;

typedef long int __ssize_t;


typedef long int __syscall_slong_t;

typedef unsigned long int __syscall_ulong_t;



typedef __off64_t __loff_t;
typedef char *__caddr_t;


typedef long int __intptr_t;


typedef unsigned int __socklen_t;




typedef int __sig_atomic_t;
# 36 "/usr/include/stdio.h" 2 3 4
# 1 "/usr/include/x86_64-linux-gnu/bits/types/__FILE.h" 1 3 4



struct _IO_FILE;
typedef struct _IO_FILE __FILE;
# 37 "/usr/include/stdio.h" 2 3 4
# 1 "/usr/include/x86_64-linux-gnu/bits/types/FILE.h" 1 3 4



struct _IO_FILE;


typedef struct _IO_FILE FILE;
# 38 "/usr/include/stdio.h" 2 3 4



# 1 "/usr/include/x86_64-linux-gnu/bits/libio.h" 1 3 4
# 35 "/usr/include/x86_64-linux-gnu/bits/libio.h" 3 4
# 1 "/usr/include/x86_64-linux-gnu/bits/_G_config.h" 1 3 4
# 19 "/usr/include/x86_64-linux-gnu/bits/_G_config.h" 3 4
# 1 "/usr/lib/gcc/x86_64-linux-gnu/7/include/stddef.h" 1 3 4
# 20 "/usr/include/x86_64-linux-gnu/bits/_G_config.h" 2 3 4

# 1 "/usr/include/x86_64-linux-gnu/bits/types/__mbstate_t.h" 1 3 4
# 13 "/usr/include/x86_64-linux-gnu/bits/types/__mbstate_t.h" 3 4
typedef struct
{
  int __count;
  union
  {
    unsigned int __wch;
    char __wchb[4];
  } __value;
} __mbstate_t;
# 22 "/usr/include/x86_64-linux-gnu/bits/_G_config.h" 2 3 4




typedef struct
{
  __off_t __pos;
  __mbstate_t __state;
} _G_fpos_t;
typedef struct
{
  __off64_t __pos;
  __mbstate_t __state;
} _G_fpos64_t;
# 36 "/usr/include/x86_64-linux-gnu/bits/libio.h" 2 3 4
# 53 "/usr/include/x86_64-linux-gnu/bits/libio.h" 3 4
# 1 "/usr/lib/gcc/x86_64-linux-gnu/7/include/stdarg.h" 1 3 4
# 40 "/usr/lib/gcc/x86_64-linux-gnu/7/include/stdarg.h" 3 4
typedef __builtin_va_list __gnuc_va_list;
# 54 "/usr/include/x86_64-linux-gnu/bits/libio.h" 2 3 4
# 149 "/usr/include/x86_64-linux-gnu/bits/libio.h" 3 4
struct _IO_jump_t; struct _IO_FILE;




typedef void _IO_lock_t;





struct _IO_marker {
  struct _IO_marker *_next;
  struct _IO_FILE *_sbuf;



  int _pos;
# 177 "/usr/include/x86_64-linux-gnu/bits/libio.h" 3 4
};


enum __codecvt_result
{
  __codecvt_ok,
  __codecvt_partial,
  __codecvt_error,
  __codecvt_noconv
};
# 245 "/usr/include/x86_64-linux-gnu/bits/libio.h" 3 4
struct _IO_FILE {
  int _flags;




  char* _IO_read_ptr;
  char* _IO_read_end;
  char* _IO_read_base;
  char* _IO_write_base;
  char* _IO_write_ptr;
  char* _IO_write_end;
  char* _IO_buf_base;
  char* _IO_buf_end;

  char *_IO_save_base;
  char *_IO_backup_base;
  char *_IO_save_end;

  struct _IO_marker *_markers;

  struct _IO_FILE *_chain;

  int _fileno;



  int _flags2;

  __off_t _old_offset;



  unsigned short _cur_column;
  signed char _vtable_offset;
  char _shortbuf[1];



  _IO_lock_t *_lock;
# 293 "/usr/include/x86_64-linux-gnu/bits/libio.h" 3 4
  __off64_t _offset;







  void *__pad1;
  void *__pad2;
  void *__pad3;
  void *__pad4;

  size_t __pad5;
  int _mode;

  char _unused2[15 * sizeof (int) - 4 * sizeof (void *) - sizeof (size_t)];

};


typedef struct _IO_FILE _IO_FILE;


struct _IO_FILE_plus;

extern struct _IO_FILE_plus _IO_2_1_stdin_;
extern struct _IO_FILE_plus _IO_2_1_stdout_;
extern struct _IO_FILE_plus _IO_2_1_stderr_;
# 337 "/usr/include/x86_64-linux-gnu/bits/libio.h" 3 4
typedef __ssize_t __io_read_fn (void *__cookie, char *__buf, size_t __nbytes);







typedef __ssize_t __io_write_fn (void *__cookie, const char *__buf,
     size_t __n);







typedef int __io_seek_fn (void *__cookie, __off64_t *__pos, int __w);


typedef int __io_close_fn (void *__cookie);
# 389 "/usr/include/x86_64-linux-gnu/bits/libio.h" 3 4
extern int __underflow (_IO_FILE *);
extern int __uflow (_IO_FILE *);
extern int __overflow (_IO_FILE *, int);
# 433 "/usr/include/x86_64-linux-gnu/bits/libio.h" 3 4
extern int _IO_getc (_IO_FILE *__fp);
extern int _IO_putc (int __c, _IO_FILE *__fp);
extern int _IO_feof (_IO_FILE *__fp) __attribute__ ((__nothrow__ , __leaf__));
extern int _IO_ferror (_IO_FILE *__fp) __attribute__ ((__nothrow__ , __leaf__));

extern int _IO_peekc_locked (_IO_FILE *__fp);





extern void _IO_flockfile (_IO_FILE *) __attribute__ ((__nothrow__ , __leaf__));
extern void _IO_funlockfile (_IO_FILE *) __attribute__ ((__nothrow__ , __leaf__));
extern int _IO_ftrylockfile (_IO_FILE *) __attribute__ ((__nothrow__ , __leaf__));
# 462 "/usr/include/x86_64-linux-gnu/bits/libio.h" 3 4
extern int _IO_vfscanf (_IO_FILE * __restrict, const char * __restrict,
   __gnuc_va_list, int *__restrict);
extern int _IO_vfprintf (_IO_FILE *__restrict, const char *__restrict,
    __gnuc_va_list);
extern __ssize_t _IO_padn (_IO_FILE *, int, __ssize_t);
extern size_t _IO_sgetn (_IO_FILE *, void *, size_t);

extern __off64_t _IO_seekoff (_IO_FILE *, __off64_t, int, int);
extern __off64_t _IO_seekpos (_IO_FILE *, __off64_t, int);

extern void _IO_free_backup_area (_IO_FILE *) __attribute__ ((__nothrow__ , __leaf__));
# 42 "/usr/include/stdio.h" 2 3 4




typedef __gnuc_va_list va_list;
# 57 "/usr/include/stdio.h" 3 4
typedef __off_t off_t;
# 71 "/usr/include/stdio.h" 3 4
typedef __ssize_t ssize_t;






typedef _G_fpos_t fpos_t;
# 131 "/usr/include/stdio.h" 3 4
# 1 "/usr/include/x86_64-linux-gnu/bits/stdio_lim.h" 1 3 4
# 132 "/usr/include/stdio.h" 2 3 4



extern struct _IO_FILE *stdin;
extern struct _IO_FILE *stdout;
extern struct _IO_FILE *stderr;






extern int remove (const char *__filename) __attribute__ ((__nothrow__ , __leaf__));

extern int rename (const char *__old, const char *__new) __attribute__ ((__nothrow__ , __leaf__));



extern int renameat (int __oldfd, const char *__old, int __newfd,
       const char *__new) __attribute__ ((__nothrow__ , __leaf__));







extern FILE *tmpfile (void) ;
# 173 "/usr/include/stdio.h" 3 4
extern char *tmpnam (char *__s) __attribute__ ((__nothrow__ , __leaf__)) ;




extern char *tmpnam_r (char *__s) __attribute__ ((__nothrow__ , __leaf__)) ;
# 190 "/usr/include/stdio.h" 3 4
extern char *tempnam (const char *__dir, const char *__pfx)
     __attribute__ ((__nothrow__ , __leaf__)) __attribute__ ((__malloc__)) ;







extern int fclose (FILE *__stream);




extern int fflush (FILE *__stream);
# 213 "/usr/include/stdio.h" 3 4
extern int fflush_unlocked (FILE *__stream);
# 232 "/usr/include/stdio.h" 3 4
extern FILE *fopen (const char *__restrict __filename,
      const char *__restrict __modes) ;




extern FILE *freopen (const char *__restrict __filename,
        const char *__restrict __modes,
        FILE *__restrict __stream) ;
# 265 "/usr/include/stdio.h" 3 4
extern FILE *fdopen (int __fd, const char *__modes) __attribute__ ((__nothrow__ , __leaf__)) ;
# 278 "/usr/include/stdio.h" 3 4
extern FILE *fmemopen (void *__s, size_t __len, const char *__modes)
  __attribute__ ((__nothrow__ , __leaf__)) ;




extern FILE *open_memstream (char **__bufloc, size_t *__sizeloc) __attribute__ ((__nothrow__ , __leaf__)) ;





extern void setbuf (FILE *__restrict __stream, char *__restrict __buf) __attribute__ ((__nothrow__ , __leaf__));



extern int setvbuf (FILE *__restrict __stream, char *__restrict __buf,
      int __modes, size_t __n) __attribute__ ((__nothrow__ , __leaf__));




extern void setbuffer (FILE *__restrict __stream, char *__restrict __buf,
         size_t __size) __attribute__ ((__nothrow__ , __leaf__));


extern void setlinebuf (FILE *__stream) __attribute__ ((__nothrow__ , __leaf__));







extern int fprintf (FILE *__restrict __stream,
      const char *__restrict __format, ...);




extern int printf (const char *__restrict __format, ...);

extern int sprintf (char *__restrict __s,
      const char *__restrict __format, ...) __attribute__ ((__nothrow__));





extern int vfprintf (FILE *__restrict __s, const char *__restrict __format,
       __gnuc_va_list __arg);




extern int vprintf (const char *__restrict __format, __gnuc_va_list __arg);

extern int vsprintf (char *__restrict __s, const char *__restrict __format,
       __gnuc_va_list __arg) __attribute__ ((__nothrow__));



extern int snprintf (char *__restrict __s, size_t __maxlen,
       const char *__restrict __format, ...)
     __attribute__ ((__nothrow__)) __attribute__ ((__format__ (__printf__, 3, 4)));

extern int vsnprintf (char *__restrict __s, size_t __maxlen,
        const char *__restrict __format, __gnuc_va_list __arg)
     __attribute__ ((__nothrow__)) __attribute__ ((__format__ (__printf__, 3, 0)));
# 365 "/usr/include/stdio.h" 3 4
extern int vdprintf (int __fd, const char *__restrict __fmt,
       __gnuc_va_list __arg)
     __attribute__ ((__format__ (__printf__, 2, 0)));
extern int dprintf (int __fd, const char *__restrict __fmt, ...)
     __attribute__ ((__format__ (__printf__, 2, 3)));







extern int fscanf (FILE *__restrict __stream,
     const char *__restrict __format, ...) ;




extern int scanf (const char *__restrict __format, ...) ;

extern int sscanf (const char *__restrict __s,
     const char *__restrict __format, ...) __attribute__ ((__nothrow__ , __leaf__));
# 395 "/usr/include/stdio.h" 3 4
extern int fscanf (FILE *__restrict __stream, const char *__restrict __format, ...) __asm__ ("" "__isoc99_fscanf")

                               ;
extern int scanf (const char *__restrict __format, ...) __asm__ ("" "__isoc99_scanf")
                              ;
extern int sscanf (const char *__restrict __s, const char *__restrict __format, ...) __asm__ ("" "__isoc99_sscanf") __attribute__ ((__nothrow__ , __leaf__))

                      ;
# 420 "/usr/include/stdio.h" 3 4
extern int vfscanf (FILE *__restrict __s, const char *__restrict __format,
      __gnuc_va_list __arg)
     __attribute__ ((__format__ (__scanf__, 2, 0))) ;





extern int vscanf (const char *__restrict __format, __gnuc_va_list __arg)
     __attribute__ ((__format__ (__scanf__, 1, 0))) ;


extern int vsscanf (const char *__restrict __s,
      const char *__restrict __format, __gnuc_va_list __arg)
     __attribute__ ((__nothrow__ , __leaf__)) __attribute__ ((__format__ (__scanf__, 2, 0)));
# 443 "/usr/include/stdio.h" 3 4
extern int vfscanf (FILE *__restrict __s, const char *__restrict __format, __gnuc_va_list __arg) __asm__ ("" "__isoc99_vfscanf")



     __attribute__ ((__format__ (__scanf__, 2, 0))) ;
extern int vscanf (const char *__restrict __format, __gnuc_va_list __arg) __asm__ ("" "__isoc99_vscanf")

     __attribute__ ((__format__ (__scanf__, 1, 0))) ;
extern int vsscanf (const char *__restrict __s, const char *__restrict __format, __gnuc_va_list __arg) __asm__ ("" "__isoc99_vsscanf") __attribute__ ((__nothrow__ , __leaf__))



     __attribute__ ((__format__ (__scanf__, 2, 0)));
# 477 "/usr/include/stdio.h" 3 4
extern int fgetc (FILE *__stream);
extern int getc (FILE *__stream);





extern int getchar (void);
# 495 "/usr/include/stdio.h" 3 4
extern int getc_unlocked (FILE *__stream);
extern int getchar_unlocked (void);
# 506 "/usr/include/stdio.h" 3 4
extern int fgetc_unlocked (FILE *__stream);
# 517 "/usr/include/stdio.h" 3 4
extern int fputc (int __c, FILE *__stream);
extern int putc (int __c, FILE *__stream);





extern int putchar (int __c);
# 537 "/usr/include/stdio.h" 3 4
extern int fputc_unlocked (int __c, FILE *__stream);







extern int putc_unlocked (int __c, FILE *__stream);
extern int putchar_unlocked (int __c);






extern int getw (FILE *__stream);


extern int putw (int __w, FILE *__stream);







extern char *fgets (char *__restrict __s, int __n, FILE *__restrict __stream)
     ;
# 603 "/usr/include/stdio.h" 3 4
extern __ssize_t __getdelim (char **__restrict __lineptr,
          size_t *__restrict __n, int __delimiter,
          FILE *__restrict __stream) ;
extern __ssize_t getdelim (char **__restrict __lineptr,
        size_t *__restrict __n, int __delimiter,
        FILE *__restrict __stream) ;







extern __ssize_t getline (char **__restrict __lineptr,
       size_t *__restrict __n,
       FILE *__restrict __stream) ;







extern int fputs (const char *__restrict __s, FILE *__restrict __stream);





extern int puts (const char *__s);






extern int ungetc (int __c, FILE *__stream);






extern size_t fread (void *__restrict __ptr, size_t __size,
       size_t __n, FILE *__restrict __stream) ;




extern size_t fwrite (const void *__restrict __ptr, size_t __size,
        size_t __n, FILE *__restrict __s);
# 673 "/usr/include/stdio.h" 3 4
extern size_t fread_unlocked (void *__restrict __ptr, size_t __size,
         size_t __n, FILE *__restrict __stream) ;
extern size_t fwrite_unlocked (const void *__restrict __ptr, size_t __size,
          size_t __n, FILE *__restrict __stream);







extern int fseek (FILE *__stream, long int __off, int __whence);




extern long int ftell (FILE *__stream) ;




extern void rewind (FILE *__stream);
# 707 "/usr/include/stdio.h" 3 4
extern int fseeko (FILE *__stream, __off_t __off, int __whence);




extern __off_t ftello (FILE *__stream) ;
# 731 "/usr/include/stdio.h" 3 4
extern int fgetpos (FILE *__restrict __stream, fpos_t *__restrict __pos);




extern int fsetpos (FILE *__stream, const fpos_t *__pos);
# 757 "/usr/include/stdio.h" 3 4
extern void clearerr (FILE *__stream) __attribute__ ((__nothrow__ , __leaf__));

extern int feof (FILE *__stream) __attribute__ ((__nothrow__ , __leaf__)) ;

extern int ferror (FILE *__stream) __attribute__ ((__nothrow__ , __leaf__)) ;



extern void clearerr_unlocked (FILE *__stream) __attribute__ ((__nothrow__ , __leaf__));
extern int feof_unlocked (FILE *__stream) __attribute__ ((__nothrow__ , __leaf__)) ;
extern int ferror_unlocked (FILE *__stream) __attribute__ ((__nothrow__ , __leaf__)) ;







extern void perror (const char *__s);





# 1 "/usr/include/x86_64-linux-gnu/bits/sys_errlist.h" 1 3 4
# 26 "/usr/include/x86_64-linux-gnu/bits/sys_errlist.h" 3 4
extern int sys_nerr;
extern const char *const sys_errlist[];
# 782 "/usr/include/stdio.h" 2 3 4




extern int fileno (FILE *__stream) __attribute__ ((__nothrow__ , __leaf__)) ;




extern int fileno_unlocked (FILE *__stream) __attribute__ ((__nothrow__ , __leaf__)) ;
# 800 "/usr/include/stdio.h" 3 4
extern FILE *popen (const char *__command, const char *__modes) ;





extern int pclose (FILE *__stream);





extern char *ctermid (char *__s) __attribute__ ((__nothrow__ , __leaf__));
# 840 "/usr/include/stdio.h" 3 4
extern void flockfile (FILE *__stream) __attribute__ ((__nothrow__ , __leaf__));



extern int ftrylockfile (FILE *__stream) __attribute__ ((__nothrow__ , __leaf__)) ;


extern void funlockfile (FILE *__stream) __attribute__ ((__nothrow__ , __leaf__));
# 868 "/usr/include/stdio.h" 3 4

# 7 "function_def.c" 2
# 15 "function_def.c"

# 15 "function_def.c"
void set_register100(void){ common_func(100); do_someting();};
void set_register200(void){ common_func(200); do_someting();};
void set_register300(void){ common_func(300); do_someting();};
void set_register400(void){ common_func(400); do_someting();};

int main()
{
    set_register100();
}*/



/* Description: This program illustrates the use of ## (concatenate)
 * pre-processing construct. Here were are generating function definitions
 * which are similar in logic, but name and certain params vary*

#include <stdio.h>

void set_register100(void)
{
    common_func(100);
    do_someting();
}

void set_register200(void)
{
    common_func(200);
    do_someting();
}

void set_register300(void)
{
    common_func(300);
    do_someting();
}

void set_register400(void)
{
    common_func(400);
    do_someting();
}

int main()
{
    set_register100();
}*/


/* FILE: hash_usage.c 
 * Description: 
 *

#include <stdio.h>

#define PRINT(EXP) printf(#EXP " = %d\n", EXP)

int main()
{
    int a = 1, b = 2, c = 3, d = 4;

    //printf("a + b * c + d = %d\n", a + b * c + d);
    PRINT(a + b * c + d);

    //printf("(a * c) + (b * d) - a = %d\n", (a * c) + (b * d) - a);
    PRINT((a * c) + (b * d) - a);
    return 0;
}*/


//extern int sum(int x, int y);//


/* FILE: main.c
 * Description: 
 *

#include <stdio.h>

#include "sum.h"

int main()
{
    int res = sum(5, 10);

    printf("sum = %d\n", res);

    return 0;
}*/


/* FILE: sum.c
 * Description: 
 *

#include "sum.h"

int sum(int x, int y)
{
    return x + y;
}*/


/*#include <stdio.h>

int count = 10;
int size;

int main()
{
    int x;

    printf("hello\n");
}*/


/*# 1 "test.c"
# 1 "<built-in>"
# 1 "<command-line>"
# 31 "<command-line>"
# 1 "/usr/include/stdc-predef.h" 1 3 4
# 32 "<command-line>" 2
# 1 "test.c"
# 1 "/usr/include/stdio.h" 1 3 4
# 27 "/usr/include/stdio.h" 3 4
# 1 "/usr/include/features.h" 1 3 4
# 364 "/usr/include/features.h" 3 4
# 1 "/usr/include/x86_64-linux-gnu/sys/cdefs.h" 1 3 4
# 415 "/usr/include/x86_64-linux-gnu/sys/cdefs.h" 3 4
# 1 "/usr/include/x86_64-linux-gnu/bits/wordsize.h" 1 3 4
# 416 "/usr/include/x86_64-linux-gnu/sys/cdefs.h" 2 3 4
# 365 "/usr/include/features.h" 2 3 4
# 388 "/usr/include/features.h" 3 4
# 1 "/usr/include/x86_64-linux-gnu/gnu/stubs.h" 1 3 4
# 10 "/usr/include/x86_64-linux-gnu/gnu/stubs.h" 3 4
# 1 "/usr/include/x86_64-linux-gnu/gnu/stubs-64.h" 1 3 4
# 11 "/usr/include/x86_64-linux-gnu/gnu/stubs.h" 2 3 4
# 389 "/usr/include/features.h" 2 3 4
# 28 "/usr/include/stdio.h" 2 3 4





# 1 "/usr/lib/gcc/x86_64-linux-gnu/6/include/stddef.h" 1 3 4
# 216 "/usr/lib/gcc/x86_64-linux-gnu/6/include/stddef.h" 3 4

# 216 "/usr/lib/gcc/x86_64-linux-gnu/6/include/stddef.h" 3 4
typedef long unsigned int size_t;
# 34 "/usr/include/stdio.h" 2 3 4

# 1 "/usr/include/x86_64-linux-gnu/bits/types.h" 1 3 4
# 27 "/usr/include/x86_64-linux-gnu/bits/types.h" 3 4
# 1 "/usr/include/x86_64-linux-gnu/bits/wordsize.h" 1 3 4
# 28 "/usr/include/x86_64-linux-gnu/bits/types.h" 2 3 4


typedef unsigned char __u_char;
typedef unsigned short int __u_short;
typedef unsigned int __u_int;
typedef unsigned long int __u_long;


typedef signed char __int8_t;
typedef unsigned char __uint8_t;
typedef signed short int __int16_t;
typedef unsigned short int __uint16_t;
typedef signed int __int32_t;
typedef unsigned int __uint32_t;

typedef signed long int __int64_t;
typedef unsigned long int __uint64_t;







typedef long int __quad_t;
typedef unsigned long int __u_quad_t;
# 121 "/usr/include/x86_64-linux-gnu/bits/types.h" 3 4
# 1 "/usr/include/x86_64-linux-gnu/bits/typesizes.h" 1 3 4
# 122 "/usr/include/x86_64-linux-gnu/bits/types.h" 2 3 4


typedef unsigned long int __dev_t;
typedef unsigned int __uid_t;
typedef unsigned int __gid_t;
typedef unsigned long int __ino_t;
typedef unsigned long int __ino64_t;
typedef unsigned int __mode_t;
typedef unsigned long int __nlink_t;
typedef long int __off_t;
typedef long int __off64_t;
typedef int __pid_t;
typedef struct { int __val[2]; } __fsid_t;
typedef long int __clock_t;
typedef unsigned long int __rlim_t;
typedef unsigned long int __rlim64_t;
typedef unsigned int __id_t;
typedef long int __time_t;
typedef unsigned int __useconds_t;
typedef long int __suseconds_t;

typedef int __daddr_t;
typedef int __key_t;


typedef int __clockid_t;


typedef void * __timer_t;


typedef long int __blksize_t;




typedef long int __blkcnt_t;
typedef long int __blkcnt64_t;


typedef unsigned long int __fsblkcnt_t;
typedef unsigned long int __fsblkcnt64_t;


typedef unsigned long int __fsfilcnt_t;
typedef unsigned long int __fsfilcnt64_t;


typedef long int __fsword_t;

typedef long int __ssize_t;


typedef long int __syscall_slong_t;

typedef unsigned long int __syscall_ulong_t;



typedef __off64_t __loff_t;
typedef __quad_t *__qaddr_t;
typedef char *__caddr_t;


typedef long int __intptr_t;


typedef unsigned int __socklen_t;
# 36 "/usr/include/stdio.h" 2 3 4
# 44 "/usr/include/stdio.h" 3 4
struct _IO_FILE;



typedef struct _IO_FILE FILE;





# 64 "/usr/include/stdio.h" 3 4
typedef struct _IO_FILE __FILE;
# 74 "/usr/include/stdio.h" 3 4
# 1 "/usr/include/libio.h" 1 3 4
# 31 "/usr/include/libio.h" 3 4
# 1 "/usr/include/_G_config.h" 1 3 4
# 15 "/usr/include/_G_config.h" 3 4
# 1 "/usr/lib/gcc/x86_64-linux-gnu/6/include/stddef.h" 1 3 4
# 16 "/usr/include/_G_config.h" 2 3 4




# 1 "/usr/include/wchar.h" 1 3 4
# 82 "/usr/include/wchar.h" 3 4
typedef struct
{
  int __count;
  union
  {

    unsigned int __wch;



    char __wchb[4];
  } __value;
} __mbstate_t;
# 21 "/usr/include/_G_config.h" 2 3 4
typedef struct
{
  __off_t __pos;
  __mbstate_t __state;
} _G_fpos_t;
typedef struct
{
  __off64_t __pos;
  __mbstate_t __state;
} _G_fpos64_t;
# 32 "/usr/include/libio.h" 2 3 4
# 49 "/usr/include/libio.h" 3 4
# 1 "/usr/lib/gcc/x86_64-linux-gnu/6/include/stdarg.h" 1 3 4
# 40 "/usr/lib/gcc/x86_64-linux-gnu/6/include/stdarg.h" 3 4
typedef __builtin_va_list __gnuc_va_list;
# 50 "/usr/include/libio.h" 2 3 4
# 144 "/usr/include/libio.h" 3 4
struct _IO_jump_t; struct _IO_FILE;





typedef void _IO_lock_t;





struct _IO_marker {
  struct _IO_marker *_next;
  struct _IO_FILE *_sbuf;



  int _pos;
# 173 "/usr/include/libio.h" 3 4
};


enum __codecvt_result
{
  __codecvt_ok,
  __codecvt_partial,
  __codecvt_error,
  __codecvt_noconv
};
# 241 "/usr/include/libio.h" 3 4
struct _IO_FILE {
  int _flags;




  char* _IO_read_ptr;
  char* _IO_read_end;
  char* _IO_read_base;
  char* _IO_write_base;
  char* _IO_write_ptr;
  char* _IO_write_end;
  char* _IO_buf_base;
  char* _IO_buf_end;

  char *_IO_save_base;
  char *_IO_backup_base;
  char *_IO_save_end;

  struct _IO_marker *_markers;

  struct _IO_FILE *_chain;

  int _fileno;



  int _flags2;

  __off_t _old_offset;



  unsigned short _cur_column;
  signed char _vtable_offset;
  char _shortbuf[1];



  _IO_lock_t *_lock;
# 289 "/usr/include/libio.h" 3 4
  __off64_t _offset;







  void *__pad1;
  void *__pad2;
  void *__pad3;
  void *__pad4;

  size_t __pad5;
  int _mode;

  char _unused2[15 * sizeof (int) - 4 * sizeof (void *) - sizeof (size_t)];

};


typedef struct _IO_FILE _IO_FILE;


struct _IO_FILE_plus;

extern struct _IO_FILE_plus _IO_2_1_stdin_;
extern struct _IO_FILE_plus _IO_2_1_stdout_;
extern struct _IO_FILE_plus _IO_2_1_stderr_;
# 333 "/usr/include/libio.h" 3 4
typedef __ssize_t __io_read_fn (void *__cookie, char *__buf, size_t __nbytes);







typedef __ssize_t __io_write_fn (void *__cookie, const char *__buf,
     size_t __n);







typedef int __io_seek_fn (void *__cookie, __off64_t *__pos, int __w);


typedef int __io_close_fn (void *__cookie);
# 385 "/usr/include/libio.h" 3 4
extern int __underflow (_IO_FILE *);
extern int __uflow (_IO_FILE *);
extern int __overflow (_IO_FILE *, int);
# 429 "/usr/include/libio.h" 3 4
extern int _IO_getc (_IO_FILE *__fp);
extern int _IO_putc (int __c, _IO_FILE *__fp);
extern int _IO_feof (_IO_FILE *__fp) __attribute__ ((__nothrow__ , __leaf__));
extern int _IO_ferror (_IO_FILE *__fp) __attribute__ ((__nothrow__ , __leaf__));

extern int _IO_peekc_locked (_IO_FILE *__fp);





extern void _IO_flockfile (_IO_FILE *) __attribute__ ((__nothrow__ , __leaf__));
extern void _IO_funlockfile (_IO_FILE *) __attribute__ ((__nothrow__ , __leaf__));
extern int _IO_ftrylockfile (_IO_FILE *) __attribute__ ((__nothrow__ , __leaf__));
# 459 "/usr/include/libio.h" 3 4
extern int _IO_vfscanf (_IO_FILE * __restrict, const char * __restrict,
   __gnuc_va_list, int *__restrict);
extern int _IO_vfprintf (_IO_FILE *__restrict, const char *__restrict,
    __gnuc_va_list);
extern __ssize_t _IO_padn (_IO_FILE *, int, __ssize_t);
extern size_t _IO_sgetn (_IO_FILE *, void *, size_t);

extern __off64_t _IO_seekoff (_IO_FILE *, __off64_t, int, int);
extern __off64_t _IO_seekpos (_IO_FILE *, __off64_t, int);

extern void _IO_free_backup_area (_IO_FILE *) __attribute__ ((__nothrow__ , __leaf__));
# 75 "/usr/include/stdio.h" 2 3 4




typedef __gnuc_va_list va_list;
# 90 "/usr/include/stdio.h" 3 4
typedef __off_t off_t;
# 104 "/usr/include/stdio.h" 3 4
typedef __ssize_t ssize_t;







typedef _G_fpos_t fpos_t;




# 166 "/usr/include/stdio.h" 3 4
# 1 "/usr/include/x86_64-linux-gnu/bits/stdio_lim.h" 1 3 4
# 167 "/usr/include/stdio.h" 2 3 4



extern struct _IO_FILE *stdin;
extern struct _IO_FILE *stdout;
extern struct _IO_FILE *stderr;







extern int remove (const char *__filename) __attribute__ ((__nothrow__ , __leaf__));

extern int rename (const char *__old, const char *__new) __attribute__ ((__nothrow__ , __leaf__));




extern int renameat (int __oldfd, const char *__old, int __newfd,
       const char *__new) __attribute__ ((__nothrow__ , __leaf__));








extern FILE *tmpfile (void) ;
# 211 "/usr/include/stdio.h" 3 4
extern char *tmpnam (char *__s) __attribute__ ((__nothrow__ , __leaf__)) ;





extern char *tmpnam_r (char *__s) __attribute__ ((__nothrow__ , __leaf__)) ;
# 229 "/usr/include/stdio.h" 3 4
extern char *tempnam (const char *__dir, const char *__pfx)
     __attribute__ ((__nothrow__ , __leaf__)) __attribute__ ((__malloc__)) ;








extern int fclose (FILE *__stream);




extern int fflush (FILE *__stream);

# 254 "/usr/include/stdio.h" 3 4
extern int fflush_unlocked (FILE *__stream);
# 268 "/usr/include/stdio.h" 3 4






extern FILE *fopen (const char *__restrict __filename,
      const char *__restrict __modes) ;




extern FILE *freopen (const char *__restrict __filename,
        const char *__restrict __modes,
        FILE *__restrict __stream) ;
# 297 "/usr/include/stdio.h" 3 4

# 308 "/usr/include/stdio.h" 3 4
extern FILE *fdopen (int __fd, const char *__modes) __attribute__ ((__nothrow__ , __leaf__)) ;
# 321 "/usr/include/stdio.h" 3 4
extern FILE *fmemopen (void *__s, size_t __len, const char *__modes)
  __attribute__ ((__nothrow__ , __leaf__)) ;




extern FILE *open_memstream (char **__bufloc, size_t *__sizeloc) __attribute__ ((__nothrow__ , __leaf__)) ;






extern void setbuf (FILE *__restrict __stream, char *__restrict __buf) __attribute__ ((__nothrow__ , __leaf__));



extern int setvbuf (FILE *__restrict __stream, char *__restrict __buf,
      int __modes, size_t __n) __attribute__ ((__nothrow__ , __leaf__));





extern void setbuffer (FILE *__restrict __stream, char *__restrict __buf,
         size_t __size) __attribute__ ((__nothrow__ , __leaf__));


extern void setlinebuf (FILE *__stream) __attribute__ ((__nothrow__ , __leaf__));








extern int fprintf (FILE *__restrict __stream,
      const char *__restrict __format, ...);




extern int printf (const char *__restrict __format, ...);

extern int sprintf (char *__restrict __s,
      const char *__restrict __format, ...) __attribute__ ((__nothrow__));





extern int vfprintf (FILE *__restrict __s, const char *__restrict __format,
       __gnuc_va_list __arg);




extern int vprintf (const char *__restrict __format, __gnuc_va_list __arg);

extern int vsprintf (char *__restrict __s, const char *__restrict __format,
       __gnuc_va_list __arg) __attribute__ ((__nothrow__));





extern int snprintf (char *__restrict __s, size_t __maxlen,
       const char *__restrict __format, ...)
     __attribute__ ((__nothrow__)) __attribute__ ((__format__ (__printf__, 3, 4)));

extern int vsnprintf (char *__restrict __s, size_t __maxlen,
        const char *__restrict __format, __gnuc_va_list __arg)
     __attribute__ ((__nothrow__)) __attribute__ ((__format__ (__printf__, 3, 0)));

# 414 "/usr/include/stdio.h" 3 4
extern int vdprintf (int __fd, const char *__restrict __fmt,
       __gnuc_va_list __arg)
     __attribute__ ((__format__ (__printf__, 2, 0)));
extern int dprintf (int __fd, const char *__restrict __fmt, ...)
     __attribute__ ((__format__ (__printf__, 2, 3)));








extern int fscanf (FILE *__restrict __stream,
     const char *__restrict __format, ...) ;




extern int scanf (const char *__restrict __format, ...) ;

extern int sscanf (const char *__restrict __s,
     const char *__restrict __format, ...) __attribute__ ((__nothrow__ , __leaf__));
# 445 "/usr/include/stdio.h" 3 4
extern int fscanf (FILE *__restrict __stream, const char *__restrict __format, ...) __asm__ ("" "__isoc99_fscanf")

                               ;
extern int scanf (const char *__restrict __format, ...) __asm__ ("" "__isoc99_scanf")
                              ;
extern int sscanf (const char *__restrict __s, const char *__restrict __format, ...) __asm__ ("" "__isoc99_sscanf") __attribute__ ((__nothrow__ , __leaf__))

                      ;
# 465 "/usr/include/stdio.h" 3 4








extern int vfscanf (FILE *__restrict __s, const char *__restrict __format,
      __gnuc_va_list __arg)
     __attribute__ ((__format__ (__scanf__, 2, 0))) ;





extern int vscanf (const char *__restrict __format, __gnuc_va_list __arg)
     __attribute__ ((__format__ (__scanf__, 1, 0))) ;


extern int vsscanf (const char *__restrict __s,
      const char *__restrict __format, __gnuc_va_list __arg)
     __attribute__ ((__nothrow__ , __leaf__)) __attribute__ ((__format__ (__scanf__, 2, 0)));
# 496 "/usr/include/stdio.h" 3 4
extern int vfscanf (FILE *__restrict __s, const char *__restrict __format, __gnuc_va_list __arg) __asm__ ("" "__isoc99_vfscanf")



     __attribute__ ((__format__ (__scanf__, 2, 0))) ;
extern int vscanf (const char *__restrict __format, __gnuc_va_list __arg) __asm__ ("" "__isoc99_vscanf")

     __attribute__ ((__format__ (__scanf__, 1, 0))) ;
extern int vsscanf (const char *__restrict __s, const char *__restrict __format, __gnuc_va_list __arg) __asm__ ("" "__isoc99_vsscanf") __attribute__ ((__nothrow__ , __leaf__))



     __attribute__ ((__format__ (__scanf__, 2, 0)));
# 524 "/usr/include/stdio.h" 3 4









extern int fgetc (FILE *__stream);
extern int getc (FILE *__stream);





extern int getchar (void);

# 552 "/usr/include/stdio.h" 3 4
extern int getc_unlocked (FILE *__stream);
extern int getchar_unlocked (void);
# 563 "/usr/include/stdio.h" 3 4
extern int fgetc_unlocked (FILE *__stream);











extern int fputc (int __c, FILE *__stream);
extern int putc (int __c, FILE *__stream);





extern int putchar (int __c);

# 596 "/usr/include/stdio.h" 3 4
extern int fputc_unlocked (int __c, FILE *__stream);







extern int putc_unlocked (int __c, FILE *__stream);
extern int putchar_unlocked (int __c);






extern int getw (FILE *__stream);


extern int putw (int __w, FILE *__stream);








extern char *fgets (char *__restrict __s, int __n, FILE *__restrict __stream)
     ;
# 642 "/usr/include/stdio.h" 3 4

# 667 "/usr/include/stdio.h" 3 4
extern __ssize_t __getdelim (char **__restrict __lineptr,
          size_t *__restrict __n, int __delimiter,
          FILE *__restrict __stream) ;
extern __ssize_t getdelim (char **__restrict __lineptr,
        size_t *__restrict __n, int __delimiter,
        FILE *__restrict __stream) ;







extern __ssize_t getline (char **__restrict __lineptr,
       size_t *__restrict __n,
       FILE *__restrict __stream) ;








extern int fputs (const char *__restrict __s, FILE *__restrict __stream);





extern int puts (const char *__s);






extern int ungetc (int __c, FILE *__stream);






extern size_t fread (void *__restrict __ptr, size_t __size,
       size_t __n, FILE *__restrict __stream) ;




extern size_t fwrite (const void *__restrict __ptr, size_t __size,
        size_t __n, FILE *__restrict __s);

# 739 "/usr/include/stdio.h" 3 4
extern size_t fread_unlocked (void *__restrict __ptr, size_t __size,
         size_t __n, FILE *__restrict __stream) ;
extern size_t fwrite_unlocked (const void *__restrict __ptr, size_t __size,
          size_t __n, FILE *__restrict __stream);








extern int fseek (FILE *__stream, long int __off, int __whence);




extern long int ftell (FILE *__stream) ;




extern void rewind (FILE *__stream);

# 775 "/usr/include/stdio.h" 3 4
extern int fseeko (FILE *__stream, __off_t __off, int __whence);




extern __off_t ftello (FILE *__stream) ;
# 794 "/usr/include/stdio.h" 3 4






extern int fgetpos (FILE *__restrict __stream, fpos_t *__restrict __pos);




extern int fsetpos (FILE *__stream, const fpos_t *__pos);
# 817 "/usr/include/stdio.h" 3 4

# 826 "/usr/include/stdio.h" 3 4


extern void clearerr (FILE *__stream) __attribute__ ((__nothrow__ , __leaf__));

extern int feof (FILE *__stream) __attribute__ ((__nothrow__ , __leaf__)) ;

extern int ferror (FILE *__stream) __attribute__ ((__nothrow__ , __leaf__)) ;




extern void clearerr_unlocked (FILE *__stream) __attribute__ ((__nothrow__ , __leaf__));
extern int feof_unlocked (FILE *__stream) __attribute__ ((__nothrow__ , __leaf__)) ;
extern int ferror_unlocked (FILE *__stream) __attribute__ ((__nothrow__ , __leaf__)) ;








extern void perror (const char *__s);






# 1 "/usr/include/x86_64-linux-gnu/bits/sys_errlist.h" 1 3 4
# 26 "/usr/include/x86_64-linux-gnu/bits/sys_errlist.h" 3 4
extern int sys_nerr;
extern const char *const sys_errlist[];
# 856 "/usr/include/stdio.h" 2 3 4




extern int fileno (FILE *__stream) __attribute__ ((__nothrow__ , __leaf__)) ;




extern int fileno_unlocked (FILE *__stream) __attribute__ ((__nothrow__ , __leaf__)) ;
# 874 "/usr/include/stdio.h" 3 4
extern FILE *popen (const char *__command, const char *__modes) ;





extern int pclose (FILE *__stream);





extern char *ctermid (char *__s) __attribute__ ((__nothrow__ , __leaf__));
# 914 "/usr/include/stdio.h" 3 4
extern void flockfile (FILE *__stream) __attribute__ ((__nothrow__ , __leaf__));



extern int ftrylockfile (FILE *__stream) __attribute__ ((__nothrow__ , __leaf__)) ;


extern void funlockfile (FILE *__stream) __attribute__ ((__nothrow__ , __leaf__));
# 944 "/usr/include/stdio.h" 3 4

# 2 "test.c" 2


# 3 "test.c"
int main()
{
    printf("hello\n");
}*/


/*	.file	"test.c"
	.section	.rodata
.LC0:
	.string	"hello"
	.text
	.globl	main
	.type	main, @function
main:
.LFB0:
	.cfi_startproc
	pushq	%rbp
	.cfi_def_cfa_offset 16
	.cfi_offset 6, -16
	movq	%rsp, %rbp
	.cfi_def_cfa_register 6
	leaq	.LC0(%rip), %rdi
	call	puts@PLT
	movl	$0, %eax
	popq	%rbp
	.cfi_def_cfa 7, 8
	ret
	.cfi_endproc
.LFE0:
	.size	main, .-main
	.ident	"GCC: (Ubuntu 6.3.0-12ubuntu2) 6.3.0 20170406"
	.section	.note.GNU-stack,"",@progbits*/


/*#include <stdio.h>

#define SUM(x, y) ((x) + (y))

int main()
{
    int a = 5, b = 10, res;
    float val1 = 2.5f, val2 = 3.0f, res2;

    // Macros are not type specific
    res = SUM(a, b);
    res2 = SUM(val1, val2);
    printf("res = %d\n", res);
    printf("res2 = %f\n", res2);

    return 0;
}*/


/*#include <stdio.h>

#define GET_BIT(num, pos) (((unsigned)num >> pos) & 1)
#define SET_BIT(num, pos) ((num) | (1 << pos))
#define CLEAR_BIT(num, pos) ((num) & ~(1 << pos))


int main()
{
    int val = 5, x = 0xAF;
    int bit;

    bit = GET_BIT(val, 2);
    printf("bit = %X\n", bit);

    x = SET_BIT(x, 10);
    printf("SET x = %X\n", x);

    x = CLEAR_BIT(x, 10);
    printf("CLEAR x = %X\n", x);
    return 0;
}*/


/*4,5c4,9
< #define SET_BIT(num) ((num) | 1)
< #define CLEAR_BIT(num) ((num) & ~1)
---
> #define SET_BIT(num) (num = (num) | 1)
> #define CLEAR_BIT(num) (num = (num) & ~1)
> 
> #define GET_NTH_BIT(num, pos) ((num >> pos) & 1)
> #define SET_NTH_BIT(num, pos) (num = num | (1 << pos))
> #define CLEAR_NTH_BIT(num, pos) (num = (num) & ~(1 << pos))
16c20,32
<     x = CLEAR_BIT(x);
---
>     CLEAR_BIT(x);
>     printf("CLEAR x = %X\n", x);
> 
>     SET_BIT(x);
>     printf("SET x = %X\n", x);
> 
>     CLEAR_BIT(x);
>     printf("CLEAR x = %X\n", x);
> 
>     bit = GET_NTH_BIT(val, 2);
>     printf("bit = %X\n", bit);
> 
>     CLEAR_NTH_BIT(x, 6);
19c35
<     x = SET_BIT(x);
---
>     SET_NTH_BIT(x, 6);
22c38
<     x = CLEAR_BIT(x);
---
>     CLEAR_NTH_BIT(x, 6);*/


/*#include <stdio.h>

#define ABSOLUTE_VAL(x) ((x > 0) ? (x) : (-x))
#define MIN(a, b) (((a) < (b)) ? (a) : (b))
#define SQUARE(x) ((x) * (x))

int main()
{
    int a = -5, b = 10, c = 15;
    float f1 = 25.7, f2 = 1.3, res2;
    int res;

    res = ABSOLUTE_VAL(a);
    printf("Absolute value of a is %d\n", res);

    res = MIN(b, c);
    printf("Minimum value is %d\n", res);

    res2 = MIN(f1, f2);
    printf("Minimum value is %f\n", res2);

    res = SQUARE(a + b);
    printf("Square of (a + b) = %d\n", res);

    return 0;
}*/


/*# 1 "macro.c"
# 1 "<built-in>"
# 1 "<command-line>"
# 31 "<command-line>"
# 1 "/usr/include/stdc-predef.h" 1 3 4
# 32 "<command-line>" 2
# 1 "macro.c"
# 1 "/usr/include/stdio.h" 1 3 4
# 27 "/usr/include/stdio.h" 3 4
# 1 "/usr/include/x86_64-linux-gnu/bits/libc-header-start.h" 1 3 4
# 33 "/usr/include/x86_64-linux-gnu/bits/libc-header-start.h" 3 4
# 1 "/usr/include/features.h" 1 3 4
# 424 "/usr/include/features.h" 3 4
# 1 "/usr/include/x86_64-linux-gnu/sys/cdefs.h" 1 3 4
# 427 "/usr/include/x86_64-linux-gnu/sys/cdefs.h" 3 4
# 1 "/usr/include/x86_64-linux-gnu/bits/wordsize.h" 1 3 4
# 428 "/usr/include/x86_64-linux-gnu/sys/cdefs.h" 2 3 4
# 1 "/usr/include/x86_64-linux-gnu/bits/long-double.h" 1 3 4
# 429 "/usr/include/x86_64-linux-gnu/sys/cdefs.h" 2 3 4
# 425 "/usr/include/features.h" 2 3 4
# 448 "/usr/include/features.h" 3 4
# 1 "/usr/include/x86_64-linux-gnu/gnu/stubs.h" 1 3 4
# 10 "/usr/include/x86_64-linux-gnu/gnu/stubs.h" 3 4
# 1 "/usr/include/x86_64-linux-gnu/gnu/stubs-64.h" 1 3 4
# 11 "/usr/include/x86_64-linux-gnu/gnu/stubs.h" 2 3 4
# 449 "/usr/include/features.h" 2 3 4
# 34 "/usr/include/x86_64-linux-gnu/bits/libc-header-start.h" 2 3 4
# 28 "/usr/include/stdio.h" 2 3 4





# 1 "/usr/lib/gcc/x86_64-linux-gnu/7/include/stddef.h" 1 3 4
# 216 "/usr/lib/gcc/x86_64-linux-gnu/7/include/stddef.h" 3 4

# 216 "/usr/lib/gcc/x86_64-linux-gnu/7/include/stddef.h" 3 4
typedef long unsigned int size_t;
# 34 "/usr/include/stdio.h" 2 3 4

# 1 "/usr/include/x86_64-linux-gnu/bits/types.h" 1 3 4
# 27 "/usr/include/x86_64-linux-gnu/bits/types.h" 3 4
# 1 "/usr/include/x86_64-linux-gnu/bits/wordsize.h" 1 3 4
# 28 "/usr/include/x86_64-linux-gnu/bits/types.h" 2 3 4


typedef unsigned char __u_char;
typedef unsigned short int __u_short;
typedef unsigned int __u_int;
typedef unsigned long int __u_long;


typedef signed char __int8_t;
typedef unsigned char __uint8_t;
typedef signed short int __int16_t;
typedef unsigned short int __uint16_t;
typedef signed int __int32_t;
typedef unsigned int __uint32_t;

typedef signed long int __int64_t;
typedef unsigned long int __uint64_t;







typedef long int __quad_t;
typedef unsigned long int __u_quad_t;







typedef long int __intmax_t;
typedef unsigned long int __uintmax_t;
# 130 "/usr/include/x86_64-linux-gnu/bits/types.h" 3 4
# 1 "/usr/include/x86_64-linux-gnu/bits/typesizes.h" 1 3 4
# 131 "/usr/include/x86_64-linux-gnu/bits/types.h" 2 3 4


typedef unsigned long int __dev_t;
typedef unsigned int __uid_t;
typedef unsigned int __gid_t;
typedef unsigned long int __ino_t;
typedef unsigned long int __ino64_t;
typedef unsigned int __mode_t;
typedef unsigned long int __nlink_t;
typedef long int __off_t;
typedef long int __off64_t;
typedef int __pid_t;
typedef struct { int __val[2]; } __fsid_t;
typedef long int __clock_t;
typedef unsigned long int __rlim_t;
typedef unsigned long int __rlim64_t;
typedef unsigned int __id_t;
typedef long int __time_t;
typedef unsigned int __useconds_t;
typedef long int __suseconds_t;

typedef int __daddr_t;
typedef int __key_t;


typedef int __clockid_t;


typedef void * __timer_t;


typedef long int __blksize_t;




typedef long int __blkcnt_t;
typedef long int __blkcnt64_t;


typedef unsigned long int __fsblkcnt_t;
typedef unsigned long int __fsblkcnt64_t;


typedef unsigned long int __fsfilcnt_t;
typedef unsigned long int __fsfilcnt64_t;


typedef long int __fsword_t;

typedef long int __ssize_t;


typedef long int __syscall_slong_t;

typedef unsigned long int __syscall_ulong_t;



typedef __off64_t __loff_t;
typedef char *__caddr_t;


typedef long int __intptr_t;


typedef unsigned int __socklen_t;




typedef int __sig_atomic_t;
# 36 "/usr/include/stdio.h" 2 3 4
# 1 "/usr/include/x86_64-linux-gnu/bits/types/__FILE.h" 1 3 4



struct _IO_FILE;
typedef struct _IO_FILE __FILE;
# 37 "/usr/include/stdio.h" 2 3 4
# 1 "/usr/include/x86_64-linux-gnu/bits/types/FILE.h" 1 3 4



struct _IO_FILE;


typedef struct _IO_FILE FILE;
# 38 "/usr/include/stdio.h" 2 3 4



# 1 "/usr/include/x86_64-linux-gnu/bits/libio.h" 1 3 4
# 35 "/usr/include/x86_64-linux-gnu/bits/libio.h" 3 4
# 1 "/usr/include/x86_64-linux-gnu/bits/_G_config.h" 1 3 4
# 19 "/usr/include/x86_64-linux-gnu/bits/_G_config.h" 3 4
# 1 "/usr/lib/gcc/x86_64-linux-gnu/7/include/stddef.h" 1 3 4
# 20 "/usr/include/x86_64-linux-gnu/bits/_G_config.h" 2 3 4

# 1 "/usr/include/x86_64-linux-gnu/bits/types/__mbstate_t.h" 1 3 4
# 13 "/usr/include/x86_64-linux-gnu/bits/types/__mbstate_t.h" 3 4
typedef struct
{
  int __count;
  union
  {
    unsigned int __wch;
    char __wchb[4];
  } __value;
} __mbstate_t;
# 22 "/usr/include/x86_64-linux-gnu/bits/_G_config.h" 2 3 4




typedef struct
{
  __off_t __pos;
  __mbstate_t __state;
} _G_fpos_t;
typedef struct
{
  __off64_t __pos;
  __mbstate_t __state;
} _G_fpos64_t;
# 36 "/usr/include/x86_64-linux-gnu/bits/libio.h" 2 3 4
# 53 "/usr/include/x86_64-linux-gnu/bits/libio.h" 3 4
# 1 "/usr/lib/gcc/x86_64-linux-gnu/7/include/stdarg.h" 1 3 4
# 40 "/usr/lib/gcc/x86_64-linux-gnu/7/include/stdarg.h" 3 4
typedef __builtin_va_list __gnuc_va_list;
# 54 "/usr/include/x86_64-linux-gnu/bits/libio.h" 2 3 4
# 149 "/usr/include/x86_64-linux-gnu/bits/libio.h" 3 4
struct _IO_jump_t; struct _IO_FILE;




typedef void _IO_lock_t;





struct _IO_marker {
  struct _IO_marker *_next;
  struct _IO_FILE *_sbuf;



  int _pos;
# 177 "/usr/include/x86_64-linux-gnu/bits/libio.h" 3 4
};


enum __codecvt_result
{
  __codecvt_ok,
  __codecvt_partial,
  __codecvt_error,
  __codecvt_noconv
};
# 245 "/usr/include/x86_64-linux-gnu/bits/libio.h" 3 4
struct _IO_FILE {
  int _flags;




  char* _IO_read_ptr;
  char* _IO_read_end;
  char* _IO_read_base;
  char* _IO_write_base;
  char* _IO_write_ptr;
  char* _IO_write_end;
  char* _IO_buf_base;
  char* _IO_buf_end;

  char *_IO_save_base;
  char *_IO_backup_base;
  char *_IO_save_end;

  struct _IO_marker *_markers;

  struct _IO_FILE *_chain;

  int _fileno;



  int _flags2;

  __off_t _old_offset;



  unsigned short _cur_column;
  signed char _vtable_offset;
  char _shortbuf[1];



  _IO_lock_t *_lock;
# 293 "/usr/include/x86_64-linux-gnu/bits/libio.h" 3 4
  __off64_t _offset;







  void *__pad1;
  void *__pad2;
  void *__pad3;
  void *__pad4;

  size_t __pad5;
  int _mode;

  char _unused2[15 * sizeof (int) - 4 * sizeof (void *) - sizeof (size_t)];

};


typedef struct _IO_FILE _IO_FILE;


struct _IO_FILE_plus;

extern struct _IO_FILE_plus _IO_2_1_stdin_;
extern struct _IO_FILE_plus _IO_2_1_stdout_;
extern struct _IO_FILE_plus _IO_2_1_stderr_;
# 337 "/usr/include/x86_64-linux-gnu/bits/libio.h" 3 4
typedef __ssize_t __io_read_fn (void *__cookie, char *__buf, size_t __nbytes);







typedef __ssize_t __io_write_fn (void *__cookie, const char *__buf,
     size_t __n);







typedef int __io_seek_fn (void *__cookie, __off64_t *__pos, int __w);


typedef int __io_close_fn (void *__cookie);
# 389 "/usr/include/x86_64-linux-gnu/bits/libio.h" 3 4
extern int __underflow (_IO_FILE *);
extern int __uflow (_IO_FILE *);
extern int __overflow (_IO_FILE *, int);
# 433 "/usr/include/x86_64-linux-gnu/bits/libio.h" 3 4
extern int _IO_getc (_IO_FILE *__fp);
extern int _IO_putc (int __c, _IO_FILE *__fp);
extern int _IO_feof (_IO_FILE *__fp) __attribute__ ((__nothrow__ , __leaf__));
extern int _IO_ferror (_IO_FILE *__fp) __attribute__ ((__nothrow__ , __leaf__));

extern int _IO_peekc_locked (_IO_FILE *__fp);





extern void _IO_flockfile (_IO_FILE *) __attribute__ ((__nothrow__ , __leaf__));
extern void _IO_funlockfile (_IO_FILE *) __attribute__ ((__nothrow__ , __leaf__));
extern int _IO_ftrylockfile (_IO_FILE *) __attribute__ ((__nothrow__ , __leaf__));
# 462 "/usr/include/x86_64-linux-gnu/bits/libio.h" 3 4
extern int _IO_vfscanf (_IO_FILE * __restrict, const char * __restrict,
   __gnuc_va_list, int *__restrict);
extern int _IO_vfprintf (_IO_FILE *__restrict, const char *__restrict,
    __gnuc_va_list);
extern __ssize_t _IO_padn (_IO_FILE *, int, __ssize_t);
extern size_t _IO_sgetn (_IO_FILE *, void *, size_t);

extern __off64_t _IO_seekoff (_IO_FILE *, __off64_t, int, int);
extern __off64_t _IO_seekpos (_IO_FILE *, __off64_t, int);

extern void _IO_free_backup_area (_IO_FILE *) __attribute__ ((__nothrow__ , __leaf__));
# 42 "/usr/include/stdio.h" 2 3 4




typedef __gnuc_va_list va_list;
# 57 "/usr/include/stdio.h" 3 4
typedef __off_t off_t;
# 71 "/usr/include/stdio.h" 3 4
typedef __ssize_t ssize_t;






typedef _G_fpos_t fpos_t;
# 131 "/usr/include/stdio.h" 3 4
# 1 "/usr/include/x86_64-linux-gnu/bits/stdio_lim.h" 1 3 4
# 132 "/usr/include/stdio.h" 2 3 4



extern struct _IO_FILE *stdin;
extern struct _IO_FILE *stdout;
extern struct _IO_FILE *stderr;






extern int remove (const char *__filename) __attribute__ ((__nothrow__ , __leaf__));

extern int rename (const char *__old, const char *__new) __attribute__ ((__nothrow__ , __leaf__));



extern int renameat (int __oldfd, const char *__old, int __newfd,
       const char *__new) __attribute__ ((__nothrow__ , __leaf__));







extern FILE *tmpfile (void) ;
# 173 "/usr/include/stdio.h" 3 4
extern char *tmpnam (char *__s) __attribute__ ((__nothrow__ , __leaf__)) ;




extern char *tmpnam_r (char *__s) __attribute__ ((__nothrow__ , __leaf__)) ;
# 190 "/usr/include/stdio.h" 3 4
extern char *tempnam (const char *__dir, const char *__pfx)
     __attribute__ ((__nothrow__ , __leaf__)) __attribute__ ((__malloc__)) ;







extern int fclose (FILE *__stream);




extern int fflush (FILE *__stream);
# 213 "/usr/include/stdio.h" 3 4
extern int fflush_unlocked (FILE *__stream);
# 232 "/usr/include/stdio.h" 3 4
extern FILE *fopen (const char *__restrict __filename,
      const char *__restrict __modes) ;




extern FILE *freopen (const char *__restrict __filename,
        const char *__restrict __modes,
        FILE *__restrict __stream) ;
# 265 "/usr/include/stdio.h" 3 4
extern FILE *fdopen (int __fd, const char *__modes) __attribute__ ((__nothrow__ , __leaf__)) ;
# 278 "/usr/include/stdio.h" 3 4
extern FILE *fmemopen (void *__s, size_t __len, const char *__modes)
  __attribute__ ((__nothrow__ , __leaf__)) ;




extern FILE *open_memstream (char **__bufloc, size_t *__sizeloc) __attribute__ ((__nothrow__ , __leaf__)) ;





extern void setbuf (FILE *__restrict __stream, char *__restrict __buf) __attribute__ ((__nothrow__ , __leaf__));



extern int setvbuf (FILE *__restrict __stream, char *__restrict __buf,
      int __modes, size_t __n) __attribute__ ((__nothrow__ , __leaf__));




extern void setbuffer (FILE *__restrict __stream, char *__restrict __buf,
         size_t __size) __attribute__ ((__nothrow__ , __leaf__));


extern void setlinebuf (FILE *__stream) __attribute__ ((__nothrow__ , __leaf__));







extern int fprintf (FILE *__restrict __stream,
      const char *__restrict __format, ...);




extern int printf (const char *__restrict __format, ...);

extern int sprintf (char *__restrict __s,
      const char *__restrict __format, ...) __attribute__ ((__nothrow__));





extern int vfprintf (FILE *__restrict __s, const char *__restrict __format,
       __gnuc_va_list __arg);




extern int vprintf (const char *__restrict __format, __gnuc_va_list __arg);

extern int vsprintf (char *__restrict __s, const char *__restrict __format,
       __gnuc_va_list __arg) __attribute__ ((__nothrow__));



extern int snprintf (char *__restrict __s, size_t __maxlen,
       const char *__restrict __format, ...)
     __attribute__ ((__nothrow__)) __attribute__ ((__format__ (__printf__, 3, 4)));

extern int vsnprintf (char *__restrict __s, size_t __maxlen,
        const char *__restrict __format, __gnuc_va_list __arg)
     __attribute__ ((__nothrow__)) __attribute__ ((__format__ (__printf__, 3, 0)));
# 365 "/usr/include/stdio.h" 3 4
extern int vdprintf (int __fd, const char *__restrict __fmt,
       __gnuc_va_list __arg)
     __attribute__ ((__format__ (__printf__, 2, 0)));
extern int dprintf (int __fd, const char *__restrict __fmt, ...)
     __attribute__ ((__format__ (__printf__, 2, 3)));







extern int fscanf (FILE *__restrict __stream,
     const char *__restrict __format, ...) ;




extern int scanf (const char *__restrict __format, ...) ;

extern int sscanf (const char *__restrict __s,
     const char *__restrict __format, ...) __attribute__ ((__nothrow__ , __leaf__));
# 395 "/usr/include/stdio.h" 3 4
extern int fscanf (FILE *__restrict __stream, const char *__restrict __format, ...) __asm__ ("" "__isoc99_fscanf")

                               ;
extern int scanf (const char *__restrict __format, ...) __asm__ ("" "__isoc99_scanf")
                              ;
extern int sscanf (const char *__restrict __s, const char *__restrict __format, ...) __asm__ ("" "__isoc99_sscanf") __attribute__ ((__nothrow__ , __leaf__))

                      ;
# 420 "/usr/include/stdio.h" 3 4
extern int vfscanf (FILE *__restrict __s, const char *__restrict __format,
      __gnuc_va_list __arg)
     __attribute__ ((__format__ (__scanf__, 2, 0))) ;





extern int vscanf (const char *__restrict __format, __gnuc_va_list __arg)
     __attribute__ ((__format__ (__scanf__, 1, 0))) ;


extern int vsscanf (const char *__restrict __s,
      const char *__restrict __format, __gnuc_va_list __arg)
     __attribute__ ((__nothrow__ , __leaf__)) __attribute__ ((__format__ (__scanf__, 2, 0)));
# 443 "/usr/include/stdio.h" 3 4
extern int vfscanf (FILE *__restrict __s, const char *__restrict __format, __gnuc_va_list __arg) __asm__ ("" "__isoc99_vfscanf")



     __attribute__ ((__format__ (__scanf__, 2, 0))) ;
extern int vscanf (const char *__restrict __format, __gnuc_va_list __arg) __asm__ ("" "__isoc99_vscanf")

     __attribute__ ((__format__ (__scanf__, 1, 0))) ;
extern int vsscanf (const char *__restrict __s, const char *__restrict __format, __gnuc_va_list __arg) __asm__ ("" "__isoc99_vsscanf") __attribute__ ((__nothrow__ , __leaf__))



     __attribute__ ((__format__ (__scanf__, 2, 0)));
# 477 "/usr/include/stdio.h" 3 4
extern int fgetc (FILE *__stream);
extern int getc (FILE *__stream);





extern int getchar (void);
# 495 "/usr/include/stdio.h" 3 4
extern int getc_unlocked (FILE *__stream);
extern int getchar_unlocked (void);
# 506 "/usr/include/stdio.h" 3 4
extern int fgetc_unlocked (FILE *__stream);
# 517 "/usr/include/stdio.h" 3 4
extern int fputc (int __c, FILE *__stream);
extern int putc (int __c, FILE *__stream);





extern int putchar (int __c);
# 537 "/usr/include/stdio.h" 3 4
extern int fputc_unlocked (int __c, FILE *__stream);







extern int putc_unlocked (int __c, FILE *__stream);
extern int putchar_unlocked (int __c);






extern int getw (FILE *__stream);


extern int putw (int __w, FILE *__stream);







extern char *fgets (char *__restrict __s, int __n, FILE *__restrict __stream)
     ;
# 603 "/usr/include/stdio.h" 3 4
extern __ssize_t __getdelim (char **__restrict __lineptr,
          size_t *__restrict __n, int __delimiter,
          FILE *__restrict __stream) ;
extern __ssize_t getdelim (char **__restrict __lineptr,
        size_t *__restrict __n, int __delimiter,
        FILE *__restrict __stream) ;







extern __ssize_t getline (char **__restrict __lineptr,
       size_t *__restrict __n,
       FILE *__restrict __stream) ;







extern int fputs (const char *__restrict __s, FILE *__restrict __stream);





extern int puts (const char *__s);






extern int ungetc (int __c, FILE *__stream);






extern size_t fread (void *__restrict __ptr, size_t __size,
       size_t __n, FILE *__restrict __stream) ;




extern size_t fwrite (const void *__restrict __ptr, size_t __size,
        size_t __n, FILE *__restrict __s);
# 673 "/usr/include/stdio.h" 3 4
extern size_t fread_unlocked (void *__restrict __ptr, size_t __size,
         size_t __n, FILE *__restrict __stream) ;
extern size_t fwrite_unlocked (const void *__restrict __ptr, size_t __size,
          size_t __n, FILE *__restrict __stream);







extern int fseek (FILE *__stream, long int __off, int __whence);




extern long int ftell (FILE *__stream) ;




extern void rewind (FILE *__stream);
# 707 "/usr/include/stdio.h" 3 4
extern int fseeko (FILE *__stream, __off_t __off, int __whence);




extern __off_t ftello (FILE *__stream) ;
# 731 "/usr/include/stdio.h" 3 4
extern int fgetpos (FILE *__restrict __stream, fpos_t *__restrict __pos);




extern int fsetpos (FILE *__stream, const fpos_t *__pos);
# 757 "/usr/include/stdio.h" 3 4
extern void clearerr (FILE *__stream) __attribute__ ((__nothrow__ , __leaf__));

extern int feof (FILE *__stream) __attribute__ ((__nothrow__ , __leaf__)) ;

extern int ferror (FILE *__stream) __attribute__ ((__nothrow__ , __leaf__)) ;



extern void clearerr_unlocked (FILE *__stream) __attribute__ ((__nothrow__ , __leaf__));
extern int feof_unlocked (FILE *__stream) __attribute__ ((__nothrow__ , __leaf__)) ;
extern int ferror_unlocked (FILE *__stream) __attribute__ ((__nothrow__ , __leaf__)) ;







extern void perror (const char *__s);





# 1 "/usr/include/x86_64-linux-gnu/bits/sys_errlist.h" 1 3 4
# 26 "/usr/include/x86_64-linux-gnu/bits/sys_errlist.h" 3 4
extern int sys_nerr;
extern const char *const sys_errlist[];
# 782 "/usr/include/stdio.h" 2 3 4




extern int fileno (FILE *__stream) __attribute__ ((__nothrow__ , __leaf__)) ;




extern int fileno_unlocked (FILE *__stream) __attribute__ ((__nothrow__ , __leaf__)) ;
# 800 "/usr/include/stdio.h" 3 4
extern FILE *popen (const char *__command, const char *__modes) ;





extern int pclose (FILE *__stream);





extern char *ctermid (char *__s) __attribute__ ((__nothrow__ , __leaf__));
# 840 "/usr/include/stdio.h" 3 4
extern void flockfile (FILE *__stream) __attribute__ ((__nothrow__ , __leaf__));



extern int ftrylockfile (FILE *__stream) __attribute__ ((__nothrow__ , __leaf__)) ;


extern void funlockfile (FILE *__stream) __attribute__ ((__nothrow__ , __leaf__));
# 868 "/usr/include/stdio.h" 3 4

# 2 "macro.c" 2






# 7 "macro.c"
int main()
{
    int a = -5, b = 10, c = 15;
    float f1 = 25.7, f2 = 1.3, res2;
    int res;

    res = ((a > 0) ? (a) : (-a));
    printf("Absolute value of a is %d\n", res);

    res = (((b) < (c)) ? (b) : (c));
    printf("Minimum value is %d\n", res);

    res2 = (((f1) < (f2)) ? (f1) : (f2));
    printf("Minimum value is %f\n", res2);

    res = ((a + b) * (a + b));
    printf("Square of (a + b) = %d\n", res);

    return 0;
}*/


/*int main()
{
    int a = -5, b = 10, c = 15;
    float f1 = 25.7, f2 = 1.3, res2;
    int res;

    res = ((a > 0) ? (a) : (-a));
    printf("Absolute value of a is %d\n", res);

    res = (((b) < (c)) ? (b) : (c));
    printf("Minimum value is %d\n", res);

    res2 = (((f1) < (f2)) ? (f1) : (f2));
    printf("Minimum value is %f\n", res2);

    res = ((a + b) * (a + b));
    printf("Square of (a + b) = %d\n", res);

    return 0;
}*/


/*#include <stdio.h>

//This is a comment //
#define IS_POWER_OF_2(num) ((num != 0) && ((num & (num - 1)) == 0))

//This is another comment //

int main()
{

    int val = 16;
    int res;

    res = IS_POWER_OF_2(val);
    if (res == 1)
    {
	printf("%d is power of 2\n", val);
    }


    if (IS_POWER_OF_2(171))
    {
	puts("Its power of 2");
    }
    else
    {
	puts("Its NOT power of 2");
    }
    
}*/


/*#include <stdio.h>

#define SQUARE(x) x * x //Illus - 1

int main()
{
    int a = 2, b = 3, res;

    res = SQUARE(a + b);

    printf("res = %d\n", res);

    return 0;
}*/


/*#include <stdio.h>

#define SQUARE(x) (x) * (x) // Illus - 2

int main()
{
    int a = 2, b = 3, res;

    res = SQUARE(a + b);

    printf("res = %d\n", res);

    return 0;
}*/


/*#include <stdio.h>

#define SQUARE(x) (x) * (x) // Illus 3

int main()
{
    int a = 2, b = 3, res;

    res = 100 / SQUARE(5); // Illus 3
    printf("res = %d\n", res);

    return 0;
}*/


/*#include <stdio.h>

#define SQUARE(x) ((x) * (x)) // Illus - 4

int main()
{
    int a = 2, b = 3, res;

    res = 100 / SQUARE(5); // Illus 4
    printf("res = %d\n", res);

    return 0;
}*/


/*#include <stdio.h>

#define SQUARE(x) ((x) * (x)) // Illus - 5

int main()
{
    int a = 2, b = 3, res;

    res = SQUARE(++b); // Illus - 5
    printf("res = %d\n", res);

    return 0;
}*/


/*#include <stdio.h>

#define SQUARE(x) x * x //Illus - 1

//#define SQUARE(x) (x) * (x)
//#define SQUARE(x) (x * x) - Illus - 5

#define SQUARE(x) ((x) * (x))

int main()
{
    int a = 2, b = 3, res;

    res = SQUARE(a + b); // Illus -1
    printf("res = %d\n", res);
    //res = 100 / SQUARE(5); // Illus - 2 and 3

    //res = SQUARE(++b); // Illus - 4

    return 0;
}*/


/*#include <stdio.h>

#define GET_BIT(num) ((num) & 1)
#define SET_BIT(num) ((num) | 1)
#define CLEAR_BIT(num) ((num) & ~1)


int main()
{
    int val = 5, x = 0xAF;
    int bit;

    bit = GET_BIT(val);
    printf("bit = %X\n", bit);

    x = CLEAR_BIT(x);
    printf("CLEAR x = %X\n", x);

    x = SET_BIT(x);
    printf("SET x = %X\n", x);

    x = CLEAR_BIT(x);
    printf("CLEAR x = %X\n", x);

    return 0;
}*/


/*#include <stdio.h>

#define GET_BIT(num) ((num) & 1)
#define SET_BIT(num) (num = (num) | 1)
#define CLEAR_BIT(num) (num = (num) & ~1)

#define GET_NTH_BIT(num, pos) ((num >> pos) & 1)
#define SET_NTH_BIT(num, pos) (num = num | (1 << pos))
#define CLEAR_NTH_BIT(num, pos) (num = (num) & ~(1 << pos))


int main()
{
    int val = 5, x = 0xAF;
    int bit;

    bit = GET_BIT(val);
    printf("bit = %X\n", bit);

    CLEAR_BIT(x);
    printf("CLEAR x = %X\n", x);

    SET_BIT(x);
    printf("SET x = %X\n", x);

    CLEAR_BIT(x);
    printf("CLEAR x = %X\n", x);

    bit = GET_NTH_BIT(val, 2);
    printf("bit = %X\n", bit);

    CLEAR_NTH_BIT(x, 6);
    printf("CLEAR x = %X\n", x);

    SET_NTH_BIT(x, 6);
    printf("SET x = %X\n", x);

    CLEAR_NTH_BIT(x, 6);
    printf("CLEAR x = %X\n", x);

    return 0;
}*/


/*#include <stdio.h>

// Multi line macro
#define SWAP(a, b, data_type) \
{\
    data_type temp = a; \
    a = b; \
    b = temp;\
}

int main()
{
    int x = 5, y = 10;
    double d1 = 12.5, d2 = 25.0;

    SWAP(x, y, int);
    printf("x = %d, y = %d\n", x, y);

    SWAP(d1, d2, double);
    printf("d1 = %f, d2 = %f\n", d1, d2);

    return 0;
}*/


/*#include <stdio.h>

//commented #define SWAP(a, b) a = a ^ b; b = a ^ b; a = a ^ b;

#define SWAP(a, b) \
{\
    int temp = a; \
    a = b; \
    b = temp; \
}

int main()
{
    int x = 5, y = 10;

    SWAP(x, y);
    printf("x = %d, y = %d\n", x, y);

    SWAP(x, y);
    printf("x = %d, y = %d\n", x, y);
    return 0;
}*/


/*#include <stdio.h>

//commented #define SWAP(a, b) a = a ^ b; b = a ^ b; a = a ^ b;

#define SWAP(a, b) \
do{\
    int temp = a; \
    a = b; \
    b = temp; \
}while(0)

int main()
{
    int x = 5, y = 10;

    SWAP(x, y);
    printf("x = %d, y = %d\n", x, y);

    SWAP(x, y);
    printf("x = %d, y = %d\n", x, y);
    return 0;
}*/


/*#include <stdio.h>

#define SWAP_NIBBLE(num) (((num >> 4) & 0x0F) \
       	| (num << 4) & 0xF0)

int main()
{
    signed char ch = 0xAB;

    ch = SWAP_NIBBLE(ch);

    printf("ch = %X\n", ch & 0xFF);

    return;
}*/


/* FILE: test1.c
 * Description: 
 *

#include <stdio.h>

#if X==0
#error "First"
#else
#error "Second"
#endif

int main()
{
    return 0;
}*/


/*#include "person.h"
void display(char *msg); // Unused Function*/


/*#include "person.h"
#include "display.h"


int main()
{
    struct Person p = {1, "Hello"};

    return 0;
}*/


/* use pragma once to instruct the compiler to include this header file only once 

#pragma once

struct Person
{
    int id;
    char name[30];
};*/


/*#ifndef DISPLAY_H
#define DISPLAY_H
#include "person.h"
void display(char *msg);

#endif*/


/*#include "person.h"
#include "display.h"

int main()
{
    struct Person p;

    return 0;
}*/


/*#ifndef PERSON_H
#define PERSON_H
struct Person
{
    int id;
    char name[30];
};
#endif*/


//The header files have to be protected with #ifdefs to prevent re-definition errors//


//#define MAX 100//


/*#include <stdio.h>
#define WARN_IF(EXP) \
do \
{ \
    x--; \
	if (EXP) \
	{ \
	    fprintf(stderr, "Warning: " #EXP "\n"); \
	} \
} while (x); 

int main()
{
    int x = 5;

    WARN_IF(x == 0);
    return 0;
}*/


/* FILE: stringize.c
 * Description: 
 *

#define TO_STRING(str) #str

#include <stdio.h>
int main()
{
    printf(TO_STRING(hello world\n));

    return 0;
}*/


/*#include "stdio.h"

int main()
{
    // Print message. This comment will be removed by pre-processor //

    printf("hello\n");

}*/


/*# 1 "test.c"
# 1 "<built-in>"
# 1 "<command-line>"
# 31 "<command-line>"
# 1 "/usr/include/stdc-predef.h" 1 3 4
# 32 "<command-line>" 2
# 1 "test.c"

# 1 "stdio.h" 1
# 3 "test.c" 2

int main()
{


    printf("hello\n");

}*/


/*	.file	"test.c"
	.section	.rodata
.LC0:
	.string	"hello"
	.text
	.globl	main
	.type	main, @function
main:
.LFB0:
	.cfi_startproc
	pushq	%rbp
	.cfi_def_cfa_offset 16
	.cfi_offset 6, -16
	movq	%rsp, %rbp
	.cfi_def_cfa_register 6
	leaq	.LC0(%rip), %rdi
	call	puts@PLT
	movl	$0, %eax
	popq	%rbp
	.cfi_def_cfa 7, 8
	ret
	.cfi_endproc
.LFE0:
	.size	main, .-main
	.ident	"GCC: (Ubuntu 6.3.0-12ubuntu2) 6.3.0 20170406"
	.section	.note.GNU-stack,"",@progbits*/


/*# 1 "test.c"
# 1 "<built-in>"
# 1 "<command-line>"
# 1 "test.c"
# 1 "/usr/include/stdio.h" 1 3 4
# 28 "/usr/include/stdio.h" 3 4
# 1 "/usr/include/features.h" 1 3 4
# 324 "/usr/include/features.h" 3 4
# 1 "/usr/include/i386-linux-gnu/bits/predefs.h" 1 3 4
# 325 "/usr/include/features.h" 2 3 4
# 357 "/usr/include/features.h" 3 4
# 1 "/usr/include/i386-linux-gnu/sys/cdefs.h" 1 3 4
# 378 "/usr/include/i386-linux-gnu/sys/cdefs.h" 3 4
# 1 "/usr/include/i386-linux-gnu/bits/wordsize.h" 1 3 4
# 379 "/usr/include/i386-linux-gnu/sys/cdefs.h" 2 3 4
# 358 "/usr/include/features.h" 2 3 4
# 389 "/usr/include/features.h" 3 4
# 1 "/usr/include/i386-linux-gnu/gnu/stubs.h" 1 3 4



# 1 "/usr/include/i386-linux-gnu/bits/wordsize.h" 1 3 4
# 5 "/usr/include/i386-linux-gnu/gnu/stubs.h" 2 3 4


# 1 "/usr/include/i386-linux-gnu/gnu/stubs-32.h" 1 3 4
# 8 "/usr/include/i386-linux-gnu/gnu/stubs.h" 2 3 4
# 390 "/usr/include/features.h" 2 3 4
# 29 "/usr/include/stdio.h" 2 3 4*/


/*#include <stdio.h>

// Example code to show #undef //
#define SIZE 100

int main()
{
    char buf[SIZE];

#undef SIZE

    printf("%d\n", SIZE);

    return 0;
}*/


/*#include <stdio.h>

// Example code to show how to re-define a #define constant //

#ifdef BUFSIZ
#undef BUFSIZ
#endif

#define BUFSIZ 1024

#ifdef TRUE
#undef TRUE
#endif

#define TRUE (!0)
#define FALSE (!1)


int main()
{
    char buf[BUFSIZ];
#define SIZE 100

    int i = SIZE;

    if (i == TRUE)
    {
    }

    return 0;
}

foo()
{
#undef SIZE
#define SIZE 500
    int i = SIZE;

}*/


/*#include <stdio.h>

// Example code to show how to re-define a #define constant //
#ifdef BUFSIZ
#undef BUFSIZ
#endif

#define BUFSIZ 1024

int main()
{

    char buf[BUFSIZ];

    return 0;
}*/


/* FILE: 1_basics.c
 * Description: 
 *

#include <stdio.h>
int main()
{
    char name[5];
    int size = 5, i;

    name[0] = 'h';
    name[1] = 'i';
    name[2] = '\0';
    name[3] = 'X';

    printf("Name = %s\n", name);

    for (i = 0; i < size; i++)
    {
	printf("(%c:%d)\n", name[i], name[i]);
    }

    printf("Done\n");

    return 0;
}*/


/* FILE: 2_basics2.c
 * Description: 
 *

#include <stdio.h>
#include <string.h>

int main()
{
    char name[5] = "hi";
    int len;

    printf("Name = %s\n", name);
    puts("hello");
    puts(name);

    len = strlen(name);
    printf("Length = %d\n", len);

    return 0;
}*/


/* FILE: 3_str_book_template.c
 * Description: 
 *

#include <stdio.h>
#include <string.h>

int main()
{
    char name[10] = "emertxe";
    char a[5] = "hello", b[] = "hi", c[5] = "hi";
    char str1[] = "hi", str2[] = {'h', 'i'};

    printf("a = %s\n", a);
//    printf("strlen a = %u\n", strlen(a));
    //printf("b = %s\n", b);
    //printf("str2 = %s\n", str2);

#if 0
    //printf("a = %s\n", a);
    printf("b = %s\n", b);
    printf("c = %s\n", c);

    printf("sizeof a = %u, b = %u, c = %u\n", sizeof(a), sizeof(b),
	    sizeof(c));

    printf("strlen a = %u, b = %u, c = %u\n", strlen(a), strlen(b),
	    strlen(c));

    printf("strlen str = %u\n", strlen(str));
#endif

    return 0;
}*/


/* FILE: 4_string_using_pointer.c
 * Description: 
 *

#include <stdio.h>
int main()
{
    char str[10] = "hello";
    char *ptr, *ptr2;
    int i = 0;

    ptr = str; // Store base address of str in ptr
    while (*ptr != '\0') //Check for null character (End of string)
    {
	putchar(*ptr);
	ptr++; //Increment ptr to point to next character
    }

    putchar('\n');

    // Second Method to access strings using pointer //
    ptr2 = str;
    while (ptr2[i] != '\0') //Check for null character (End of string)
    {
	putchar(ptr2[i]);
	i++;
    }

    putchar('\n');

    printf("str = %p\nptr = %p\nptr2 = %p\n",
	    str, ptr, ptr2);

    return 0;
}*/


/* FILE: select_menu.c 
 * Description: 
 *

#include <stdio.h>

void print_menu(char **menu)
{
    int choice = -1, i;
    
    //Print the menu
    for (i = 0; i < 5; i++)
    {
	printf("%d: %s\n", i + 1, menu[i]);
    }

    //Read the choice
    printf("Enter your choice: ");
    scanf("%d", &choice);

    if (choice < 1 || choice > 5)
    {
	puts("Please enter a valid choice");
	return;
    }

    //Print the selected choice
    printf("You selected %s Menu\n", menu[choice - 1]);

}

int main()
{
    char *file_menu[5] = {"File", "Edit", "View", "Insert", "Help"};

    print_menu(file_menu);

    return 0;
}*/


/* FILE: select_menu_2d.c
 * Description: 
 *

#include <stdio.h>

void print_menu(int max_rows, int max_cols, char menu[max_rows][max_cols])
{
    int choice = -1, i;
    
    //Print the menu
    for (i = 0; i < max_rows; i++)
    {
	printf("%d: %s\n", i + 1, menu[i]);
    }

    //Read the choice
    printf("Enter your choice: ");
    scanf("%d", &choice);

    if (choice < 1 || choice > 5)
    {
	puts("Please enter a valid choice");
	return;
    }

    //Print the selected choice
    printf("You selected %s Menu\n", menu[choice - 1]);

}

int main()
{
    char file_menu[5][10] = {"File", "Edit", "View", "Insert", "Help"};

    print_menu(5, 10, file_menu);

    return 0;
}*/


/* FILE: array_vs_ptr1.c
 * Description: 
 *

#include <stdio.h>
int main()
{
    char *str1 = "hello";
    char str2[] = "hello";

    printf("sizeof(str1) = %u\n", sizeof(str1));

    printf("sizeof(str2) = %u\n", sizeof(str2));


    printf("what is this = %p\n", "hello"); 
    printf("str1 = %p\n", str1); 
    printf("str2 = %p\n", str2); 

    printf("*str1 = %c\n", *str1); 
    printf("*str2 = %c\n", *str2); 

    return 0;
}*/


/* FILE: 1_scanf_char_ptr.c
 * Description: 
 *

#include <stdio.h>
int main()
{
    char str[10];

    printf("Enter a string: ");
    scanf("%s", str);

    printf("You entered %s\n", str);

    return 0;
}*/


/* FILE: 1_scanf_char_ptr.c
 * Description: 
 *

#include <stdio.h>
#include <ctype.h>

void get_string(char *str, int size)
{
    int i;
    for (i = 0; i < (size - 1); i++)
    {
	scanf("%c", &str[i]);
	//str[i] = getchar();

	if (isspace(str[i]))
	    break;

    }
    str[i] = '\0'; // Terminate the string
}

int main()
{
    char str[10];

    printf("Enter a string: ");
     // Scanf does not detect the size of the array.
     // Hence buffer overflow can happen, if user enters
     // more than array size characters. Same applies for
     // gets() function. Hence you get a message gets() is dangerous.
     // scanf("%s", str); 
    get_string(str, sizeof(str)); 

    printf("You entered %s\n", str);

    return 0;
}*/


/* FILE: 3_fgets_usage.c
 * Description: 
 *

#include <stdio.h>
#include <string.h>
int main()
{
    char str[10];

    printf("Enter a string: ");
    fgets(str, sizeof(str), stdin);

    if (str[strlen(str) - 1] == '\n')
    {
	str[strlen(str) - 1] = '\0';
    }

    printf("You entered %s\n", str);

    return 0;
}*/


/* FILE: 4_fets_implementation.c
 * Description: 
 *

#include <stdio.h>

void get_string(char *str, int size)
{
    int i;
    for (i = 0; i < (size - 1); i++)
    {
	scanf("%c", &str[i]);

	if (str[i] == '\n')
	{
	    i++;
	    break;
	}

    }
    printf("i = %d\n", i);
    str[i] = '\0'; // Terminate the string
}

int main()
{
    char str[10] = "ZZZZZZZZZZ";

    printf("Enter a string: ");
    // Scanf does not detect the size of the array.
    // Hence buffer overflow can happen, if user enters
    // more than array size characters. Same applies for
    // gets() function. Hence you get a message gets() is dangerous.
    // scanf("%s", str); 
    get_string(str, sizeof(str)); 

    printf("You entered %s\n", str);

    return 0;
}*/


/*	.file	"4_fets_implementation.c"
	.section	.rodata
.LC0:
	.string	"%c"
.LC1:
	.string	"i = %d\n"
	.text
	.globl	get_string
	.type	get_string, @function
get_string:
.LFB0:
	.cfi_startproc
	pushl	%ebp
	.cfi_def_cfa_offset 8
	.cfi_offset 5, -8
	movl	%esp, %ebp
	.cfi_def_cfa_register 5
	subl	$40, %esp
	movl	$0, -12(%ebp)
	jmp	.L2
.L5:
	movl	-12(%ebp), %eax
	movl	%eax, %edx
	addl	8(%ebp), %edx
	movl	$.LC0, %eax
	movl	%edx, 4(%esp)
	movl	%eax, (%esp)
	call	__isoc99_scanf
	movl	-12(%ebp), %eax
	addl	8(%ebp), %eax
	movzbl	(%eax), %eax
	cmpb	$10, %al
	jne	.L3
	addl	$1, -12(%ebp)
	jmp	.L4
.L3:
	addl	$1, -12(%ebp)
.L2:
	movl	12(%ebp), %eax
	subl	$1, %eax
	cmpl	-12(%ebp), %eax
	jg	.L5
.L4:
	movl	$.LC1, %eax
	movl	-12(%ebp), %edx
	movl	%edx, 4(%esp)
	movl	%eax, (%esp)
	call	printf
	movl	-12(%ebp), %eax
	addl	8(%ebp), %eax
	movb	$0, (%eax)
	leave
	.cfi_restore 5
	.cfi_def_cfa 4, 4
	ret
	.cfi_endproc
.LFE0:
	.size	get_string, .-get_string
	.section	.rodata
.LC2:
	.string	"Enter a string: "
.LC3:
	.string	"You entered %s\n"
	.text
	.globl	main
	.type	main, @function
main:
.LFB1:
	.cfi_startproc
	pushl	%ebp
	.cfi_def_cfa_offset 8
	.cfi_offset 5, -8
	movl	%esp, %ebp
	.cfi_def_cfa_register 5
	andl	$-16, %esp
	subl	$32, %esp
	movl	%gs:20, %eax
	movl	%eax, 28(%esp)
	xorl	%eax, %eax
	movl	$1515870810, 18(%esp)
	movl	$1515870810, 22(%esp)
	movw	$23130, 26(%esp)
	movl	$.LC2, %eax
	movl	%eax, (%esp)
	call	printf
	movl	$10, 4(%esp)
	leal	18(%esp), %eax
	movl	%eax, (%esp)
	call	get_string
	movl	$.LC3, %eax
	leal	18(%esp), %edx
	movl	%edx, 4(%esp)
	movl	%eax, (%esp)
	call	printf
	movl	$0, %eax
	movl	28(%esp), %edx
	xorl	%gs:20, %edx
	je	.L7
	call	__stack_chk_fail
.L7:
	leave
	.cfi_restore 5
	.cfi_def_cfa 4, 4
	ret
	.cfi_endproc
.LFE1:
	.size	main, .-main
	.ident	"GCC: (Ubuntu/Linaro 4.6.3-1ubuntu5) 4.6.3"
	.section	.note.GNU-stack,"",@progbits*/


/* FILE: 5_scanf_ptr.c
 * Description: 
 *

#include <stdio.h>
int main()
{
    char *str; //Un-initialized pointer

    printf("Enter a string: ");
    scanf("%s", str);
    printf("string is %s\n", str);


    return 0;
}*/


/* FILE: 5_scanf_ptr.c
 * Description: 
 *

#include <stdio.h>
int main()
{
    char arr[10];
    char *str;

    str = arr;

    printf("Enter a string: ");
    scanf("%s", str);
    printf("string is %s\n", arr);

#if 0
    char arr[10];

    printf("Enter a string: ");
    scanf("%s", arr);
    printf("string is %s\n", arr);
#endif

#if 0
    char *str = 5555;

    printf("Enter a string: ");
    scanf("%s", str);
    printf("string is %s\n", str);
#endif


    return 0;
}*/


/*#include <stdio.h>
#include <string.h>

int main()
{
    char str1[100] = "hello";
    char str2[100];
    char str3[100] = "world";

    //Copy string
    strcpy(str2, str1);
    printf("str2 = %s\n", str2);

    // Concatenate str1 and str3 //
    strcat(str1, str3);
    printf("str1 = %s\n", str1);

    return 0;
}*/


/*#include <stdio.h>
#include <string.h>

int main()
{
    char str1[6] = "hello";
    char str2[6] = "world";

    strcat(str1, str2);
    printf("str2 = %s\n", str1);

    return 0;
}*/


/*#include <stdio.h>

void my_strcpy(char *dest, char *src);
void my_strcat(char *dest, char *src);

void my_strcpy(char *dest, char *src)
{

}
void my_strcat(char *dest, char *src)
{

}

int main()
{

    char str1[100] = "hello";
    char str2[100];

    char str3[100] = "world";

    //Copy string
    my_strcpy(str2, str1);
    printf("str2 = %s\n", str2);

    // Concatenate str1 and str3 //
    my_strcat(str1, str3);
    printf("str1 = %s\n", str1);

    return 0;
}*/


/*#include <stdio.h>
#include <string.h>

void my_strcpy(char *dest, const char *src)
{
    while(*src != '\0')
    {
    	//Copy each element
    	*dest = *src;
    	
    	//Increment address
    	dest++, src++;
    }

    *dest = '\0'; // Terminate the string

}

void my_strcat(char *dest, const char *src)
{
    int i, len, j = 0;;

    //Get last index of dest
    i = strlen(dest);

    //Copy src to end of dest
    while(src[j] != '\0')
    {
    	dest[i] = src[j];
    	i++, j++;
    }

    dest[i] = '\0'; // Terminate the string

}

int main()
{

    char str1[100] = "hello";
    char str2[100];

    char str3[100] = "world";

    my_strcpy(str2, str1);

    printf("str2 = %s\n", str2);

    // Concatenate str1 and str3 //
    my_strcat(str1, str3);

    printf("str1 = %s\n", str1);

    return 0;
}*/


/* FILE: strlen_builtin.c 
 * Description: 
 *

#include <stdio.h>
#include <string.h>

int main()
{
    char name[20];
    int len;

    printf("Enter your name: ");
    //gets(name);
    fgets(name, 20, stdin);

    //get length of string name
    len = strlen(name);

    printf("Your name length is %d \n", len);

    return 0;
}*/


/*#include <stdio.h>
#include <string.h>

int main()
{
    char str[10];

    printf("Enter a string: ");
    fgets(str, sizeof(str), stdin);

    // Check if last char is \n
    if (str[strlen(str) - 1] == '\n')
    {
	// Replace \n with \0
	str[strlen(str) - 1] = '\0';

    }
    printf("%s\n", str);

    return 0;
}*/


/*#include <stdio.h>

void my_puts2(char *str)
{
    while (*str != '\0')
    {
	putchar(*str);
	str++;
    }
    putchar('\n');

}

void my_puts(char *str)
{
    int i = 0;
    while (str[i] != '\0')
    {
	putchar(str[i]);
	i++;
    }
    putchar('\n');
}

int main() {
    char name[] = "hi";
    my_puts("Hello");   // Prints Hello and \n
    my_puts("A");         // Prints A and \n
    my_puts("");           // Prints \n
    my_puts(name);

    return 0;
}*/


/*#include <stdio.h>

int my_strcmp(const char *str1, const char *str2);
int my_strcasecmp(const char *str1, const char *str2);

int my_strcmp(const char *str1, const char *str2)
{
    return 0;
}

int main()
{
    my_strcmp("hello", "hello") ? printf("Not Equal\n") : printf("Equal\n");
    my_strcmp("hello", "Tello") ? printf("Not Equal\n") : printf("Equal\n");
    my_strcmp("abc", "xyz") ? printf("Not Equal\n") : printf("Equal\n");
    my_strcmp("hello", "helli") ? printf("Not Equal\n") : printf("Equal\n");
    my_strcmp("hell", "hello") ? printf("Not Equal\n") : printf("Equal\n");
    my_strcmp("hello", "hell") ? printf("Not Equal\n") : printf("Equal\n");
    my_strcmp("", "") ? printf("Not Equal\n") : printf("Equal\n");
    my_strcmp("Hello", "HELLO") ? printf("Not Equal\n") : printf("Equal\n");

    return 0;
}*/


/*#include <stdio.h>

int my_strcmp(const char *str1, const char *str2);

int my_strcmp(const char *str1, const char *str2)
{
    while(*str1 != '\0' && *str2 != '\0' && *str1 == *str2)
    {
	str1++, str2++;
    }

    if (*str1 == '\0' || *str2 == '\0')
	return 0;
    else
	return 1;
}

int main()
{
    my_strcmp("hello", "hello")   ? printf("Not Equal\n") : printf("Equal\n");
    my_strcmp("abc", "xyz")       ? printf("Not Equal\n") : printf("Equal\n");
    my_strcmp("hello", "helli")   ? printf("Not Equal\n") : printf("Equal\n");
    my_strcmp("hell", "hello")    ? printf("Not Equal\n") : printf("Equal\n");
    my_strcmp("hello", "hell")    ? printf("Not Equal\n") : printf("Equal\n");
    my_strcmp("", "")             ? printf("Not Equal\n") : printf("Equal\n");
    my_strcmp("Hello", "HELLO")   ? printf("Not Equal\n") : printf("Equal\n");

    return 0;
}




























#if 0
int my_strcasecmp(const char *str1, const char *str2)
{
    while((*str1 && *str2) && (toupper(*str1) == toupper(*str2)))
    {
	str1++;
	str2++;
    }

    if(*str1 == *str2)
    {
	return 0;
    }
    else
    {
	return 1;
    }

}

//while((*s1 != '\0') && (*s1 == *s2))
int my_strcmp(const char *str1, const char *str2)
{

    //while((*str1 != '\0') && (*str1 == *str2))
    while((*str1 && *str2) && (*str1 == *str2))
    {
	str1++;
	str2++;
    }

    if(*str1 == *str2)
    {
	return 0;
    }
    else
    {
	return 1;
    }

}
#endif*/


/*#include <stdio.h>

int my_strcmp(const char *str1, const char *str2);

int my_strcmp(const char *str1, const char *str2)
{
    while(*str1 != '\0' && *str2 != '\0' && *str1 == *str2)
    {
	str1++, str2++;
    }

    if (*str1 == '\0' || *str2 == '\0')
	return 0;
    else
	return 1;
}

int main()
{
    my_strcmp("hello", "hello")   ? printf("Not Equal\n") : printf("Equal\n");
    my_strcmp("abc", "xyz")       ? printf("Not Equal\n") : printf("Equal\n");
    my_strcmp("hello", "helli")   ? printf("Not Equal\n") : printf("Equal\n");
    my_strcmp("hell", "hello")    ? printf("Not Equal\n") : printf("Equal\n");
    my_strcmp("hello", "hell")    ? printf("Not Equal\n") : printf("Equal\n");
    my_strcmp("", "")             ? printf("Not Equal\n") : printf("Equal\n");
    my_strcmp("Hello", "HELLO")   ? printf("Not Equal\n") : printf("Equal\n");

    return 0;
}




























#if 0
int my_strcasecmp(const char *str1, const char *str2)
{
    while((*str1 && *str2) && (toupper(*str1) == toupper(*str2)))
    {
	str1++;
	str2++;
    }

    if(*str1 == *str2)
    {
	return 0;
    }
    else
    {
	return 1;
    }

}

//while((*s1 != '\0') && (*s1 == *s2))
int my_strcmp(const char *str1, const char *str2)
{

    //while((*str1 != '\0') && (*str1 == *str2))
    while((*str1 && *str2) && (*str1 == *str2))
    {
	str1++;
	str2++;
    }

    if(*str1 == *str2)
    {
	return 0;
    }
    else
    {
	return 1;
    }

}
#endif*/


/*#include <stdio.h>

int my_strlen(char *str)
{
    char *temp = str;

    while(*str) //While *str is not '\0'
    {
    	str++;
    }

    return str - temp;
}

int my_strlen(char *str)
{
    char *temp = str;

    while(*str++)
    	;

    return str - temp - 1;
}

int my_strlen(char *str)
{
    int i = 0;

    while(str[i] != '\0')
    {
	i++;
    }

    return i;
}

int my_strlen(char *str)
{
    int count = 0;

    while(*str != '\0')
    {
	count++;
	str++;
    }

    return count;
}

int main()
{
    char msg[] = "Hi";
    int len;

    len = my_strlen("");
    printf("len of msg = %d\n", len);

    len = my_strlen("A");
    printf("len of msg = %d\n", len);

    len = my_strlen("Hello");
    printf("len of Hello = %d\n", len);

    len = my_strlen(msg);
    printf("len of msg = %d\n", len);

    return 0;
}*/


/* FILE: strlen_builtin.c 
 * Description: 
 *

#include <stdio.h>

int my_strlen2(const char *str)
{
    int len = 0;

    while (*str != '\0')
    {
	len++;
	str++;
    }

    return len;
}

int my_strlen(const char *str)
{
    int i = 0;

    while (str[i] != '\0')
    {
	i++;
    }

    return i;
}

int main()
{
    char name[20];
    int len;

    printf("Enter your name: ");
    //gets(name);
    fgets(name, 20, stdin);

    //get length of string name
    len = my_strlen(name);

    printf("Your name length is %d \n", len);

    return 0;
}*/


/*#include <stdio.h>

void print_string(char *str)
{
    while (*str != '\0')
    {
	printf("%c", *str);
	str++;
    }
}

void alternate_print_string(char *str)
{
    int i = 0;
    while (str[i] != '\0')
    {
	printf("%c", str[i]);
	i++;
    }
}

int main()
{
    char msg[] = "Hello";
    char arr[] = "Hello World";

    print_string(msg);
    print_string(arr);
    print_string("\n");
    alternate_print_string("Hello\n");

    return 0;
}*/


/*#include <stdio.h>

void print_string(char *str)
{
    while (*str != '\0')
    {
	printf("%c", *str);
	str++;
    }
}

void alternate_print_string(char *str)
{
    int i = 0;
    while (str[i] != '\0')
    {
	printf("%c", str[i]);
	i++;
    }
}

int main()
{
    char str[] = "Hello World";

    int i = 0;
    while (str[i] != '\0')
    {
	printf("%c", str[i]);
	i++;
    }
    printf("\n");

    return 0;
}*/


/* FILE: inner_scope.c
 * Description: 
 *

#include <stdio.h>

int x = 100;

int main()
{
    int x;

    printf("x = %d\n", x);

    return 0;
}*/


/* FILE: segments_nm.c
 * Description: 
 *

#include <stdio.h>

int init_global_x = 10; //Data seg
int un_global_y; //BSS
static int init_static_global_a = 20; //Data seg
static int un_static_global_b; //BSS

int main()
{
    int local_count = 1; //Stack (At runtime)
    static int init_static_local_count = 1; //Data seg

    return 0;
}*/


/* FILE: average.c
 * Description: 
 *

#include <stdio.h>

static int max = 100;

double average(int num1, int num2)
{
    max = max + 50;

    return (num1 + num2) / 2.0;
}*/


/* FILE: average.c
 * Description: 
 *

#include <stdio.h>

int max = 100;

double average(int num1, int num2)
{
    max = max + 50;

    return (num1 + num2) / 2.0;
}*/


/* FILE: main.c
 * Description: 
 *

#include <stdio.h>

extern double average(int num1, int num2); //Indicates average() func is in another file
// Inform the compiler max exists in some other file.
//   This is a variable declaration, not a definition. Memory for max is not 
//   allocated here. 
extern int max;

int main()
{
    double avg = average(10, 15);
    printf("average = %f\n", avg);

    printf("max = %d\n", max);

    return 0;
}*/


/* FILE: average.c
 * Description: 
 *

#include <stdio.h>

static int max = 100;

double average(int num1, int num2)
{
    max = max + 50;

    return (num1 + num2) / 2.0;
}*/


/* FILE: foo.c
 * Description: 
 *
extern int max;
void foo()
{
    max = 5000;
}*/


/* FILE: main.c
 * Description: 
 *

#include <stdio.h>

int max = 250;
extern double average(int num1, int num2);
extern void foo(); //foo() is in foo.c

int main()
{

    foo();
    printf("max = %d\n", max);

    return 0;
}*/


/* FILE: average.c
 * Description: 
 *

#include <stdio.h>

int max = 100;

double average(int num1, int num2)
{
    max = max + 50;

    return (num1 + num2) / 2.0;
}*/


/* FILE: main.c
 * Description: 
 *

#include <stdio.h>

extern double average(int num1, int num2); //Indicates average() func is in another file
// Inform the compiler max exists in some other file.
//   This is a variable declaration, not a definition. Memory for max is not 
//   allocated here. 

int main()
{
    extern int max;

    double avg = average(10, 15);
    printf("average = %f\n", avg);

    printf("max = %d\n", max);

    return 0;
}

int max = 100;

double average(int num1, int num2)
{
    max = max + 50;

    return (num1 + num2) / 2.0;
}*/


/* FILE: main.c
 * Description: 
 *

#include <stdio.h>

int max = 250;
extern double average(int num1, int num2); //Indicates average() func is in another file

int main()
{
    double avg = average(10, 15);
    printf("average = %f\n", avg);

    printf("max = %d\n", max);

    return 0;
}*/


/*	Variable Type	Scope	Lifetime	Segment	Default value	
Temp	Block	Inside the block	Created – Enters the block	Stack	Junk	
			Destroyed – Leaves the block			
						
Temp	Local	Inside the function	Created – Function is invoked	Stack	Junk	
			Destroyed – Returns from function			
						
Persistent	Static Local	Inside the function	Created – Run the program	Data/BSS	0	
			Destroyed – Program terminates			
						
						
Persistent	Global	Entire Program	Created – Run the program	Data/BSS	0	
		(All .c files)	Destroyed – Program terminates			
						
						
Persistent	Static Global	"Only inside the file
It is defined"	Created – Run the program	Data/BSS	0	
			Destroyed – Program terminates			
						
Dynamic	Heap	User defined	User defined	Heap	Junk	
			Created – On malloc/calloc			
			Destroyed – On free()			
						
	constant global			Code/Text		Read Only*/


/* FILE: simple_str.c
 * Description: 
 *

#include <stdio.h>
#include <string.h>

int main()
{
    char str[10] = "hello";

    printf("size = %u, len = %u\n", sizeof(str), strlen(str));

    return 0;
}*/


/*#include <stdio.h>

void display(char *str)
{
    printf("%p\n", str);
    printf("%s", str);
}

int main()
{
    char *msg = "hello\n";

    display("hello\n");
    display(msg);

    return 0;
}*/


/*#include <stdio.h>

int main()
{
    int i;
    const char *menu[4] = {"File", "Edit", "Help", "Exit"};
    char menu2[4][8] = {"File", "Edit", "Help", "Exit"};

    puts("Menu 1");
    for(i = 0; i < 4; i++)
    {
    	puts(menu[i]);
    }

    puts("Menu 2");
    for(i = 0; i < 4; i++)
    {
    	puts(menu2[i]);
    }

    // Accessing individual chars //
    puts("Output of char access ");
    putchar(menu[0][2]);
    putchar(menu2[3][2]);
    printf("%c", menu[0][0]);
    putchar(menu2[1][0]);

    putchar('\n');
    return 0;
}*/


/*#include <stdio.h>

int main()
{
    //char *str = "Hello World";
    char str[] = "Hello World";

    printf("%s\n", str);
    str[1] = 'i';
    printf("%s\n", str);

    return 0;
}*/


/*#include <stdio.h>
#include <string.h>

int main()
{
    char *msg = "hello";
    char str[6] = "hello";

    printf("msg = %s\n", msg);
    printf("str = %s\n", str);

    printf("sizeof(msg) = %u\n", sizeof(msg));
    printf("sizeof(str) = %u\n", sizeof(str));

    printf("strlen(msg) = %u\n", strlen(msg));
    printf("strlen(str) = %u\n", strlen(str));

    return 0;
}*/


/*#include <stdio.h>

int my_strlen2(const char *str)
{
    int i = 0;

    while(str[i] != '\0')
    {
    	i++;
    }
    return i;
}

int my_strlen3(const char *str)
{
    int i = 0;

    while(str[i++])
	;

    return i - 1;
}

int my_strlen(const char *str)
{
    char *temp = str;

    //while(*temp != '\0')
    while(*temp)
    {
	temp++;
    }

    return temp - str;
}
int my_strlen5(char *str)
{
    char *temp = str;

    while(*temp++)
	;

    return temp - str - 1;
}
int main()
{   
    char msg[] = "Hi";
    int len;

    len = my_strlen("Hello");
    printf("len of Hello = %d\n", len);

    len = my_strlen(msg);
    printf("len of msg = %d\n", len);

    return 0;
}*/


/*#include <stdio.h>

int main()
{
    char str[10];

    printf("Enter a string: ");
    //scanf("%s", str);
    gets(str);
    printf("%s\n", str);

    return 0;
}*/


/*#include <stdio.h>

int my_strlen(char *str);

int my_strlen(char *str)
{

}


int main()
{
    char str1[] = "Hello World";
    char str2[] = "";
    int len;

    len = my_strlen(str1);
    printf("len = %d\n", len);

    len = my_strlen(str2);
    printf("len = %d\n", len);

    len = my_strlen("Hello");
    printf("len = %d\n", len);
}*/


/*#include <stdio.h>

//Create a bitfield structure
struct control
{
    unsigned code:15; //Specify size in bits after :
    unsigned reset:3; //Range is -4 to +3 (3 bit signed number)
    unsigned enable:1;
    unsigned flags:12;
    unsigned priority:1;
};

int main()
{
    struct control ctrl;

    printf("sizeof ctrl = %lu\n", sizeof(ctrl));
    
    ctrl.enable = 1;
    ctrl.reset = 2;

    printf("Enable = %d, Reset = %d\n", ctrl.enable, ctrl.reset);

    return 0;
}*/


/*#include <stdio.h>

struct control
{
    unsigned code:15;
    signed reset:3;
    signed enable:1;
    unsigned flags:12;
    unsigned priority:2;
};

struct encode
{
    long long z: 4;
    char x: 2;
    int y: 3;
};

int main()
{
    struct control ctrl;

    printf("sizeof ctrl = %u\n", sizeof(ctrl));
    printf("sizeof encode = %u\n", sizeof(struct encode));
    
    ctrl.enable = 1;
    ctrl.reset = 4;

    printf("Enable = %d, Reset = %d\n", ctrl.enable, ctrl.reset);

    return 0;
}*/


/*	.file	"bit_fields.c"
	.section	.rodata
.LC0:
	.string	"sizeof ctrl = %u\n"
.LC1:
	.string	"Enable = %d, Reset = %d\n"
	.text
	.globl	main
	.type	main, @function
main:
.LFB0:
	.cfi_startproc
	pushl	%ebp
	.cfi_def_cfa_offset 8
	.cfi_offset 5, -8
	movl	%esp, %ebp
	.cfi_def_cfa_register 5
	andl	$-16, %esp
	subl	$32, %esp
	movl	$.LC0, %eax
	movl	$8, 4(%esp)
	movl	%eax, (%esp)
	call	printf
	movzbl	26(%esp), %eax
	orl	$4, %eax
	movb	%al, 26(%esp)
	movl	24(%esp), %eax
	andl	$-229377, %eax
	orl	$131072, %eax
	movl	%eax, 24(%esp)
	movl	24(%esp), %eax
	sall	$14, %eax
	sarl	$29, %eax
	movsbl	%al, %ecx
	movzbl	26(%esp), %eax
	sall	$5, %eax
	sarb	$7, %al
	movsbl	%al, %edx
	movl	$.LC1, %eax
	movl	%ecx, 8(%esp)
	movl	%edx, 4(%esp)
	movl	%eax, (%esp)
	call	printf
	movl	$0, %eax
	leave
	.cfi_restore 5
	.cfi_def_cfa 4, 4
	ret
	.cfi_endproc
.LFE0:
	.size	main, .-main
	.ident	"GCC: (Ubuntu/Linaro 4.6.3-1ubuntu5) 4.6.3"
	.section	.note.GNU-stack,"",@progbits*/


/*#include <stdio.h>

enum {black, white, red, blue }; //Anonymous enum

//Enums can be used like a constant integer
//Enums are used to make the program more readable

int main()
{
    int col = white;

    printf("col = %d\n", col);

    switch(col)
    {
	case black:
	    //Do something
	    break;
	case white:
	    //Do something
	    break;
	case red:
	    //Do something
	    break;
	case blue:
	    //Do something
	    break;
	default:

	    break;

    }

    return 0;
}*/


/*//TO DO: Anonymous enums
#include <stdio.h>

enum color {black, white = 2, orange, red = 3, blue};
//enum color {black, white, orange, red, blue};
enum status {st_ok, st_cancel, st_retry};

//int black = 50;

int main()
{
    enum color c, d;
    //int black = 50;

    c = black;
    printf("c = %d\n", c);

    printf("black = %d, white = %d, orange = %d, red = %d, blue = %d\n",
	    black, white, orange, red, blue);


    //black = 10;
    if (c == white)
    {
	printf("Color is white\n");
    }


#if 0
    enum status click_status;
   // Get click status of button
   click_status = get_button_status();

   if (click_status == st_ok) // Clicked OK
   {
       // Start processing
   }
   else if (click_status == st_cancel) // Clicked CANCEL
   {
   }

#endif

}*/


/*#include <stdio.h>
#include <string.h>

// Create a structure type
// Name of the type is struct student (Not simply student)
struct student
{
    int id;
    char name[30];
    char addr[150];
};

void print_stud_info1(struct student stud);
void print_stud_info2(const struct student *stud_ptr);

void print_stud_info1(struct student stud)
{
    puts("******** Student Info ********");
    printf("id = %d\n", stud.id);
    printf("Name = %s\n", stud.name);
    printf("Address = %s\n", stud.addr);
}

void print_stud_info2(const struct student *stud_ptr)
{
    puts("******** Student Info ********");
    printf("id = %d\n", stud_ptr->id);
    printf("Name = %s\n", stud_ptr->name);
    printf("Address = %s\n", stud_ptr->addr);

}

int main()
{
    struct student s1; // s1 is a variable of type struct student
    struct student s2 = {20, "Shankar", "MG Road"}; //Initialize the fields

    s1.id = 10;
    strcpy(s1.name, "Mubeen");
    strcpy(s1.addr, "MG Road");

    // Print by invoking functions //
    print_stud_info1(s1);
    print_stud_info2(&s2);

    return 0;
}*/


/*#include <stdio.h>
#include <string.h>

// Create a structure type
// Name of the type is struct student (Not simply student)
struct student
{
    int id;
    char name[30];
    char addr[150];
};

typedef struct student StudentInfo;

static void print_stud_info1(struct student stud);
static void print_stud_info2(const struct student *sptr);

static void print_stud_info1(struct student stud)
{
    printf("id = %d\n", stud.id);
    printf("name = %s\n", stud.name);
    printf("addr = %s\n", stud.addr);
}

static void print_stud_info2(const struct student *sptr)
{
    printf("id = %d\n", sptr->id);
    printf("name = %s\n", sptr->name);
    printf("addr = %s\n", sptr->addr);
}

int main()
{
    struct student s1; // s1 is a variable of type struct student
    struct student s2 = {20, "Shankar", "MG Road"};
    struct student *sptr;

    sptr = &s1;

    s1.id = 10;
    strcpy(s1.name, "Mubeen");
    strcpy(s1.addr, "MG Road");

    print_stud_info1(s1);
    print_stud_info2(&s2);

#if 0
    printf("id = %d\n", s1.id);
    printf("name = %s\n", s1.name);
    printf("addr = %s\n", s1.addr);


    printf("id = %d\n", (*sptr).id);
    printf("name = %s\n", (*sptr).name);
    printf("addr = %s\n", (*sptr).addr);

    printf("id = %d\n", s2.id);
    printf("name = %s\n", s2.name);
    printf("addr = %s\n", s2.addr);
#endif
    return 0;
}*/


/*#include <stdio.h>
#include <string.h>

// Example of struct datatype without a name
// This is generally used if you are creating
// only one instance of the struct. i.e, Only
// one variable 
struct
{
    int id;
    char name[30];
    char addr[150];
} stud, another_stud; // stud, another_stud are variables, of the unnamed struct

int main()
{
    stud.id = 1;
    strcpy(stud.name, "Mubeen");

    printf("id = %d\n", stud.id);

    return 0;
}*/


/*#include <stdio.h>

int main()
{
    int num1;
    char ch1;
    int num2;
    char ch2;

    printf("&num1 = %lu\n", &num1);
    printf("&ch1  = %lu\n", &ch1);
    printf("&num2 = %lu\n", &num2);

    return 0;
}*/


/*#include <stdio.h>
#include <stdlib.h>
#include <string.h>

// Create a structure type
// Name of the type is struct student (Not simply student)
struct student
{
    int id;
    char name[30];
    char addr[150];
};

void print_stud_info1(struct student stud)
{
    puts("******** Student Info ********");
    printf("id = %d\n", stud.id);
    printf("Name = %s\n", stud.name);
    printf("Address = %s\n", stud.addr);
}

void print_stud_info2(const struct student *stud_ptr)
{
    puts("******** Student Info ********");
    printf("id = %d\n", stud_ptr->id);
    printf("Name = %s\n", stud_ptr->name);
    printf("Address = %s\n", stud_ptr->addr);

}

int main()
{
    struct student s1 = {20, "Shankar", "MG Road"}; //Initialize the fields
    struct student *sptr;
    struct student stud_array[5] = {
       			             {1, "ABC", "ABC address"},
				     {2, "DEF", "DEF address"}
    				   };


    stud_array[0].id = 10;
    printf("id1 = %d\n", stud_array[0].id);
    printf("id2 = %d\n", stud_array[1].id);

    sptr = malloc(sizeof(struct student));
    //sptr = malloc(sizeof(*sptr));
    //Store values
    sptr->id = 5;
    strcpy(sptr->name, "Mubeen");
    strcpy(sptr->addr, "MG Road");

    printf("sptr->id = %d\n", sptr->id);

    print_stud_info2(sptr); //By reference

    exit(0);
    // Print by invoking functions //
    print_stud_info1(s1);  //By value
    print_stud_info2(&s1); //By reference

    print_stud_info2(sptr); //By reference

    return 0;
}*/


/*#include <stdio.h>
#include <string.h>

// Defintion of struct student
// Note: struct student is a datatype, not a variable //
struct student
{
    int id;
    char name[30];
    char addr[150];
};

int main()
{
    struct student stud; // stud is a variable of type struct student

    stud.id = 10; //Access field "id" using dot (.) operator
    strcpy(stud.name, "Emertxe");

    printf("student: id = %d, name = %s\n", stud.id, stud.name);

    return 0;
}*/


/*#ifndef STUDENT_H
#define STUDENT_H

#define MAX_LEN 30

// Defintion of struct student
// Note: struct student is a datatype, not a variable //
struct student
{
    int id;
    char name[MAX_LEN];
};

#endif*/


/*#include <stdio.h>
#include <string.h>

// Defintion of struct student
// Note: struct student is a datatype, not a variable 
struct student
{
    int id;
    char name[30];
    char addr[150];
};

int main()
{
    //Initialize the structure
    struct student stud = {10, "Emertxe", "MG Road, Bangalore"}; 

    printf("student: id = %d, name = %s\n", stud.id, stud.name);
    printf("student: address = %s\n", stud.addr);

    return 0;
}*/


/*#include <stdio.h>
#include <string.h>

#include "student.h" //Contains struct student definition
int main()
{
    struct student p, q; // p and q are variable of type struct student
    struct student *ptr;

    p.id = 10; //Access field "id" using dot (.) operator
    strcpy(p.name, "Emertxe");

    printf("For p: id = %d, name = %s\n", p.id, p.name);

    //Assign p to q. Struct assignment is allowed in C.
    q = p;

    printf("For q: id = %d, name = %s\n", q.id, q.name);

    // Using pointer to struct //
    ptr = &p;
    (*ptr).id = 500; // Same as p.id

    printf("id = %d, name = %s\n", (*ptr).id, (*ptr).name);
    printf("For p: id = %d, name = %s\n", p.id, p.name);

    ptr = &q;
    ptr->id = 50; //Same as doing (*ptr).id =50, which implies q.id = 50
    strcpy(ptr->name, "Emertxe Infotech");

    printf("ptr->id = %d, ptr->name = %s\n", ptr->id, ptr->name);
    printf("For q: id = %d, name = %s\n", q.id, q.name);

    //p->id = 100;
    //ptr.id = 500;

    return 0;
}*/


/*#ifndef STUDENT_H
#define STUDENT_H

#define MAX_LEN 30

// Defintion of struct student
// Note: struct student is a datatype, not a variable 
struct student
{
    int id;
    char name[MAX_LEN];
};

#endif*/


/*#include <stdio.h>
#include <string.h>

// Create a structure type
// Name of the type is struct student (Not simply student)
struct student
{
    int id;
    char name[30];
    char addr[150];
};

void print_stud_info1(struct student stud);
void print_stud_info2(const struct student *stud_ptr);

void print_stud_info1(struct student stud)
{
    puts("******** Student Info ********");
    printf("id = %d\n", stud.id);
    printf("Name = %s\n", stud.name);
    printf("Address = %s\n", stud.addr);
}

void print_stud_info2(const struct student *stud_ptr)
{
    puts("******** Student Info ********");
    printf("id = %d\n", stud_ptr->id);
    printf("Name = %s\n", stud_ptr->name);
    printf("Address = %s\n", stud_ptr->addr);

}

int main()
{
    struct student s1; // s1 is a variable of type struct student
    struct student s2 = {20, "Shankar", "MG Road"}; //Initialize the fields

    printf("Enter id name and address\n");
    scanf("%d%s%s", &(s1.id), s1.name, s1.addr);

    // Print by invoking functions //
    print_stud_info1(s1);
    print_stud_info2(&s2);

    return 0;
}*/


/*#include <stdio.h>

// Use pragma to remove structure padding //

struct student
{
    int age; // int is 4 bytes long //
    char ch1;
    char ch2;
};

struct MyData
{
    short Data1;
    short Data2;
    short Data3;
};

int main()
{
    //struct student s;

    printf("%lu\n", sizeof(struct student));
    printf("%lu\n", sizeof(struct MyData));
    return 0;
}*/


/*Mubeen
10
20
30
Shankar
90
95
40*/


/*#include <stdio.h>
#include "student.h"

int max_subjects = 3;

void get_student_info(struct student *stud)
{
    int i;

    printf("Enter Name: ");
    scanf("%s", stud->name);

    printf("Enter ID: ");
    scanf("%d", &(stud->id));

    for (i = 0; i < max_subjects; i++)
    {
	printf("Enter Subject %d marks: ", i + 1);
	scanf("%d", &(stud->subj_marks[i]));
    }
}

void print_stud_info(const struct student *stud)
{
    int i;

    printf("Name: ");
    printf("%-20s", stud->name);

    printf("ID: ");
    printf("%-6d", (stud->id));

    for (i = 0; i < max_subjects; i++)
    {
	printf("Subject %d marks: ", i + 1);
	printf("%-5d", (stud->subj_marks[i]));
    }

    puts("");

}

void calculate_total_and_average(struct student *stud)
{

}

int main()
{
    //Create student list
    struct student stud_list[MAX_STUDENTS];

    int stud_count = 2;
    int i;

    //For each student read student info
    for (i = 0; i < stud_count; i++)
    {
	get_student_info(&stud_list[i]);
    }

    //Calculate the total and average for each student
    for (i = 0; i < stud_count; i++)
    {
	calculate_total_and_average(&stud_list[i]);
    }

    //Print the student details
    puts("");
    puts("*********Student details*************");
    for (i = 0; i < stud_count; i++)
    {
	print_stud_info(&stud_list[i]);
    }

    return 0;
}*/


/*#include <stdio.h>
#include "student.h"

int num_subjects = 2;

void get_student_details(const struct student *stud)
{
    int i;

    // Get name and marks
    printf("Enter Name and Subject marks(%d Subjects)\n", num_subjects);

    gets(stud->name);
    for (i = 0; i < num_subjects; i++)
    {
    	scanf("%d", &(stud->subj_marks[i]));
    }

    getchar(); //Discard \n
}

void calc_student_result(struct student *stud)
{
    int i;

    stud->total = 0;

    // Calc total
    for (i = 0; i < num_subjects; i++)
    {
    	 stud->total += stud->subj_marks[i];
    }

    // Calc average
    stud->average = (float)stud->total / num_subjects;
}

void print_student_details(const struct student *stud)
{
    int i;

    puts("*************************************");
    printf("Name: %s\n", stud->name);
    for (i = 0; i < num_subjects; i++)
    {
    	printf("Subject %d: %d\n", i + 1, stud->subj_marks[i]);
    }

    printf("Total = %d, Average = %f\n", stud->total, stud->average);
}

int main()
{
    struct student stud_list[2];
    int num_studs = 2, i;

    // Get marks for each student
    for (i = 0; i < num_studs; i++)
    {
    	get_student_details(&stud_list[i]);
    }

    // Find result
    for (i = 0; i < num_studs; i++)
    {
    	calc_student_result(&stud_list[i]);
    }

    // Print the student info
    for (i = 0; i < num_studs; i++)
    {
    	print_student_details(&stud_list[i]);
    }

    return 0;
}*/


/*#ifndef STUDENT_H
#define STUDENT_H

#define NAME_LEN 35
#define MAX_SUBJECTS 10
#define MAX_STUDENTS 100

struct student
{
    char name[NAME_LEN];
    int id;
    int subj_marks[MAX_SUBJECTS];
    int total;
    float average;
};

#endif*/


/*#include <stdio.h>
#include "student.h"

int num_subjects = 2;
#define MAX_STUDENTS 10

void get_student_details(StudentInfo *stud)
{
    int i;

    // Get name and marks
    printf("Enter name and subj marks(%d subjs)\n", num_subjects);

    //gets((*stud).name);
    gets(stud->name);
    for (i = 0; i < num_subjects; i++)
    {
    	//scanf("%d", &((*stud).subj_marks[i]));
    	scanf("%d", &(stud->subj_marks[i]));
    }
}

int main()
{

    ClassInfo cl;

    // Get no. of students from user (cl.num_students)

    // Allocate memory for stud_list
    cl.stud_list = (ClassInfo *) malloc(cl.num_students * sizeof(ClassInfo));


    //StudentInfo stud_list[MAX_STUDENTS];
    // Get the actual no. of students
    int num_studs = 2, i;

    // Get marks for each student
    for (i = 0; i < num_studs; i++)
    {
    	get_student_details(&stud_list[i]);
    }

    // Find result
    for (i = 0; i < num_studs; i++)
    {
    	//calc_result(&stud_list[i]);
    }

    // Print the student info
    for (i = 0; i < num_studs; i++)
    {
    	//print_student_details(&stud_list[i]);
    }
}*/


/*#ifndef STUDENT_H
#define STUDENT_H

#define NAME_LEN 35
#define MAX_SUBJECTS 10
#define MAX_STUDENTS 100

//extern int num_subjects;

struct student
{
    char name[NAME_LEN];
    int subj_marks[MAX_SUBJECTS];
    int total;
    float average;
};

struct class_info
{
    char name[15];
    int num_subjects;
    int num_students;
    struct student *stud_list;
    float class_average;
};

typedef struct student StudentInfo;
typedef struct class_info ClassInfo;
#endif*/


/*Mubeen
10
20
Shankar
90
95*/


/*#include <stdio.h>
#include "student.h"

int num_subjects = 2;

void get_student_details(const struct student *stud)
{
    int i;

    // Get name and marks
    printf("Enter Name and Subject marks(%d Subjects)\n", num_subjects);

    gets(stud->name);
    for (i = 0; i < num_subjects; i++)
    {
    	scanf("%d", &(stud->subj_marks[i]));
    }

    getchar(); //Discard \n
}

void calc_student_result(struct student *stud)
{
    int i;

    stud->total = 0;

    // Calc total
    for (i = 0; i < num_subjects; i++)
    {
    	 stud->total += stud->subj_marks[i];
    }

    // Calc average
    stud->average = (float)stud->total / num_subjects;
}

void print_student_details(const struct student *stud)
{
    int i;

    puts("*************************************");
    printf("Name: %s\n", stud->name);
    for (i = 0; i < num_subjects; i++)
    {
    	printf("Subject %d: %d\n", i + 1, stud->subj_marks[i]);
    }

    printf("Total = %d, Average = %f\n", stud->total, stud->average);
}

int main()
{
    struct student stud_list[2];
    int num_studs = 2, i;

    // Get marks for each student
    for (i = 0; i < num_studs; i++)
    {
    	get_student_details(&stud_list[i]);
    }

    // Find result
    for (i = 0; i < num_studs; i++)
    {
    	calc_student_result(&stud_list[i]);
    }

    // Print the student info
    for (i = 0; i < num_studs; i++)
    {
    	print_student_details(&stud_list[i]);
    }

    return 0;
}*/


/*#ifndef STUDENT_H
#define STUDENT_H

#define NAME_LEN 35
#define MAX_SUBJECTS 10
#define MAX_STUDENTS 100

//extern int num_subjects;

struct student
{
    char name[NAME_LEN];
    int subj_marks[MAX_SUBJECTS];
    int total;
    float average;
};

struct class_info
{
    char name[15];
    int num_subjects;
    int num_students;
    struct student *stud_list;
    float class_average;
};

typedef struct student StudentInfo;
typedef struct class_info ClassInfo;
#endif*/


/*#include <stdio.h>
#include <string.h>

// Create a structure type
// Name of the type is struct student (Not simply student)
struct student
{
    int id;
    char name[30];
    char addr[150];
};

// Create a new type StudentInfo //
typedef struct student StudentInfo;

static void print_stud_info1(StudentInfo stud);
static void print_stud_info2(const StudentInfo *sptr);

static void print_stud_info1(StudentInfo stud)
{
    printf("id = %d\n", stud.id);
    printf("name = %s\n", stud.name);
    printf("addr = %s\n", stud.addr);
}

static void print_stud_info2(const StudentInfo *sptr)
{
    printf("id = %d\n", sptr->id);
    printf("name = %s\n", sptr->name);
    printf("addr = %s\n", sptr->addr);
}

int main()
{
    StudentInfo s1; // s1 is a variable of type StudentInfo
    StudentInfo s2 = {20, "Shankar", "MG Road"};
    StudentInfo *sptr;

    sptr = &s1;

    s1.id = 10;
    strcpy(s1.name, "Mubeen");
    strcpy(s1.addr, "MG Road");

    print_stud_info1(s1);
    print_stud_info2(&s2);

#if 0
    printf("id = %d\n", s1.id);
    printf("name = %s\n", s1.name);
    printf("addr = %s\n", s1.addr);


    printf("id = %d\n", (*sptr).id);
    printf("name = %s\n", (*sptr).name);
    printf("addr = %s\n", (*sptr).addr);

    printf("id = %d\n", s2.id);
    printf("name = %s\n", s2.name);
    printf("addr = %s\n", s2.addr);
#endif
    return 0;
}*/


/* FILE: bool_type.c
 * Description: This programs illustrates the typedef to define
 * a Bool datatype using enum
 *

#include <stdio.h>

typedef enum
{
    e_false = 0,
    e_true
} Bool; //Type name is Bool

int main()
{
    //status is a variable of type Bool. It can hold e_false or e_true
    Bool status = e_false;

    if (status == e_true)
    {
	puts("Condition is true");
    }
    else
    {
	puts("Condition is false");
    }

    return 0;
}*/


/*#include <stdio.h>

// Typedef a function pointer to create a FuncptrType //
typedef int (*FuncPtrType) (int, int);

int add(int a, int b)
{
    return a + b;
}

int sub(int a, int b)
{
    return a - b;
}

int main()
{
    int res;
    FuncPtrType fptr; //fptr is a function pointer variable

    //int (*fptr)(int, int); //Function pointer declaration. fptr is a function pointer

    fptr = &add; //Assign add functions address

    res = (*fptr)(5, 10); //Invoke add function
    printf("res = %d\n", res);

    fptr = sub; //Assign sub function address
    res = fptr(5, 10); //Call sub func. Notice that u need not derefence fptr

    printf("res = %d\n", res);
    return 0;

}*/


/*#include <stdio.h>
#include "types.h"

int main()
{
    int32_t x = 50, y = 10;
    int64_t a = 50, b = 10;

    printf("sizeof x = %lu\n", sizeof(x));
    printf("sizeof a = %lu\n", sizeof(a));

}*/


/*#include <stdio.h>

typedef int ARRAY[100];
int main()
{
    ARRAY arr;

    printf("%u\n", sizeof(arr));

    return 0;
}*/


/*#include <stdio.h>

// Arr is an array of 100 ints
typedef int Arr[100];

typedef char Font[8][8];

int main()
{
    int i;

    // variable a is same as int[100]
    Arr a = {1, 2, 3};

    printf("sizeof(Arr) = %zu\n", sizeof(Arr));
    printf("sizeof(Font) = %zu\n", sizeof(Font));

    // Print some values //
    for (i = 0; i < 5; i++)
    {
	printf("%d\n", a[i]);
    }

}*/


/*#ifndef TYPES_H
#define TYPES_H

typedef signed char int8_t;
typedef unsigned char uint8_t;
typedef signed short int16_t;
typedef unsigned short uint16_t;
typedef signed int int32_t;
typedef unsigned int uint32_t;

#ifdef LP64 //Use this for Linux 64 bit 
typedef signed long int64_t;
typedef unsigned long uint64_t;
#else //Other platforms
typedef signed long long int64_t;
typedef unsigned long long uint64_t;
#endif

#endif //End of header file*/


/*#include <stdio.h>

// Create a union type named register_type //
union register_type
{
    int reg32;
    char byte[4];
};

int main()
{
    // Instantiate union, creates a variable named "r" //
    union register_type r;

    printf("sizeof(r) = %u\n", sizeof(r));
    printf("%p %p %p\n", &r, &r.reg32, &r.byte);

    r.reg32 = 0x12345678;

    printf("r.reg32 = %x\n", r.reg32); // Access the int
    printf("r.byte[0] = %x\n", r.byte[0]); // Access a byte (Depends on Endianness)

    r.byte[0] = 0x99; // Modify a byte.
    printf("r.reg32 = %x\n", r.reg32); // Access the int
    printf("r.byte[0] = %x\n", r.byte[0] & 0xFF); // Access a byte

    return 0;
}*/


/*#include <stdio.h>

union Device
{
    char ch;
    int x;
    double d;
};

typedef union Device Device_t;

int main()
{
    union Device dev;
    Device_t var;

    printf("sizeof union = %u\n", sizeof(union Device));

    dev.x = 1;
    printf("dev.x = %d\n", dev.x); // This should print 1 
    dev.d = 0.7;

    printf("dev.x = %d\n", dev.x); // Will it print 1 ?
    printf("dev.d = %f\n", dev.d);

    return 0;
}*/


/* FILE - endianess.c
 * Modified at Wed Jan 27 15:47:00 IST 2016
 *

#include <stdio.h>

union endian
{
    int int_val;
    char byte[sizeof(int)];
};

int main()
{
    union endian e;

    e.int_val = 1;

    if (e.byte[0] == 1)
    {
    	puts("Little Endian");
    }
    else
    {
    	puts("Big Endian");
    }

    return 0;
}*/


/*#include <stdio.h>

typedef union 
{
    float f;
    struct {
	unsigned int mantissa:23;
	unsigned int exponent:8;
	unsigned int negative:1;
    } ieee_float;
}float_union;
 
int main()
{
    unsigned int mantissa, exponent, negative;
    float_union val;

    printf("Float? ");
    scanf("%f", &(val.f));

    printf("val = %X\n", *(int *)&val.f);

    negative = val.ieee_float.negative;
    exponent = val.ieee_float.exponent;
    mantissa = val.ieee_float.mantissa;

    printf("float    = %.32f\n", val.f);
    printf("sign     = 0x%X\n", negative);
    printf("mantissa = 0x%X\n", mantissa);
    printf("exponent = %u\n", exponent);
    //printf("exponent = 0x%X\n", exponent);

//    printf("value    = (-1)^sign * (radix)^(exponent - bias) * (1).mantissa\n");
//    printf("           where calculations are in binary (for radix 2)\n");

    return(0);
}*/


/*struct data_packet
{
    // Fields for data pkt//
};

struct error_packet
{
    // Fields for error pkt//
};

struct ack_packet
{
    // Fields for acknowledgment pkt//
};

union any_packet
{
    struct data_packet d_pkt;
    struct error_packet e_pkt;
    struct ack_packet a_pkt;
};

struct packet
{
    int pkt_type; // Say 1, 2, 3 for data, error and ack pkt respectively

    union any_packet a_pkt;
};*/


/* FILE: quiz1.c
 * Description: 
 */

/*#include <stdio.h>

union uObject
{
    int num;
    char byte[4];
} u;

int main()
{
    char temp;

    u.num = 3;
    temp = u.byte[0];
    u.byte[0] = u.byte[1];
    u.byte[1] = temp;

    printf("u.num = %d\n", u.num);
    printf("u.num = %X\n", u.num);

    return 0;
}*/







































































































































































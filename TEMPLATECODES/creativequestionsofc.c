//1 Ans = 120  240
int main()
{
		int *a;
		a = (int*)malloc(sizeof(char));
		*a = 120;
		printf("%d\n", *a);
		free(a);
		a = (int*)malloc(sizeof(int));
		*a = 240;
		printf("%d\n", *a);
}

//2 Ans = Runtime Error
int main()
{
		int i, numbers[2];
		numbers[0] = 9;
		free(&numbers[1]);
		printf("\nnumbers[%d] = %d", 0, numbers[0]);
		return 0;
}

//3 Ans = 10 10 10
int main()
{
		int ***r, **q, *p, i = 10;
		p = &i;
		q = &p;
		r = &q;
		printf("%d, %d, %d\n", *p, **q, ***r);
		return 0;
}

//4 Ans = 24
int main()
{
		short testarray[4][3] = {{1}, {2, 3}, {4, 5, 6}};
		printf("%d\n", sizeof(testarray));
		return 0;
}

//5 Ans = We don't have address of an address operator
int main()
{
		int a = 10;
		int **c = &&c;
}

//6
Possibles in C
1. Array of function pointer
2. Returning a function pointer
3. Comparison of function pointer

//7 Ans = Compiler Error
int main()
{
		static int a[] = {0, 1, 2, 3, 4};
		static int *p[] = {a + 2, a, a + 4, a + 3, a + 1};
		int **ptr;
		ptr = p;
		**++ptr;
		printf("%d %d", **ptr, ptr + p);
		return 0;
}

//8 Ans = 6
int callPoint(void);
void print(int, int(*)());
int i = 11;
int main()
{
		int i = 23;
		print(i, callPoint);
}
void print(int i, int(*callPointOne)())
{
		printf("%d\n", (*callPointOne)());
}
int callPoint(void)
{
		return(i- = 5);
}

//9 Ans = You cannot change the value pointed by ptr
const int *ptr;

//10 Ans = 1
If no arguments passed through command line, then what is the value of argc?

//11 Ans = 1
int main()
{
		int *num = 0;
		void *ptr = num;
		ptr++;
		printf("%d\n", ptr);
		return 0;
}

//12 Ans = Pointer to Array[6] of Array[7] of int
int myArr[5][6][7]. Type of myArr[0] is:

//13 Ans = 5624
Assume that the first printf() function gives the output as 5624. What would be the
 output of the second printf() function?
int main()
{
		int *p;
		p = (int*)calloc(20, sizeof(char));
		printf("%lu\n", p);
		free(p);
		printf("%lu", p);
		return 0;
}

//14 Ans = Compiler Error
int main()
{
		int i = 10;
		void *p = &i;
		printf("%d\n", (int)*p);
		return 0;
}

//15 Ans = Compile Time Error
void main()
{
		int a[3] = {1, 2, 3};
		int *p = a;
		int *r = &p;
		printf("%d", (**r));
}

//16
Each call of va_arg Returns one arguments & Steps va_list variable to the next

//17 Ans = ck
int main()
{
		static char*s[] = {"white", "yellow", "violet", "black"};
		char **ptr[] = {s + 2, s + 3, s + 0, s + 1}, ***p;
		p = ptr;
		**++p;
		printf("%s", *++*--p + 3);
		return 0;
}

//18 Ans = Free the memory pointed to by ptr
realloc(ptr, size), where size is zero means

//19 Ans = 17 17
int main()
{
		short arr[3][2] = {3, 5, 8, 12, 17, 20};
		printf("%d %d", *(arr + 1)[1], **(arr + 2));
}

//20 Ans = return length including null character
int count(const char *s)
{
		const char *p = s;
		while(*s++);
		return(s - p);
}

//21 Ans = 8
int main()
{
		char *arr[4];
		unsigned long a = sizeof(*arr) / sizeof(**arr);
		printf("%ld\n", a);
}

//22 Ans = Compile Time Error
int main()
{
		int i = 3;
		int *p = &i;
		foo(&p);
		printf("%d ", *p);
}
void foo(const *int *p)
{
		int j = **p * **p;
		**p = j;
		printf("%d ", **p);
}

//23 Ans = Function Pointer
How to call a function without using the function name to send parameters?

//24 Ans = HGFE
int main()
{
		int idx;
		unsigned int val = 0x45464748;
		void *p = &val;
		for(idx = 0; idx < sizeof(int); idx++)
		{
				printf("%c", *(char*)p++);
		}
		return 0;
}

//25 Ans = ptr is an array of pointers to function
int (*ptr[4])()

//26 Ans = char *ptr[3]
An array of three pointers to chars

//27 Ans = Compile time error
int mul(int a, int b)
{
		return a * b;
}
void main()
{
		int (*function_pointer)(int, int);
		function_pointer = mul;
		printf("The product of three numbers is:%d", function_pointer(3, 4, 5));
}

//28 Ans = Illegal application of ++ to void data type & pointer function initialized like a variable
void first()
{
		printf("World");
}
void main()
{
		void *ptr() = first;
		ptr++;
		ptr();
}

//29 Ans = Compiler Error
void main()
{
		int a[2][3] = {2, 10, 14, , 18, 22};
		int i = 0, j = 0;
		for(i = 0; i < 2; i++)
				for(j = 0; j < 3; j++)
						printf("%d", a[i][j]);
}

//30 Ans = 5 5
void foo(int **p);
int main()
{
		int i = 15, *p = &i;
		foo(&p);
		printf("%d ", *p);
		return 0;
}
void foo(int **p)
{
		static int j = 5;
		*p = &j;
		printf("%d ", **p);
}

//31 Ans = ivo
int main()
{
		static char *s[] = {"redmi", "moto", "vivo", "oppo"};
		char **ptr[] = {s + 3, s + 2, s + 1, s}, ***p;
		p = ptr;
		++p;
		printf("%s", **p + 1);
		return 0;
}

//32 Ans = Hello World
int main()
{
		const char *p = "Hello";
		p = "Hello World";
		printf("%s", p);
}

//33 Ans = int fun(int p[][4], int columns);
int main()
{
		int a[3][4];
		int i = fun(a, 4);
		return 0;
}

//34 Ans = Executable file name
Ouput of code? Assume CLA is ./a.out
int main(int argc, char *argv[])
{
		printf("%s\n", argv[argc * 0]);
		return 0;
}

//35 Ans = argument count, argument vector
What does argc and argv indicate in command-line arguments?
(Assuming: int main(int argc, char *argv[]))

//36 Ans = 1 3 0 0 0 0
void f(int (*a)[3])
{
		a[0][1] = 3;
		int i = 0, j = 0;
		for(i = 0; i < 2; i++)
				for(j = 0; j < 3; j++)
						printf(" %d", a[i][j]);
}
void main()
{
		int a[2][3] = {1};
		f(a);
}

//37 Ans = Compiler error. Cannot change *p which is const
int main()
{
		char str[20] = "Hello";
		char const *p = str;
		*p = 'M';
		printf("%s\n", str);
		return 0;
}

//38 Ans = Function first
Which function is not called in the following C program?
void first()
{
		second();
}
void second()
{
		printf("first");
}
void third()
{
		second();
}
void main()
{
		void (*ptr)();
		ptr = third;
		ptr();
}

//39 Ans = ptr is array of pointers to 10 integers
int *ptr[10];

//40 Ans = 15
int main()
{
		int a = 5, b = 10, c = 15;
		int *arr[3] = {&a, &b, &c};
		printf("%d", *arr[*arr[1] - 8]);
}

//41 Ans = 0 1 2 3 4 5 6 7
void display_arr(int (*ptr)[4])
{
		printf("%d %d %d %d ", ptr[0][0], ptr[0][1], ptr[0][2], ptr[0][3]);
}
void main()
{
		int arr[3][4] = {{0, 1, 2, 3}, {4, 5, 6, 7}, {8, 9, 10, 11}};
		int (*int_arr)[4];
		int_arr = arr;
		int_arr++;
		display_arr(int_arr - 1);
		int_arr = int_arr++;
		display_arr(int_arr);
}

//42 Ans = The difference of three numbers is:-6
int sub(int a, int b, int c)
{
		return a - b - c;
}
void main()
{
		int (*function_pointer)(int, int, int);
		function_pointer = sub;
		printf("The difference of three numbers is:%d", (*function_pointer)(3, 4, 5));
}

//43 Ans = 4
Assume command line arguments are ./a.out 1 2 3
int main(int argc, char *argv[])
{
		printf("%d\n", argc);
		return 0;
}

//44 Ans = False
malloc initialises memory with all bits to zero

//45 Ans = p = malloc(m * n); memset(p, 0, m * n);
p = malloc(m, n) is equivalent to

//46 Ans = p
#include<stdio.h>
int main()
{
		char *p = (char*)NULL;
		if(p == 0)
				printf("p ");
		else
				printf("nullp");
}

//47 Ans = Segmentation fault
void print_arr(float **p)
{
		printf("0 %f 1 %f 2 %f\n", p[0][0], p[0][1], p[0][2]);
}
void main()
{
		float arr[2][3] = {{2, 6, 11}, {-4, -9, -13}};
		float **fl_arr;
		fl_arr = (float*)arr;
		print_arr(fl_arr);
		fl_arr++;
		print_arr(fl_arr);
}

//48 Ans = *(*(*(*(a + i) + j) + k) + l)
What would be the equivalent pointer expression for referring the array element a[i][j][k][l]?

//49 Ans = 15
int *f();
int main()
{
		int *p = f();
		printf("%d\n", *p);
}
int *f()
{
		int *j = (int*)malloc(sizeof(int) * 2);
		*j = 15;
		return j;
}

//50 Ans = Old pointer will be freed by realloc function
Programmer wants to increase or decrease the previously allocated memeory. If new memory block is allocated by realloc then which statement is true for old pointer

//51 Ans = 10 Segmentation fault
void f(int (*x)(int));
int myfoo(int i);
int (*foo)(int) = myfoo;
int main()
{
		f(foo(10));
}
void f(int (*i)(int))
{
		i(15);
}
int myfoo(int i)
{
		printf("%d\n", i);
		return i;
}

//52 Ans = for(i = 0; i < 3; i++)
//           {
//				   for(j = 0; j < 3; j++)
//				   printf("%d", p[i][j]);
//		     }
How would you access the elements of the array using p?
void main()
{
		int i, j;
		int (*p)[3];
		p = (int(*)[3])malloc(3 * sizeof(*p));
}

//53 Ans = 20
int main()
{
		int a = 10;
		int *const p = &a;
		*p = 20;
		printf("%d", *p);
		return 0;
}

//54 Ans = int *const ptr
Which one of the following statements allow the variable being pointed to be changed?

//55 Ans = A pointer to an array of character string's that contains the arguments, one per string
While collecting the command line arguments, what is the second argument in main function?

//56 Ans = 7
#include<stdarg.h>
void func(int, ...);
int main()
{
		func(2, 3, 5, 7, 11, 13);
		return 0;
}
void func(int n, ...)
{
		int number, i = 0;
		va_list start;
		va_start(start, n);
		while(i != 3)
		{
				number = va_arg(start, int);
				i++;
		}
		printf("%d", number);
}

//57 Ans = double *p = (double *)calloc(5, sizeof(double));
Combine the following two statements into one?
double *p;
p = (double*)calloc(5, sizeof(double));

//58 Ans = printf("%s", *(ptr + 1));
Which statement will print "Second"
char * ptr[3] = {"First", "Second", "Third"};

//59 Ans = Only appear at the end of an argument list
In a variable length argument function, the declaration "..." can

//60 Ans = *
The operator used to get value at address stored in a pointer variable is

//61 Ans = Fruits Vegetables Fruits
int main()
{
		char *svar[] = {"Fruits", "Vegetables", "Meat", "Fish"};
		char **pvar;
		pvar = svar;
		printf("%s ", *pvar--);
		printf("%s ", *(pvar + 2));
		printf("%s ", *++pvar);
		return 0;
}

//62 Ans = transpose = {3, 5, 1, 4, 6, 2};
Consider the given 1d array as 2d array (with 2 cols) and find transpose.
int num[6] = {3, 4, 5, 6, 1, 2};

//63 Ans = void transport(int(*fptr)(int, float, char)){}
Among the below options, which is the correct way to pass a function pointer to arguments

//64 Ans = stdarg.h
Which header file includes a function for variable number of arguments?

//65 Ans = Representation of NULL pointer
What is (void*)0?

//66 Ans = The name by which the program was invoked
What is argv[0] in command line arguments?

//67 Ans = To declare a variable that will refer to each argument in turn
The type va_list in an argument list is used

//68 Ans = Hello Hello World
int main()
{
		char * const p = "Hello", *s = "Hello";
		s = "Hello World";
		printf("%s %s\n", p, s);
}

//69 Ans = void pass(int(*fptr)(int, float, char)){}
Which of the following is a correct syntax to pass a function pointer as an argument?

//70 Ans = Compiler error
int main()
{
		const char *callCausal();
		*callCausal() = 'A';
		return 0;
}
const char *callCausal()
{
		return "Causal Call";
}

//71 Ans = 11
void f(int(*x)(int));
int myfoo(int);
int (*fooptr)(int);
int ((*foo(int)))(int);
int main()
{
		fooptr = foo(0);
		fooptr(10);
}
int ((*foo(int i)))(int)
{
		return myfoo;
}
int myfoo(int i)
{
		printf("%d\n", i + 1);
}

//72 Ans = void func(...)
Which of the following function with ellipsis are illegal?

//73 Ans = Compiler Error
int main()
{
		int arr[3][5], flag;
		arr[1][1] = 33;
		flag = ( ((*arg)++ == *arg) && (*(arr + 1) == arr[1]))
				printf("%d\n", flag);
		return 0;
}

//74 Ans = 5 8
int main()
{
		char (*p)[5];
		printf("%d %d\n", sizeof(*p), sizeof(p));
}

//75 Ans = 6
void fun(int **p);
int main()
{
		int a[3][4] = {1, 2, 3, 4, -4, -3, -2, 1, 7, 5, 6, 12};
		int *ptr;
		ptr = &a[2][2];
		fun(&ptr);
		return 0;
}
void fun(int **p)
{
		printf("%d\n", **p);
}

//1 Ans = free(p1 -> prev); free(p1 -> next); free(p1);
Correct sequence to free the allocated memory 
struct p
{
		struct p *prev;
		int x;
		struct p *next;
};
int main()
{
		struct p *p1 = (struct p*)malloc(sizeof(struct p));
		p1 -> x = 1;
		p1 -> prev = (struct p*)malloc(sizeof(struct p));
		p1 -> next = (struct p*)malloc(sizeof(struct p));
		return 0;
}

//2 Ans = Compiler Error
int main()
{
		struct a
		{
               category:10;
               scheme:9;
		};
		printf("Size = %d", sizeof(struct a));
		return 0;
}

//3 Ans = William
int main()
{
		enum Peoplevar1 {Alex = 0, Tracy, Kristian} Girls;
		enum Peoplevar2 {William = 0, Martin} Boys;
		switch(Boys)
		{
				case William:
						puts("William");
						break;
				case Martin:
						puts("Martin");
						break;
				default:
						puts("None");
						break;
		}
		return 0;
}

//4 Ans = Read and modify only the existing contents of the file
Select the operation that can perform on the file when open a file using the command
fp = fopen("filename", "r+");

//5 Ans = X is true but Y is false
X => Different enumeration may have same name
Y => Values must be distinct in the same enumeration

//6 Ans = Compiler Error
#include "printf"
void main()
{
		printf("emertxe");
}

//7 Ans = 400
#define A(10 + 10)
int main()
{
		int a;
		a = A * A;
		printf("%d", a);
}

//8 Ans = 24 8
typedef struct my_structure
{
		char ch1;
		double num3;
		char ch2;
}my_struct;
typedef union my_union
{
		char ch1;
		double num6;
		char ch2;
}my_union;
int main()
{
		printf("%lu %lu\n", sizeof(my_struct), sizeof(my_union));
}

//9 Ans = #include
How would you insert pre-written code into a current program?

//10 Ans = 12
For what minimum value of x in a 32-bit Linux OS would make the size of s equal to 8 bytes?
struct temp
{
		int a: 13;
		int b: 8;
		int c: x;
}s;

//11 Ans = 4
enum myEnum {AB, BC};
int main()
{
		enum myEnum a = 4;
		printf("%d", a);
		return 0;
}

//12 Ans = 6
#pragma pack(1)
typedef struct sample
{
		char a;
		int b;
		char c;
}sample_t;
int main()
{
		printf("%zu", sizeof(sample_t));
}

//13 Ans = 119 = 119 Same Address
struct student
{
		char *c;
};
void main()
{
		struct student n; //(Assume address of n is 119, address of s is 224)
		struct student *s = &n;
		(*s).c = "hello";
		printf("%p = %p\n", s, &n);
}

//14 Ans = 5..5
#define a 5
void foo();
int main()
{
		printf("%d..", a);
		foo();
		printf("%d", a);
		return 0;
}
void foo()
{
#undef a
#define a 53
}

//15 Ans = Infinite loop
Assume MyFile.txt contains "abcdefghij"
#include<stdio.h>
int main()
{
		FILE *fp = NULL;
		unsigned char c;
		fp = fopen("MyFile.txt", "r");
		while((c = getc(fp)) != EOF);
		putchar(c);
		fclose(fp);
		return 0;
}

//16 Ans = Typecasting of Structure
Which of the following operation is illegal in structures?

//17 Ans = #
The C-preprocessors are specified with

//18 Ans = 11225
struct student
{
		char *c;
};
void main()
{
		struct student m;
		struct student *s = &m;
		s -> c = "11225";
		printf("%s", s -> c);
}

//19 Ans = Compile time error
union u
{
		struct
		{
				unsigned char x: 4;
				unsigned int y: 2;
		}p;
		int x;
};
int main()
{
		union u u.p.x = 3;
		printf("%d\n", u.p.x);
}

//20 Ans = Compiler Error
#define sdef struct s*
struct s
{
		int x;
		char y[2];
};
int main()
{
		sdef sobj1, sobj2;
		sobj1 -> x = 10; sobj1 -> y[0] = '5';
		sobj1 -> y[0] = '0'; sobj2 = sobj1;
		printf("%d %c %c", sobj2 -> x, sobj2 -> y[0], sobj2 -> y[1]);
		return 0;
}

//21 Ans = Line Control
Preprocessor feature that supply line numbers and filenames to compiler is called?

//22 Ans = Any other structure
//         Any other structure except themselves
//         Any other structure except themselves and pointed to themselves
Structure may contain

//23 Ans = 77
#define foo(m, n)m ## n
void myfunc();
int main()
{
		myfunc();
}
void myfunc()
{
		printf("%d\n", foo(7, 7));
}

//24 Ans = Hurray it is the weekend
int main()
{
		enum Days{Sunday, Monday, Tuesday, Wednesday, Thursday, Friday, Saturday};
		enum Days TheDay;
		int j = 0;
		printf("Please enter the day of the week (0 to 6)\n");
		scanf("%d", (int *)&TheDay);
		TheDay = j;
		if(TheDay == Sunday || TheDay == Saturday)
				printf("Hurray it is weekend\n");
		else
				printf("Curses still at work\n");
		return 0;
}

//25 Ans = Compile time error
#define MIN 0
#if defined(MIN) - (!defined(MAX))
#define MAX 19
#endif
int main()
{
		printf("%d %d\n", MAX, MIN);
		return 0;
}

//26 Ans = Compile time error
union u
{
		struct
		{
				unsigned char x: 2;
				unsigned int y: 2;
		}p;
		int x;
};
int main()
{
		union u u.p.x = 5;
		printf("%d\n", u.p.x);
}

//27 Ans = Compiler Error
int main()
{
		struct simp
		{
				int i = 6;
				char city[] = "Bangalore";
		};
		struct simp s1;
		printf("%d ", s1.i);
		printf("%s", s1.city);
		return 0;
}

//28 Ans = 5 3
#define big(a, b) a > b ? a : b
#define swap(a, b) temp = a; a = b; b = temp;
int main()
{
		int a, b, temp;
		a = 3, b = 5;
		if((3 + big(a, b)) <= b)
		{
				swap(a, b);
		}
		printf("%d %d\n", a, b);
}

//29 Ans = 0
#define macIntFunc(n) func(n)
int func(int n)
{
		return ((n ^ n & n));
}
int main()
{
		printf("%d", macIntFunc(8));
		return 0;
}

//30 Ans = 160
struct student
{
		int id;
		char name[10];
		float percentage;
};
int main()
{
		struct student record[8];
		printf("%d\n", sizeof(record));
}

//31 Ans = Except b, all variables reside in bss
static int a = 0;
char b[10] = {1, 2};
struct st
{
		float x, y;
}pt;
void main(void)
{
		static float v[] = {0};
		static struct st pt1;
		printf("%f %f", v[1], v[2]);
}

//32 Ans = 0 1 -7 -6 -5 -4
typedef enum color {RED, BLUE, ORANGE = -7, BLACK, WHITE, GREEN}colors;
int main()
{
		printf("%d %d %d %d %d %d\n", RED, BLUE, ORANGE, BLACK, WHITE, GREEN);
}

//33 Ans = 1293
struct student
{
		char *name;
};
struct student fun(void)
{
		struct student s;
		s.name = "1293";
		return s;
}
void main()
{
		struct student m = fun();
		printf("%s", m.name);
}

//34 Ans = 3 0.000000 3
int main()
{
		union Test_union
		{
				int a; float b; long c;
		}u;
		struct Test_struct
		{
				int a; float b; long c;
		}s;
		u.a = 1;
		u.b = 2;
		u.c = 3;
		s.a = u.a;
		s.b = u.b;
		s.c = u.c;
		printf("%d %f %d", s.a, s.b, s.c);
		return 0;
}

//35 Ans = Compiler Error
int main()
{
		FILE *fp, *fs, *ft;
		fp = fopen("A.C", "r");
		fs = fopen("B.C", "r");
		ft = fopen("C.C", "r");
		fclose(fp, ft, fs);
		return 0;
}

//36 Ans = Yes
Can we simply re-arrange the members of the structure to reduce padding?

//37 Ans = 2048
union u
{
		int var;
		unsigned char str[4];
};
int main()
{
		unsigned char tmp;
		union u uObj;
		uObj.var = 0010;
		tmp = uObj.str[1];
		uObj.str[1] = uObj.str[0];
		uObj.str[0] = tmp;
		printf("%d", uObj.var);
		return 0;
}

//38 Ans = Nothing will print
int main()
{
		typedef struct{char ch;}st;
		st s1 = {0};
		st s2 = {0};
		if(s2.ch = s1.ch)
				printf("Successful");
		return 0;
}

//39 Ans = The last character in the file
In the below code fp points to
void main()
{
		FILE *fp;
		fp = fopen("try.c", "a");
}

//40 Ans = Returns a non-zero value if the end of file indicator is set for the stream
Select the most appropriate functionality of the following declaration in handling errors in C
int feof(FILE *stream);

//41 Ans = -E
To see preprocessor output, which option provide with gcc command

//42 Ans = 267 0
void main(void)
{
		union
		{
				struct{
						char myChar1[2];
						char myChar2[2];
				}s1;
				struct{
						int i;
						int j;
				}s2;
		}u = {11, 1};
		printf("%d %d", u.s2.i, u.s2.j);
}

//43 Ans = Compiler Error
#define SWAP(z, x, y) z t = x; x = y; y = t;
int main()
{
		int x = 2, y = 6;
		if(x > y)
				SWAP(int, x, y)
						printf("x = %d y = %d\n", x, y);
}

//44 Ans = Illegal, legal
What is the order for the following C declarations?(Assume it's 64 bit machine)
short a: 17;
int long y: 33;

//45 Ans = 0 4 2 0
int main()
{
		struct bitfields
		{
				int bits_1: 2;
				int bits_2: 4;
				int bits_3: 4;
				int bits_4: 3;
		}bit = {0, 4, 2, 0};
		printf("%d %d %d %d", bit.bits_1, bit.bits_2, bit.bits_3, bit.bits_4);
}

//46 Ans = Compiles successfully and both the programs give the same output
Which one of the following options is TRUE about the following programs A and B?(Assume both are complete program)
A. char str[100];
   strcpy(str, "Hello");
   FILE *fp = fopen("Binary.txt", "wb");
   fwrite(str, sizeof(char), strlen(str), fp);
   fclose(fp);
B. char str[100];
   strcpy(str, "Hello");
   FILE *fp = fopen("Ascii.txt", "w");
   fwrite(str, sizeof(char), strlen(str), fp);
   fclose(fp);

//47 Ans = m ## n
#define foo(m, n) "m ## n"
int main()
{
		printf("%s\n", foo(2, 6));
}

//48 Ans = Compile time error
struct point
{
		int x;
		int y;
};
int main()
{
		struct point p = {8};
		struct point p1 = {8};
		if(p == p1)
				printf("Both are equal %d = %d\n", p.x);
		else
				printf("not equal\n");
}

//49 Ans = 11
int main()
{
		typedef struct p *q;
		struct p
		{
				int x;
				char y;
				q ptr;
		};
		struct p p = {11, 7, &p};
		printf("%d\n", p.ptr -> x);
		return 0;
}

//50 Ans = Preprocessor directive
//         Inclusion directive
//         File inclusion directive
#include  is called

//51 Ans = Cannot predict output
int main()
{
		union a
		{
				int i;
				char ch[2];
		};
		union a u;
		u.ch[0] = 02;
		u.ch[1] = 01;
		printf("%d\n", u.i);
		return 0;
}

//52 Ans = Compiler Error
struct st
{
		double x;
		static char y;
};
int main()
{
		printf("%d", sizeof(struct st));
		return 0;
}

//53 Ans = Compilation error
#define putchar (c) printf("%c", c)
void main()
{
		char s = '8';
		putchar(s);
}

//54 Ans = 1. free(s_ptr -> s);
//            free(s_ptr -> char_arr);
//            free(s_ptr);
//         2. free(s_ptr -> char_arr);
//            free(s_ptr -> s);
//            free(s_ptr);
Which one of the following is the correct option that substitutes deallocate memory in the following program?
#include<malloc.h>
int main()
{
		struct s_DT
		{
				int i;
				float j;
				int *s;
				char *char_arr;
		};
		struct s_DT *s_ptr;
		s_ptr = (struct s_DT*)malloc(sizeof(struct s_DT));
		s_ptr -> char_arr = (char*)malloc(20);
		s_ptr -> s = (int*)malloc(5 * sizeof(int));
		//deallocate memory
		return 0;
}

//55 Ans = ->
If a variable is a pointer to a structure, then which of the following operator is used to access data members of the structure through the pointer

//56 Ans = Undefined Behaviour
#define SQR(x) x * x
int main()
{
		int i = 3;
		i = SQR(i++);
		printf("%d", i);
}

//57 Ans = Yankee Doodle Deadly
struct virus
{
		char signature[25];
		char status[20];
		int size;
}
v[2] = {"Yankee Doodle", "Deadly", 1813, "Dark Avenger", "Killer", 1795};
int main()
{
		int i;
		for(i = 0; i < 1; i++)
				printf("\n%s %s", v[i].signature, v[i].status);
		return 0;
}

//58 Ans = 12
(Assuming size of int be 4)
struct temp
{
		int a;
		int b;
		int c;
}p[] = {3};
main()
{
		printf("%d", sizeof(p));
}

//59 Ans = Doesn't create any file even if it doesn't not exist
int main()
{
		FILE *fp = NULL;
		fp = fopen("c:\newfolder\MyFile.txt", "rb");
		return 0;
}

//60 Ans = False
The #elif directive can appear after the preprocessor #else directive

//61 Ans = 58
#define x 4 + 6
int main()
{
		int i;
		i = x * x * x;
		printf("%d", i);
}

//62 Ans = Compilation Error
#define a 22
int main()
{
		const int a = 12;
		printf("It prints %d", a);
}

//63 Ans = 1024
union u
{
		int var;
		unsigned char str[4];
};
int main()
{
		unsigned char tmp;
		union u uObj;
		uObj.var = 4;
		tmp = uObj.str[1];
		uObj.str[1] = uObj.str[0];
		uObj.str[0] = tmp;
		printf("%d", uObj.var);
		return 0;
}

//64 Ans = -4
void f();
int main()
{
#define foo(x, y) x / y + x
		f();
}
void f()
{
		printf("%d\n", foo(-3, 3));
}

//65 Ans = Compile time error
void main()
{
		struct student
		{
				int no;
				char name[20];
		};
		struct student s;
		no = 5;
		printf("%d", no);
}

//66 Ans = Junk
void main()
{
		struct student
		{
				int no;
				char name[20];
		};
		struct student s;
		s.no = 9;
		printf("%s", s.name);
}

//67 Ans = 16
#define a 58
int main()
{
#define a 16
		printf("%d\n", a);
}

//68 Ans = struct temp
//         {
//         unsigned int a : 1;
//         }s;
What is the correct syntax to initialize bit-fields in an structure?

//69 Ans = Compile time error
struct student
{
		char *c;
		struct student *point;
};
void main()
{
		struct student s;
		struct student m;
		m.point = s;
		(m.point) -> c = "131";
		printf("%s", s.c);
}

//70 Ans = Segmentation fault/code crash
struct p
{
		char *name;
		struct p *next;
};
struct p *ptrary[10];
int main()
{
		struct p p, q;
		p.name = "114";
		p.next = NULL;
		ptrary[0] = &p;
		strcpy(q.name, p.name);
		ptrary[1] = &q;
		printf("%s\n", ptrary[1] -> name);
		return 0;
}

//71 Ans = Bye
#define SYSTEM 13
int main()
{
		int a = 13;
#if SYSTEM == a
		printf("a = %d", a);
#endif
#if SYSTEM == 13
		printf("Bye\n");
#endif
}

//72 Ans = 16
union uTemp
{
		double a;
		int b[4];
		char c;
}u;
(Assuming size of double = 8, size of int = 4, size of char = 1)

//73 Ans = Compiler Error
#define FAILURE 0
enum boo {FAILURE = 2, SUCCESS}boolean;
int main()
{
		printf("%d %d", FAILURE, SUCCESS);
}

//74 Ans = Stream status enquiries
The below functions are used for
int feof(FILE *stream);
int ferror(FILE *stream);
void clearerr(FILE *stream);
int fileno(FILE *stream);

//75 Ans = The two variables are of same type
An entire structure variable can be assigned to another structure variable if



















































































































































































































































































































































































































































































































































































































































































































































































































































































































































































































































































































































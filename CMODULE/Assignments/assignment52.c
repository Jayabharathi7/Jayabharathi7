/*
 * NAME       : JAYABHARATHI J
 * DATE       : 31.08.2022
 * DESCRIPTION: WAP TO DEFINE A MACRO SIZEOF(X), WITHOUT USING SIZEOF OPERATOR
 * INPUT      : Test Case 1:
user@emertxe] ./sizeof
Size of int : 4 bytes
Size of char : 1 byte
Size of float : 4 bytes
Size of double : 8 bytes
Size of unsigned int : 4 bytes
Size of long int : 8 bytes
----
----
----
*/


#include<stdio.h>
#define my_sizeof(type) (char*)(&type + 1)-(char*)(&type)
int main()
{
        int num;
        char ch;
        float fl;
        double db;
        long int lin;
        printf("Size of int : %zu bytes\n",my_sizeof(num));
        printf("Size of char: %zu byte\n",my_sizeof(ch));
        printf("Size of float : %zu bytes\n",my_sizeof(fl));
        printf("Size of double : %zu bytes\n",my_sizeof(db));
        printf("Size of long int : %zu bytes\n",my_sizeof(lin));
}



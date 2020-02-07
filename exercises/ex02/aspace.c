/* Example code for Think OS.

Copyright 2014 Allen Downey
License: GNU GPLv3

*/

#include <stdio.h>
#include <stdlib.h>

int var1;

void get_addr(int* add, char* name){
  printf("Address of %s is %p\n",name, add );
}

int main ()
{
    int var2 = 5;
    void *p1 = malloc(128);
    void *p2 = malloc(128);
    void *p3 = malloc(8);
    void *p4 = malloc(8);
    char *s = "Hello, World";

    printf ("Address of main is %p\n", main);
    printf ("Address of var1 is %p\n", &var1);
    printf ("Address of var2 is %p\n", &var2);
    printf ("p1 points to %p\n", p1);
    printf ("p2 points to %p\n", p2);
    printf ("p3 points to %p\n", p3);
    printf ("p4 points to %p\n", p4);
    printf ("s points to %p\n", s);

    int var3 = 29;
    get_addr( &var3, "var3");

    return 0;
}

//  4. The heap grow p2 is at a higher address

///// 5. there is only 32 bits 

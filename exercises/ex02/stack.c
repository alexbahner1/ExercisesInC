/* Example code for Think OS.

Copyright 2014 Allen Downey
License: GNU GPLv3

*/

#include <stdio.h>
#include <stdlib.h>

#define SIZE 5

int *foo() {
    int i;
    int array[SIZE];

    // printf("%p\n", array);

    for (i=0; i<SIZE; i++) {
        array[i] = 42;
    }
    return array;
}

void bar() {
    int i;
    int array[SIZE];

    // printf("%p\n", array);

    for (i=0; i<SIZE; i++) {
        array[i] = i;
    }
}

int main()
{
    int i;
    int *array = foo();
    bar();

    for (i=0; i<SIZE; i++) {
        printf("%d\n", array[i]);
    }

    return 0;
}

/// this make foo make a arrray but the array goes anyway this is problem
// it would output and fair arry of 42s 5 of them  but it wont
///warning: function returns address of local variable [-Wreturn-local-addr]
// this is beasue of what i say above to array in in the stack in foo not in main

// I got a seg fault for reason above this. Also the address is the same beacause the space opens up
// Nothing Defferint 

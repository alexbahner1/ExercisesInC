

#include <stdio.h>
#include <stdlib.h>
#include <string.h>
// #include <iostream>
int f = 0;


//this function ask for number and stores them in a array
// but if you break the peramider it will throw an error

void what_numbers(int*numplz, int buffer){
  char numbers[buffer];

  while ( fgets(numbers, sizeof(numbers), stdin) != NULL ) {
    if(atoi(numbers) == 0){
      printf("NO your bad only numbers ERROR\n");
      break;
    }
    if(numbers[strlen(numbers)-1] != '\n'){
      printf("NO your bad your number to long ERROR\n");
      break;
    }
    if( f == buffer){
      printf("NO your bad your to many numbers ERROR\n");
      break;
    }
    numplz[f] = atoi(numbers);

    f++;

  }
}

// this takes all the nums in array and sums them
int sum_it_up(int* nums){
  int sumit = 0;
  for(int i = 0; i < f; i++){
    sumit = sumit + nums[i];
  }
  return sumit;
}
// and this is main functions 
int main()
{
  int buffer = 4;
  int numarray[buffer];
  what_numbers(numarray, buffer);
  int sum = sum_it_up(numarray);
  printf("%d\n", sum);
}

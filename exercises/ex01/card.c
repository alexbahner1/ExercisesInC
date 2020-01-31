#include <stdio.h>
#include <stdlib.h>

int main(){
  char card_name[3];
  int count = 0;
  do {
    //
    // puts("Enter the card_name: ");
    // scanf("%2s", card_name);

    get_card(card_name);
    int val = what_card(card_name);
    count = card_count(val, count);
    // switch(card_name[0]){
    // case 'K':
    // case 'Q':
    // case 'J':
    //   val = 10;
    //   break;
    // case 'A':
    //   val = 11;
    //   break;
    // case 'X':
    //   continue;
    // default:
    //   val = atoi(card_name);
    //   if ((val < 1) || (val > 10)){
    //     puts("I don't understand that value!");
    //     continue;
    //   }
    // }
    //
    // if((val > 2) && (val < 7)){
    //   count++;
    // } else if (val == 10){
    //   count--;
    // }
    // printf("Current count: %i\n", count);
    //
  } while ( card_name[0] != 'X');
  return 0;
}
void get_card(char* card_name){
  puts("Enter the card_name: ");
  scanf("%2s", card_name);
}
int what_card(char* card_name){
  int val = 0;
  switch(card_name[0]){
  case 'K':
  case 'Q':
  case 'J':
    val = 10;
    break;
  case 'A':
    val = 11;
    break;
  case 'X':
    break;
  default:
    val = atoi(card_name);
    if ((val < 1) || (val > 10)){
      puts("I don't understand that value!");
      break;
    }
  }
  return val;
}
int card_count(int val, int count){
  if((val > 2) && (val < 7)){
    count++;
  } else if (val == 10){
    count--;
  }
  printf("Current count: %i\n", count);
  return count;
}


#include <stdio.h>
#include <stdlib.h>
#include <string.h>
#include  <unistd.h>

int main(int argc, char* argv[]){

  // erroe check is
  if(argc < 2){
    printf("incorrect number of args retry\n");
    return 1;
  }

  //  var being declared
  FILE *fp;
  char str[60];
  char ch;
  int appendFLAG;
  int start = 0;

  // this chaecks if you want to write of append and set the flag can add more later
  while ( (ch = getopt(argc, argv, "aw:")) != EOF) {
    switch(ch){
      case 'a':
        appendFLAG = 1;
        break;
      case 'w':
        appendFLAG = 0;
        printf("wrieting\n");
        break;
      default:
        printf("error wroung flag");
        return 1;
    }
  }

  // this ask for the line in the txt files and puts them in there
  while ( fgets(str, 60,stdin) != NULL ) {

    if(start == 0 && appendFLAG == 0){ // first time and app 0 w
      for(int i = 2; i < argc; ++i){
        fp = fopen(argv[i], "w");

        fprintf(fp,str);
        fclose(fp);
        start = 1;
      }
    }else {
      for(int i = 2; i < argc; ++i){
        fp = fopen(argv[i], "a");
        fprintf(fp,str);
        fclose(fp);
    }}
  }
  return 0;
}

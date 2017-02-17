#include <stdio.h>

main(){

  char str[20];
  int toPrint;

  while( fgets(str, 20, stdin) ){

    toPrint = a_to_i(str);

    printf("%d\n", toPrint);

    if( toPrint == 0 )
      return;
  }
}

int a_to_i(char* str){

  int finalResult = 0;
  int i = 0;

    while( str[i] != 10 ){

      int num = str[i] - '0';

      finalResult = finalResult * 10 + num;
      i++;
  }
  return finalResult;
}


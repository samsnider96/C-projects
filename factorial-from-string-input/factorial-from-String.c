#include <stdio.h>


main(){

  char str[20];
  int toFac;
  int toPrint;

  while( fgets(str, 20, stdin) ){

    toFac = a_to_i(str);

    toPrint = factorial(toFac);

    printf("%d\n", toPrint);

    if( toFac == 0 ) 
      return;
  }
}


int factorial(int n){

  if ( n >= 1 )

    return n * factorial(n-1);

  else

    return 1;

}




//  START OF LAB 8 METHOD

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

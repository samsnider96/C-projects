// C program to accept a 1-5 number as input, then output that same  number of lines of 'hello world'.

#include <stdio.h>

main(){

int r, i;

printf("Please enter a number from 1 to 5:\n");

scanf("%u", &r);

if(r > 5 || r < 1){
 printf("Number is not in the range from 1 to 5\n");
 return 0;
}

else{

 for(i = 1; i <= r; i++){
  printf("%d Hello World\n", i);
 }
return 0;
}
}

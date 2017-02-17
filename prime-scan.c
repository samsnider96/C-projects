// C program to repeatedly accept a 1-100 number as input,
// then decide and output if that number is prime.

#include <stdio.h>
#define ONE 1
#define TWO 2
#define THREE 3
#define FIVE 5
#define SEVEN 7

main(){

int r = 1;

while( r != 0 ){

printf("Number [1-100]: ?\n");

scanf("%u", &r);

//exit case
 if ( r == 0)
  break;

//one case (special case)
 if( r == ONE ){
  printf("Non-prime (special case)\n");
  continue;
 }
//two case (even number)
 if( r % TWO == 0 && r != TWO){
  printf("Non-prime, divisible by %i\n", TWO);
  continue;
 }
//three case:
 if( r % THREE == 0 && r != THREE){
  printf("Non-prime, divisible by %i\n", THREE);
  continue;
 }
//five case:
 if( r % FIVE == 0 && r != FIVE){
  printf("Non-prime, divisible by %i\n", FIVE);
  continue;
 }
//seven case:
 if( r % SEVEN == 0 && r != SEVEN){
  printf("Non-prime, divisible by %i\n", SEVEN);
  continue;
 }
 else{
  printf("Prime\n");
  continue;
 }
}
printf("Done\n");
return 0;
}

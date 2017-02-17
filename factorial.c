//computes and returns the factorial of a positive integer n,
//which is the product of all the positive integers from 1 to n.
//repeatedly: (i) reads an integer from the keyboard; 
//(ii) calls factorial() to compute its factorial; and (iii) displays the result. 
//until the user enters 0, in which case it should still print the answer (factorial(0) = 1),
//and then terminate.

#include <stdio.h>

main()
{

int inP = 13;

while(inP != 0)
//Enter a number: 1! = 1
{
  printf("Enter a number: ");
  scanf("%d", &inP);
  printf("%d! = %d\n", inP, factorial(inP));
}
//printf("1");
//return;
}

int factorial(int inP)
{
  if(inP > 0)
  {
    int out = inP * factorial(inP-1);
    return out;
  }
  else
    return 1;
}

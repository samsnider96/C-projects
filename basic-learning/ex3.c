// C program to accept a 6 hex/octal/decimal integers  as input, 
// then outputs them in a specific format, as a decimal integer..

#include <stdio.h>

main(){

int r1, r2, r3, r4, r5, r6;

printf("Enter six integers:\n");

scanf("%i %i %i %i %i %i", &r1, &r2, &r3, &r4, &r5, &r6);

printf("1234567890bb1234567890\n");
printf("%10d  %10d\n", r1, r2);
printf("%10d  %10d\n", r3, r4);
printf("%10d  %10d\n", r5, r6);

return 0;
}



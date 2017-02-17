// C program to accept a 5 floats pointnumbers as input, 
// then outputs their sum, arithmetic mean, and product to 4 decimal places.

#include <stdio.h>

main(){

float r1, r2, r3, r4, r5, sum, mean, product;

printf("Enter five floating-point numbers:\n");

scanf("%f %f %f %f %f", &r1, &r2, &r3, &r4, &r5);

sum = r1 + r2 + r3 + r4 + r5;
mean = sum / 5;
product = r1 * r2 * r3 * r4 * r5;

printf("Sum is %3.4f\n", sum);
printf("Mean is %3.4f\n", mean);
printf("Product is %3.4f\n", product);

return 0;
}


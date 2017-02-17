/* Example: bubble sort using library functions */

#include <stdio.h>  //Need for standard I/O functions
#include <string.h> //Need for various string operations

#define NUM 25   //number of strings
#define LEN 1000  //max length of each string

main()
{		//variables
  char Temp[LEN];
  char Strings[NUM][LEN];
  int i, j, k;







  printf("Please enter %d strings, one per line:\n", NUM);

 		//Write a for loop here to read NUM strings.

  			/* Use fgets(), with LEN as an argument to ensure that an input line that is too
     			long does not exceed the bounds imposed by the string's length.  Note that the
    			newline and NULL characters will be included in LEN.
  			*/

  for (i = 0; i < NUM; i++){
    fgets(Strings[i], LEN-2, stdin);
  }







		//prints the given input, before ordering

  puts("\nHere are the strings in the order you entered:");

  for (i = 0; i < NUM; i++){
    printf("%s", Strings[i]);
  }








		//bubblesort, using library unctions
  for(i = 1; i < NUM; i++){
    for(j = 1; j < NUM; j++){
			//compares
      if( strcmp(Strings[j-1], Strings[j]) > 0 ){
			//swaps
            strcpy(Temp, Strings[j-1]);
            strcpy(Strings[j-1], Strings[j]);
            strcpy(Strings[j], Temp);
    }
  }
}








		// Output sorted list

  puts("\nIn alphabetical order, the strings are:");

  for (i = 0; i < NUM; i++){
    fputs(Strings[i], stdout);
  }

  return 0;
}

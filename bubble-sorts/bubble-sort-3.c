/* Example: bubble sort using pointers */

#include <stdio.h>  /* Need for standard I/O functions */
#include <string.h> /* Need for string functions */
#include <stdlib.h> //uses the standard C library.

#define NUM 25   /* number of strings */
#define LEN 1000  /* max length of each string */

main()
{
		//variables
  char* Strings[NUM];
  char temp[LEN];
  int i, j;
  char* tP;









  printf("Please enter %d strings, one per line:\n", NUM);

		//reads NUM strings, using fgets(). 

  for (i = 0; i < NUM; i++){

		//Read one line of input into a temp string that is long enough (LEN long)

    fgets(temp, LEN, stdin);

		/* Allocate memory space for String[i] that is only large enough to copy the
      			string just read into it.  Suppose the length of the string read into
      			temp is "length", then you can use the following: */

    int length = strlen(temp);
    Strings[i] =  malloc(length + 1);        /* Plus one for the NULL at end */
    strncpy(Strings[i], temp, length+1);
    }









		//prints the given input, before ordering

  puts("\nHere are the strings in the order you entered:");

  for (i = 0; i < NUM; i++){
    printf("%s", Strings[i]);
  }








		//Bubble sort (swap using pointers)

  for(i = 0; i < NUM - 1; i++){
    for(j = i+1; j < NUM; j++){

	  		//compares
      if( strcmp(Strings[i], Strings[j]) > 0 ){

  	  		//swaps
	tP = Strings[i];
        Strings[i] = Strings[j];
	Strings[j] = tP;
      }
    }
  }








	  	//Output sorted list

  puts("\nIn alphabetical order, the strings are:");
  for (i = 0; i < NUM; i++){
    printf("%s", Strings[i]);
  }

		//Use free() to free up space allocated for all the Strings

  for (i = 0; i < NUM; i++){
    free(Strings[i]);
  }


  return 0;
}

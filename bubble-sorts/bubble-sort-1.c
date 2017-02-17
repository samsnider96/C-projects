/* Example: bubble sort not using library functions (compare and swap individual characters) */

#include <stdio.h>  // Need for standard I/O functions
#include <string.h> // Need for strlen()


#define NUM 25      //number of strings
#define LEN 1000    //max length of each string

main()
{	            //variables
  char temp1, temp2;
  char Strings[NUM][LEN];
  int i, j, t, k, diff;









  printf("Please enter %d strings, one per line:\n", NUM);

  		//Write a for loop here to read NUM strings.

  			/* Use fgets(), with LEN as an argument to ensure that an input line that is too
     			long does not exceed the bounds imposed by the string's length.
  			*/

  for (i = 0; i < NUM; i++){
    fgets(Strings[i], LEN-2, stdin);  		//the newline and NULL characters will be included in LEN.
  }






                //prints the given input, before ordering

  puts("\nHere are the strings in the order you entered:");

  for (i = 0; i < NUM; i++){
    printf("%s", Strings[i]);
  }








  		// Bubble sort (not using library functions)

        		/*(i) comparison of two strings one char at a time
       			  (ii) The swap of two strings one char at a time
		          (iii) You are allowed to use strlen() to calculate string lengths.
		        */


			//pseudocode
				//if(Strings[i-1] > Strings[i)

				//temp = Strings[i]
				//Strings[i] = Strings[i+1]
				//Strings[i+1] = temp


  for (i = 0; i < NUM - 1; i++) {
    for (t = i + 1; t < NUM ; t++) {

			//comparing

      for(j = 0;; j++){
	char one = Strings[i][j];
	char two = Strings[t][j];
	diff = one - two;

	if(one == '\n' && two == '\n'){
	  break;
	}
	if(diff == 0){
	  continue;
	}
	if(diff > 0){

			//Swapping

          for(k = 0; k < LEN; k++){
	    temp1 = Strings[i][k];
	    temp2 = Strings[t][k];
	    Strings[i][k] = temp2;
	    Strings[t][k] = temp1;
          }
	}
	break;
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

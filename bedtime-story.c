//import standard i/o and String libraries
#include <stdio.h>
#include <string.h>


//recursive function to print beadtime story using the supplied array
void bedtimestory(char words[20][15], int current, int number) {

//Add enough whitespace so that each line has more than the previous
  int i = 0;
  while(i < current){
    printf("  ");
    i++;
  }


// Print something before

//very first case
  if (current == 0)
    printf("A %s couldn't sleep, so her mother told a story about a little %s,\n", 
    words[current], words[current+1]);

//all other cases before recursion (could be multiple)
  else if (current < number - 1)
    printf("who couldn't sleep, so the %s's mother told a story about a little %s,\n", 
    words[current], words[current+1]);


// Recursive call to bedtimestory()
  if(current < number - 1)
     bedtimestory(words, current+1, number);


//Add enough whitespace so that each line has less than the previous
  i = 0;
  if(current < number - 1){
    while(i < current){
      printf("  ");
      i++;
    }
  }



// Print something after

//first line after recursive call
  if (current == number - 1)
    printf("... who fell asleep.\n");

//between lines (could be multiple)
  else if (current == 0)
    printf("... and then the %s fell asleep.\n", words[current]);

//very last line! : )
  else
    printf("... and then the little %s fell asleep;\n", words[current]);

}

main() {

//prepare variables
  char names[20][15];   // Up to 20 names, each up to 15 letters long (incl. NULL)
  char str[15];         // placeholder var to store individual strings in
  int num = 0;          // establish counter for # of strings in array


// Input loop: Read the names from the input until you read "END"
  while(num < 20){


//accepts string input from user, max 15 chars
    fgets(str, 15, stdin);


//sets newline character to '\0'
    size_t pH = strlen(str) - 1;

    if( *str && str[pH] == '\n' )
      str[pH] = '\0';


//make sure input isn't 'end'...if so, terminate input loop
    if( strcmp(str, "END") == 0)
      break;


//now can actually add temp. input holding String into the names array!
    strcpy( names[num], str );


//increment counter
    num++;

  }

//call the recursive function which does rest of the work!
  bedtimestory(names, 0, num);

}

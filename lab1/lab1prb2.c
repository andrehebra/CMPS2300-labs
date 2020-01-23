/*lab 1 prb 2
Hex verifier
*/

#include <stdio.h>
#include <stdlib.h>
#include <stdbool.h>

bool isHex(char sequence[]) {
  char validChars[16];
  bool goodSequence = true;
  bool foundMatch = false;


  sequence[10] = "a";
  for (int i = 0; i < 10; i++) {
    validChars[i] = i; 
  }
  validChars[10] = 'A'; validChars[11] = 'B'; validChars[12] = 'C'; validChars[13] = 'D'; validChars[14] = 'E'; validChars[15] = 'F';


  for (int j = 0; j < sizeof(sequence); j++) {
    for (int k = 0; k < sizeof(validChars); k++) {
      if (sequence[j] == validChars[k]) {
        foundMatch = true;
      }
    }
    if (foundMatch == false) {
      goodSequence = false;
    }
    foundMatch = false;
  }
  
  
  return goodSequence;
}

int main()
{
  char sequence[20];
  bool running = true;

  while (running) {
    printf("Enter a sequence of characters: ");
    scanf("%s", sequence);

    if (isHex(sequence)) {
      printf("Thank you!");
      running = false;
    } else {
      printf("That was not a valid input. Please try again.\n");
    }
  }
}
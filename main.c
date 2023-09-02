// Program to convert all characters in a string to their uppercase equivalent

#include <stdio.h>
#include <string.h>

// Declare Functions
void uppercase (char []);

int main(void) {

  char in[] = "Hello World!";
  
  printf ("%s\n", in);
  uppercase (in);
  printf ("%s\n", in);
  
  return 0;
}

// Define Functions
void uppercase (char input[]) {
  for (int i = 0; input[i] != '\0'; i++) {
    if ('a' <= input[i] && input[i] <= 'z')
      input[i] += 'A' - 'a';
  }
}
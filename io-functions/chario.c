#include<stdio.h>

int main() {
  char ch; // declare a variable to store stuff from the user
  printf("Enter a character\n");
  ch = getc(stdin); // take a character from stdin and assign it to the variable
  fflush(stdin); // flush the buffer for stdin
  putc(ch, stdout); // show the character to the user via stdout
  fflush(stdout); // flush the buffer for stdout
  return 0;
}

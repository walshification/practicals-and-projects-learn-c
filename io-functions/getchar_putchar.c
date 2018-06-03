#include<stdio.h>

int main() {
  char ch;
  ch = getchar(); // assumes input is coming form keyboard
  // unlike getc which is useful for reading from a file
  fflush(stdin);

  putchar(ch); // assumes you want to print to stdout
  // unlike putc which can print into a file
  fflush(stdout);

  return 0;
}

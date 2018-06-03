#include<stdio.h>

int main() {
  int n1, n2, sum;
  printf("Enter two numbers\n");
  scanf("%d%d", &n1, &n2); // get input from the user and assign it to variables
  sum = n1 + n2;
  printf("The sum is %d\n", sum);
  getchar();
  return 0;
}

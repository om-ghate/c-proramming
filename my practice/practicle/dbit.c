//write a c program to find wheather the given number is even or odd
#include <stdio.h>

int main()
{
  int a;
  printf("Enter the number \n");
  scanf("%d", &a);

  if (a%2 ==0)
  {
    printf("%d  is even\n", a);
  }
  else
  {
    printf("%d is odd", a);
  }
  return 0;
}
 
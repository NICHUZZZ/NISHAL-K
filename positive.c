#include <stdio.h>

int main(void) {
  int n;
  scanf("%d",&n);
  if(n>0)
  {
    printf("Positive");
  }
  else if(n<0)
  {
    printf("Negative");
  }
  else if(n==0)
  {
    printf("Zero");
  }
  else
  {
    printf("invalid input");
  }
  return 0;
}

#include <stdio.h>

int main(void) {
  int k;
  scanf("%d",&k);
  if(k>0)
  {
    printf("Positive");
  }
  else if(k<0)
  {
    printf("Negative");
  }
  else if(k==0)
  {
    printf("Zero");
  }
  else
  {
    printf("invalid input");
  }
  return 0;
}

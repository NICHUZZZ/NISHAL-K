#include <stdio.h>

int main(void) {
  char ch;
  scanf("%s",&ch);
  if(ch>='a'&&ch<='z')
  {
    if (ch == 'a' || ch == 'A' || ch == 'e' || ch == 'E' || ch == 'i' || ch == 'I' || ch =='o' || ch=='O' || ch == 'u' || ch == 'U')
  {
    printf("vowelll");
  }
  else
  {
    printf("consonant");
  }
  }

  else
  {
    printf("invalid");
  }
  return 0;
}

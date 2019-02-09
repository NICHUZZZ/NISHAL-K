#include <stdio.h>

int main(void) {
  char chara;
  scanf("%s",&chara);
  if(chara>='a'&&chara<='z')
  {
    if (chara == 'a' || chara == 'A' || chara == 'e' || chara == 'E' || chara == 'i' || chara == 'I' || chara =='o' || chara=='O' || chara == 'u' || chara == 'U')
  {
    printf("Vowel");
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

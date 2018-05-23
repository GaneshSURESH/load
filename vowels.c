#include <stdio.h>
#include<conio.h>
int main()
{
  char m;
  printf("Input a character\n");
  scanf("%c", &m);
  if ((m >= 'a' && m <= 'z') || (m>= 'A' &&m <= 'Z')) {
    if (m=='a' || m=='A' || m=='e' || m=='E' || m=='i' || m=='I' || m=='o' || m=='O' || m== 'u' || m=='U')
      printf("%c is a vowel.\n", m);
    else
      printf("%c is a consonant.\n", m);
  }
  else
    printf("%c is neither a vowel nor a consonant.\n", m);
  return 0;
}

#include<stdio.h>
int main(){
  char c;
  scanf("%c",&c);
  if(c>='a' && c<='z')
    printf("Alphabet small case");
  else if(c>='A' && c<='Z')
    printf("Alphabet capital case");
  else if(c>='0' && c<='9')
    printf("digit");
  else
    printf("Special character");
  return 0;
}

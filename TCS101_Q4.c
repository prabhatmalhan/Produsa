#include<stdio.h>
int main(){
  int n,d,s=0;
  scanf("%d",&n)
  d=n;
  while(d>0){
    s+=d%10;
    d/=10;
  }
  printf("Sum of digits: %d",s);
  return 0;
}

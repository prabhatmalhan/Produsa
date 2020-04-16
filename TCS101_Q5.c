#include<stdio.h>
int main(){
  int N,s1=0,s2=0;
  scanf("%d",&N);
  for(int i=1;i<=N;++i){
    if(i%2==0)
      s2+=i*i;
    else
      s1+=i*i;
  }
  printf("%d",s1-s2);
  return 0;
}

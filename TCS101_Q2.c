#include<stdio.h>
int main(){
  int hh1,hh2,hh,mm1,mm2,mm,s1,s2,ss;
  printf("\tHr Min Sec");
  printf("Time1:\t"):
  scanf("%d%d%d",&hh1,&mm1,&ss1);
  printf("Time2:\t"):
  scanf("%d%d%d",&hh2,&mm2,&ss2);
  ss=ss1+ss2;
  mm=mm1+mm2;
  hh=hh1+hh2;
  if(ss>=60){
    ss-=60;
    mm+=1;
  }
  if(mm>=60){
    mm-=60;
    hh+=1;
  }
  printf("Hr Min sec");
  printf("%d  %d  %d",hh,mm,ss);
  return 0;
}

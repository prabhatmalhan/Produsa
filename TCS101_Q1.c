#include<stdio.h>
int main(){
	int n;
	scanf("%d",&n);
	if(n>=0){
		if(n%5==0)
			printf("Area of square: %f",n*1.0*n);
		else
			printf("Area of circle: %f",22/7.0*n*n);
	}
	return 0;
}

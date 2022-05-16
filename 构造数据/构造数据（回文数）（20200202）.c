//
#include<stdio.h>
void main(){
	long x,a,b=0;
	scanf("%ld",&x);
	a=x;
	while(a!=0){
		b=b*10+a%10; 
		a/=10; 
	}
	if(x==b)
		printf("yes");
	else
		printf("no");
} 

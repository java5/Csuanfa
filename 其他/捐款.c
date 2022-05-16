#include<stdio.h>
void main(){
	int count=0;
	float sum=0,n;
	while(count<=1000 && sum<10000){
		scanf("%f",&n);
		sum+=n;
		count++;
	}
	printf("%.1f count=%d",sum,count);
} 

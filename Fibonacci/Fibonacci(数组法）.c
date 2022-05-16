#include<stdio.h>
void main(){
	long a[40]={1,1},i;
	for(i=2;i<40;i++)
		a[i]=a[i-1]+a[i-2];
	for(i=0;i<40;i++){
		if(i%5==0)
			printf("\n");
		printf("%12ld",a[i]);
	}
	
}

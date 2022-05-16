#include<stdio.h>
void main(){
	long f1=1,f2=1,next,i,count=2;
	printf("%12ld",f1);
	printf("%12ld",f2);
	for(i=3;i<=40;i++){
		next=f1+f2;
		printf("%12ld",next);
		count++;
		if(count%5==0)
			printf("\n"); 
		f1=f2;
		f2=next;
		
	}
} 

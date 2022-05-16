#include<stdio.h>
void main(){
	int i,j;
	for(i=1;i<=9;i++){
		for(j=8;j>=i;j--)
			printf(" ");
		for(j=1;j<i;j++)
			printf("%d",j);
		for(;j>=1;j--)
			printf("%d",j);
		printf("\n");
	}
} 

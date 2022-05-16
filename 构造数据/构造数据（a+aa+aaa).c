#include<stdio.h>
void main(){
	int n,i,item=0,s=0;
	scanf("%d",&n);
	for(i=1;i<=n;i++){
		item=item*10+n;
		printf("%d\n",item);
		s+=item;
	}
	printf("sum=%d",s);
} 

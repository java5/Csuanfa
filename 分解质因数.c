#include<stdio.h>
int prime(int n){
	int i;
	if(n==1)
		return 1;
	for(i=2;i<=n/2;i++)
		if(n%i==0)
			return 0;
	return 1;
}
void main(){
	int n,i=2;
	scanf("%d",&n);
	if(prime(n))
		printf("%dÎªËØÊý",n);
	else{
		while(1){
			printf("%d=",n);
			while(n%i==0){
				printf("%d",i);
				n/=i;
				if(n!=1)
					printf("*");
			}
			if(n==1){
				printf("\n");
				break;
			} 
			i++;
		}		
	}
}

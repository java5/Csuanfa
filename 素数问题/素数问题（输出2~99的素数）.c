#include<stdio.h>
#include<math.h>
int isprime(int n){
	int i;
	if(i==1)
		return 0;
	for(i=2;i<=(int)sqrt(n);i++)
		if(n%i==0) return 0;
	return 1;
} 
void main(){
	int i;
	for(i=2;i<=99;i++)
		if(isprime(i))
			printf("%d\n",i);
}

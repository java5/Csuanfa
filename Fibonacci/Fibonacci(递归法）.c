#include<stdio.h>
long fib(int n){
	if(n<=2)
		return 1;
	else
		return fib(n-1)+fib(n-2);
} 
void main(){
	int i;
	for(i=1;i<=40;i++){
		printf("%ld\n",fib(i));
	}
}

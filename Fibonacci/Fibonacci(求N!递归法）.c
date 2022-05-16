#include<stdio.h>
long fun(int n){
	if(n==0 || n==1)
		return 1;
	else
		return n*fun(n-1);
}
void main(){
	printf("%ld",fun(3));
} 

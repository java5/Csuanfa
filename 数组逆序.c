#include<stdio.h>
void fun(int a[],int n)
{
	int t,i;
	for(i=0;i<n/2;i++)
		t=a[i],a[i]=a[n-i-1],a[n-i-1]=t;
}
void main(){
	int a[10]={1,2,3,4,5,6,7,8,9,10},i;
	fun(a,10);
	for(i=0;i<10;i++)
		printf("%3d",a[i]);
}

#include<stdio.h>
int gcd(int x,int y){
	return y?gcd(y,x%y):x;
} 
void main(){
	int m,n,t,result;
	scanf("%d%d",&m,&n);
	if(m<n){
		m=m+n;   
		n=m-n;
		m=m-n;
	}
	printf("%d",gcd(m,n));
	/* �㷨һ 
	do{
		t=m%n;
		m=n;
		n=t;
	}while(t);*/
	
	//�㷨��
	/*while(n){
		t=m%n;
		m=n;
		n=t;
	}
	printf("���������%d",m);*/
} 

#include"stdio.h"
int main(){
	int m,n,num1,num2,w,t;
	scanf("%d%d",&num1,&num2);
	m=num1;
	n=num2;
	do{
		t=m%n;  //余数 
		m=n;   //将除数给被除数 
		n=t;  //将余数给除数 
	}while(t);
	/*算法二借助中间变量w 
	while(n){
		w=m%n;
		m=n;
		n=w;
	}*/ 
	
	printf("%d和%d的最大公约数为%d\n",num1,num2,m);	
	printf("%d和%d的最小公倍数为%d\n",num1,num2,num1*num2/m);
	return 0;
}

#include"stdio.h"
int main(){
	int m,n,num1,num2,w,t;
	scanf("%d%d",&num1,&num2);
	m=num1;
	n=num2;
	do{
		t=m%n;  //���� 
		m=n;   //�������������� 
		n=t;  //������������ 
	}while(t);
	/*�㷨�������м����w 
	while(n){
		w=m%n;
		m=n;
		n=w;
	}*/ 
	
	printf("%d��%d�����Լ��Ϊ%d\n",num1,num2,m);	
	printf("%d��%d����С������Ϊ%d\n",num1,num2,num1*num2/m);
	return 0;
}

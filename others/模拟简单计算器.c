#include"stdio.h"
int main(){
	float a,b; //带运算数据a,b 
	char op;  //运算符
	printf("请输入数据，形如a+b\n");
	scanf("%f%c%f",&a,&op,&b); 
	switch(op){
		case '+': printf("%.2f+%.2f=%.2f\n",a,b,a+b); break;
		case '-': printf("%.2f-%.2f=%.2f\n",a,b,a-b); break;
		case '*': printf("%.2f*%.2f=%.2f\n",a,b,a*b); break;
		case '/': printf("%.2f/%.2f=%.2f\n",a,b,a/b); break;
		default: printf("运算符有错\n");
	}
	return 0;
} 

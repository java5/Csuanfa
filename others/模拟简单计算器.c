#include"stdio.h"
int main(){
	float a,b; //����������a,b 
	char op;  //�����
	printf("���������ݣ�����a+b\n");
	scanf("%f%c%f",&a,&op,&b); 
	switch(op){
		case '+': printf("%.2f+%.2f=%.2f\n",a,b,a+b); break;
		case '-': printf("%.2f-%.2f=%.2f\n",a,b,a-b); break;
		case '*': printf("%.2f*%.2f=%.2f\n",a,b,a*b); break;
		case '/': printf("%.2f/%.2f=%.2f\n",a,b,a/b); break;
		default: printf("������д�\n");
	}
	return 0;
} 

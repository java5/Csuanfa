#include<stdio.h>
int main(){
	int monkey=1; //������
	int coconut=1; //ÿ�η�֮ǰ��Ҭ����
	int count=1;  //Ҭ������
	while(monkey<=6){
		if(coconut%5==1){
			coconut=coconut/5*4;
			monkey++;
		}else{
			count++;
			coconut=count;
			monkey=1;
		}
	} 
	printf("Ҭ����С�ĸ���Ϊ��%d",count);
	return 0;
} 

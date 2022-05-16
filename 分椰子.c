#include<stdio.h>
int main(){
	int monkey=1; //猴子数
	int coconut=1; //每次分之前的椰子树
	int count=1;  //椰子总数
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
	printf("椰子最小的个数为：%d",count);
	return 0;
} 

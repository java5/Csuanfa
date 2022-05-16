// 百元买百鸡问题（公鸡5元一只，母鸡3元一只，小鸡1元三只，100元买100只鸡）穷举法
#include"stdio.h"
int main(){
	int i,j,k;	
	for(i=0;i<=100;i++)
		for(j=0;j<=100;j++){
			k=100-i-j;
			if(15*i+9*j+k==300)
			printf("公鸡=%-6d母鸡=%-6d小鸡=%-6d\n",i,j,k);

		}					
	return 0;
} 

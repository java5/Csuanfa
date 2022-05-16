#include<stdio.h>
#include<math.h>
void main(){
	float pi=0,item=1,flag=1,i=1;
	while(fabs(item)>1e-6){
		pi+=item;
		i+=2;
		flag=-flag;
		item=1/i*flag;
	}
	printf("%f",pi*4);
} 

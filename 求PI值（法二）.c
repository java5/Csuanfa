#include<stdio.h>
#include<math.h>
void main(){
	float pi=0,item=1,i=1;
	do{
		item=1/(i*i);
		pi+=item;
		i++;
	}while(fabs(item)>1e-5);
	pi=sqrt(pi*6);
	printf("%f",pi);
	
} 

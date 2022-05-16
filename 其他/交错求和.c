#include<stdio.h>
void main(){
	int i,sign=1,sum=0,item;
	for(i=1;i<=100;i+=1){
		item=i*sign;
		if(item<0 || i==1)
			printf("%d",item);
		else
			printf("+%d",item);
		sum+=item;
		sign=-sign;
		/*¾«¼ò 
		sum+=sign*i;
		sign=-sign;*/
	} 
	printf("\nsum=%d",sum);
}

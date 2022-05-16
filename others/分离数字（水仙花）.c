/*水仙花*/
#include"stdio.h"
#include <stdio.h>
/*void main()
{
	int n1,n2,n3,i;
	for(i=100;i<=999;i++)
	{
		n1=i/100;
		n2=i%100/10;
		n3=i%10;
		if(i==n1*n1*n1+n2*n2*n2+n3*n3*n3)
			printf("%4d\n",i);
	}
}*/ 

int main(){
	int a,b,c,i;
	
	for(i=100;i<=999;i++){
		a=i/100; //百位
		b=i/10%10; //十位 or n2=i%100/10; 
		c=i%10; // 个位
		if(a*a*a+b*b*b+c*c*c==i)
			printf("%4d",i); 
	}
	
	
	
	return 0;
} 
 

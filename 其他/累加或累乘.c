#include"stdio.h"
void main(){
	int Result(int);
	int n,result=0,sign=1,i;
	long long sum=1;
	/*scanf("%d",&n);
	result=Result(n);
	printf("result=%d",result); */
	//�۳� 
	/*for(i=1;i<=6;i++){	
		sum*=sign*i;
		sign=-sign;	
		printf("sum=%d",sum); 
	}*/
	//�ۼ� 
	result=Result(100);
	printf("%d",result); 
} 

int  Result(int n){
	int i=1,sign=1,sum=0;
	while(i<=n){
		sum=sum+sign*i;
		i++;
		sign=-sign;	
	} 
	return sum;
}

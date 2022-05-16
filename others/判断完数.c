//一个数恰好等于它的因子之和，这个数就为完数
//一个数最大的因子是N/2
//求1~1000以内的完数 (注1不是完数） 
#include<stdio.h>
int pd(int n){
	int s=0,i;
	for(i=1;i<=n/2;i++) 
		if(n%i==0)
			s+=i;
	if(s==n && n!=1)
		return 1;
	else
		return 0;
} 
void main(){
	int i=1;
	for(i=1;i<=1000;i++){		
			if(pd(i)) printf("%10d",i);
	}
	
}


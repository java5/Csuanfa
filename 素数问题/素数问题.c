#include<stdio.h>
#include<math.h> 
void main(){
	int i,n;
	scanf("%d",&n);
	int temp=(int)sqrt(n);
	for(i=2;i<=temp;i++)  //��ϵ������ i<n i<=n/2 i<=sqrt(n) 
		if(n%i==0) break;
	if(n>temp) printf("%d������\n",n);
	else printf("%d��������\n",n);
} 

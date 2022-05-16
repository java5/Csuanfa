#include<stdio.h>
#include<math.h> 
void main(){
	int i,n;
	scanf("%d",&n);
	int temp=(int)sqrt(n);
	for(i=2;i<=temp;i++)  //关系可以是 i<n i<=n/2 i<=sqrt(n) 
		if(n%i==0) break;
	if(n>temp) printf("%d是素数\n",n);
	else printf("%d不是素数\n",n);
} 

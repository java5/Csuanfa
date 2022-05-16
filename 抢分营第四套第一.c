#include<stdio.h>
void main(){
	int cs,xs,n,m;
	scanf("%d%d",&cs,&xs);
	n=xs*1.1; m=xs*1.5;
	if(cs<n)
		printf("ok");
	else if(cs<m)
		printf("Exceed %.0f%%:Ticket 200",1.0*(cs-xs)/xs*100);
	else
		printf("Exceed %.0f%% license Revoked",1.0*(cs-xs)/xs*100);
		
} 

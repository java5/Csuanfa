#include<stdio.h>
#include<string.h>
#define N 3
struct person
{
	char name[20];
	int count;
}leader[3]={{"li",0},{"zhang",0},{"wang",0}};
int main(){
	int i,j;
	char leader_name[20];
	for(i=0;i<N;i++){
		scanf("%s",leader_name);
		for(j=0;j<3;j++)
			if(strcmp(leader[j].name,leader_name)==0)
				leader[j].count++;
	}
	for(i=0;i<3;i++)
		printf("%15s%5d",leader[i].name,leader[i].count);
}

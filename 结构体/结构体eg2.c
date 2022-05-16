#include<stdio.h>
typedef struct
{
	int num;char name[9];
	float score[3];
 }STU;
void  show(STU ss){
	int i;
	printf("%d",ss.num);
	printf("%s",ss.name);
	for(i=0;i<3;i++)
		printf("%9.2f",ss.score[i]);
} 
void modify(STU *ss,float a){
	int i;
	for(i=0;i<3;i++)
		ss->score[i]*=a;
}
void main(){
	STU std={1,"wangzheng",76.2,76.3,76.2};
	float a;
	scanf("%f",&a);
	modify(&std,a);
	show(std); 
}


#include"stdio.h"
#define N 3
struct aa{
	char city[10];
	float spring;
	float summer;
	float autumn;
	float winter;
	float avertem;
};
int main(){
	struct aa x[N],t;
	int i,j;
	for(i=0;i<N;i++){
		scanf("%s%f%f%f%f",x[i].city,&x[i].spring,&x[i].summer,&x[i].autumn,&x[i].winter);
		//x[i].avertem=(x[i].spring+x[i].summer+x[i].autumn+x[i].winter)/4;
	}
	for(i=0;i<N;i++)
		x[i].avertem=(x[i].spring+x[i].summer+x[i].autumn+x[i].winter)/4;
	printf("≈≈–Ú«∞\n"); 
	for(i=0;i<N;i++){
		printf("%s,%.2f,%.2f,%.2f,%.2f,%.2f\n",x[i].city,x[i].spring,x[i].summer,x[i].autumn,x[i].winter,x[i].avertem);
	}
		
	for(i=0;i<N-1;i++)
		for(j=0;j<N-1-i;j++){
			if(x[j].avertem>x[j+1].avertem){
				t=x[j];
				x[j]=x[j+1];
				x[j+1]=t;
			}
		} 
	printf("≈≈–Ú∫Û£∫\n"); 
	for(i=0;i<N;i++){
		printf("%s,%.2f,%.2f,%.2f,%.2f,%.2f\n",x[i].city,x[i].spring,x[i].summer,x[i].autumn,x[i].winter,x[i].avertem);
	}
	return 0;
} 

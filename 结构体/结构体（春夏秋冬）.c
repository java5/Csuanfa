#include<stdio.h>
#define N 3
struct city{
	char name[20];
	float chun;
	float xia;
	float qiu;
	float dong;
	float avg;
}; 
typedef struct city CITY;
void sort(CITY s[],int n){
	CITY t;
	int i,j;
	for(i=0;i<n-1;i++){
		for(j=0;j<n-i-1;j++){
			if(s[j].avg>s[j+1].avg)
				t=s[j],s[j]=s[j+1],s[j+1]=t;
		}
	}
} 
void main(){
	CITY arr[N];
	int i,j;
	for(i=0;i<N;i++){
		scanf("%s%f%f%f%f",
		arr[i].name,&arr[i].chun,&arr[i].xia,
		&arr[i].qiu,&arr[i].dong);
		arr[i].avg=(arr[i].chun+arr[i].xia+arr[i].qiu+arr[i].dong)/4.0;
	}
	sort(arr,N);
	for(i=0;i<N;i++){
		printf("%s %.2f %.2f %.2f %.2f\n",
		arr[i].name,arr[i].chun,arr[i].xia,
		arr[i].qiu,arr[i].dong,arr[i].avg);		
	}
}

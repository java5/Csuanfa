#include"stdio.h"
int main(){
	int arr[10],i,j,t;
	printf("请输入10个数:\n");
	for(i=0;i<10;i++)
		scanf("%d",&arr[i]);
	printf("排序前：\n");	
	for(i=0;i<10;i++)
		printf("%d ",arr[i]);	
	for(i=0;i<9;i++){
		for(j=0;j<9-i;j++){
			if(arr[j]<arr[j+1]){
				t=arr[j];
				arr[j]=arr[j+1];
				arr[j+1]=t;
			}
		}
	} 
	printf("排序后：\n");
	for(i=0;i<10;i++)
		printf("%d ",arr[i]);
	return 0;
} 

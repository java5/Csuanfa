#include"stdio.h"
void sort(int arr[],int n){
	int i,j,k,t;
	for(i=0;i<n-1;i++){
		k=i;
		for(j=i+1;j<n;j++){
			if(arr[k]<arr[j]){
				k=j;
			}
		}
		if(k!=i){
			t=arr[i];
			arr[i]=arr[k];
			arr[k]=t;
		}
	}
	
}

int main(){
	int arr[10];
	int i,j,k,t;
	printf("请输入10个整数：\n");
	for(i=0;i<10;i++)
		scanf("%d",&arr[i]);
	
	for(i=0;i<10;i++)
		printf("%d ",arr[i]);
	printf("\n");
	sort(arr,10);
	/*for(i=0;i<9;i++){
		k=i;
		for(j=i+1;j<10;j++){
			if(arr[k]<arr[j])
					k=j;
		}
		if(k!=i){
			t=arr[i];
			arr[i]=arr[k];
			arr[k]=t;
		}
	}*/	
	printf("the sorted numbers array :\n");
	     for(i=0;i<10;i++)  
		    printf("%d ",arr[i]);	
	return 0;
}

#include<stdio.h>
//方法二 
void main(){
	int a[3][3]={1,2,3,4,5,6,7,8,9},t;
	//转置 不允许放入其他数组当中
	//上下三角交换 
	int i,j;
	for(i=0;i<3;i++){
		for(j=0;j<i;j++)   //自己与自己不需要交换 
			t=a[i][j],a[i][j]=a[j][i],a[j][i]=t;
	}
	for(i=0;i<3;i++){
		for(j=0;j<3;j++)   //自己与自己不需要交换 
			printf("%3d",a[i][j]);
		printf("\n");
	}
}

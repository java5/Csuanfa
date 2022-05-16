#include<stdio.h>
#define ROW 3
#define COL 4
void main(){
	int a[ROW][COL]={{1,2,3,4},{5,6,7,8},{9,10,11,12}};
	int row=0,col=0,i,j;
	for(i=0;i<ROW;i++)
		for(j=0;j<COL;j++)
			if(a[row][col]<a[i][j])
				row=i,col=j;
			
	printf("%d",a[row][col]);	
	
	
} 

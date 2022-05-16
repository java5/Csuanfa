#include<stdio.h>
//
void main(){
	int n,count=0,a[10];
	printf("输入一个十进制数：\n");
	scanf("%d",&n);
	while(n){
		a[count]=n%16;  //精练 	a[count++]=n%16; 
		n/=16;
		count++;
	}
	for(count--;count>=0;count--){	 
		switch(a[count]){
			case 10: printf("%c",'A');break;
			case 11: printf("%c",'B');break;
			case 12: printf("%c",'C');break;
			case 13: printf("%c",'D');break;
			case 14: printf("%c",'E');break;
			case 15: printf("%c",'F');break;
			default: printf("%d",a[count]);
		}
	}
	
} 

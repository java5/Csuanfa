#include<stdio.h>
void main(){
	int year,month,day,s=0,flag;
	printf("请输入你的年月日\n");
	scanf("%4d/%2d/%2d",&year,&month,&day);
	if(year%4==0 && year%100!=0 || year%400==0)
		flag=1;
	else
		flag=0;
	
	switch(month){
		case 12: s+=31;
		case 11: s+=30;
		case 10: s+=31;
		case 9: s+=30;
		case 8: s+=31;
		case 7: s+=31;
		case 6: s+=30;
		case 5: s+=31;
		case 4: s+=30;
		case 3: s+=31;
		case 2: if(flag) s+=28; else s+=29;
		case 1: s+=31;
	}
	s+=day;
	printf("%d",s);
}

#include"stdio.h"
int main(){
	int year;
	printf("ÇëÊäÈëÄê·İ£º\n");
	scanf("%d",&year);
	if(year%4==0 && year%100!=0 || year%400==0)
		printf("YES");
	else
		printf("NO");
	
	return 0;
}

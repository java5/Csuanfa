#include"stdio.h"
#include"math.h"
int main(){
	double a,b,c,disc,x1,x2,p,q;   //disc存放b*b-4*a*c的值 
	scanf("%lf%lf%lf",&a,&b,&c);  //输入双精度变量格式要用“%lf” 
	disc=b*b-4*a*c;
	p=-b/(2.0*a);
	q=sqrt(disc)/(2.0*a);
	x1=p+q;
	x2=p-q; 
	printf("x1=%7.2f\nx2=%7.2f\n",x1,x2);
	return 0;
} 

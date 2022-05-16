/*13年和19年考题 
（1）写出判别一个数为素数的函数
（2）利用上面的函数，就算100-200间的全体素数和。
*/ 
#include"stdio.h"
#include<Math.h>
//注：可使用三种循环结束条件 N sqrt(n)  n/2
//使用sqrt(n)使要注意引入相应的头文件 还有循环结束条件要加上等于号 否则容易造成结果不正确  
int prime(int n){
	int i;
	for(i=2;i<=sqrt(n);i++){   
		if(n%i==0)				
			return 0;
	}
	return 1;
}

int main(){
	int i,sum=0;
	for(i=101;i<=200;i+=2){  //算法优化 素数不可能使偶数 
		if(prime(i))
			sum+=i;
	}
	printf("100-200间的全体素数和为%d",sum);
	return 0;
} 



//��2017��������⣩�жϸ����������ǲ�������
#include"stdio.h"
#include"Math.h"
int prime(int n){
	int i;
	for(i=2;i<=sqrt(n);i++){
		if(n%i==0)
			return 0;
	}
	return 1;
}

int main(){
	int n;
	printf("������һ������\n");
	scanf("%d",&n);
	if(prime(n))
		printf("%d is prime\n",n);
	else
		printf("%d is not prime\n",n);		
	return 0;
} 

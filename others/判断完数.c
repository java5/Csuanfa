//һ����ǡ�õ�����������֮�ͣ��������Ϊ����
//һ��������������N/2
//��1~1000���ڵ����� (ע1���������� 
#include<stdio.h>
int pd(int n){
	int s=0,i;
	for(i=1;i<=n/2;i++) 
		if(n%i==0)
			s+=i;
	if(s==n && n!=1)
		return 1;
	else
		return 0;
} 
void main(){
	int i=1;
	for(i=1;i<=1000;i++){		
			if(pd(i)) printf("%10d",i);
	}
	
}


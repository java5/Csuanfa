 #include<stdio.h>
void main(){
	int f1=1,f2=1,i;
	printf("%ld %ld\n",f1,f2);
	for(i=2;i<=20;i++){
		f1=f1+f2;
		f2=f2+f1;
		printf("%ld %ld\n",f1,f2);
	}
}

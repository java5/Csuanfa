#include<stdio.h>
#include<string.h>
int  del(int a[],int n){
	int i,j,k,count=0;
	k=a[0];
	for(i=1,j=1;i<n;i++){
		
		if(a[i]!=k){
			a[j++]=a[i];
			k=a[i];
		}else{
			count++;
		}
	}
	return count;
}
int  delchar(char s[]){
	int i,j,count=0;
	char k=s[0];
	for(i=1,j=1;s[i];i++){
		
		if(s[i]!=k){
			s[j++]=s[i];
			k=s[i];
		}else{
			count++;
		}
	}
	return count;
}
void main(){
	int a[10]={1,1,1,2,2,2,3,3,3,4},count;
	char s[10];
	gets(s);
	delchar(s);
	puts(s);
	//count=del(a,10);
	/*int i;
	for(i=0;i<10;i++)
		printf("%d %d",a[i],count);*/
} 

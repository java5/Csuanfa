#include<stdio.h>
#include<string.h>
void fun(char *s){
	char *p,*q,t;
	p=s;q=s+strlen(s)-1;
	while(p<q)
		t=*p,*p=*q,*q=t,p++,q--;
		
} 
void main(){
	char s[10];
	gets(s);
	fun(s);
	puts(s);
}

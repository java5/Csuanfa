#include<stdio.h>
#include<stdio.h>
int mystrlen(char *s){
	char *p=s;
	while(*p) p++;
	return p-s;	
}
void main(){
	char s[99];
	printf("please your string:");
	gets(s);
	printf("strlen=%d",mystrlen(s));
}

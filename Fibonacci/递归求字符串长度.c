#include<stdio.h>
#include<string.h>
int mystrlen(char *s){
	if(*s)
		return 1+mystrlen(s+1);
	else
		return 0;
		
} 
int mystrlen_2(char *s){
	if(*s=='\0')
		return 0;
	else
		return 1+mystrlen_2(s+1);
		
} 
void main()
{
	char s[10];
	gets(s);
	printf("%d",mystrlen_2(s));
}

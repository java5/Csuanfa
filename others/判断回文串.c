#include<stdio.h>
#include<string.h>
int fun(char *s){
	char *p,*q;
	p=s; q=s+strlen(s)-1;
	while(p<q){
		if(*p!=*q)
			return 0;
		p++,q--;
	}
	return 1;
}
int main(){
	char s[10];
	gets(s);
	if(fun(s)) printf("%s:yes\n",s);
	else printf("%s:no\n",s);
	return 0;
}

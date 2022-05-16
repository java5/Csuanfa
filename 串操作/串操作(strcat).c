#include<stdio.h>
#include<stdio.h>
void mystrcat(char *s1,char *s2){
	while(*s1) s1++;
	while(*s1++=*s2++);
}
void main(){
	char s1[99],s2[99];
	printf("please input str1\n");
	gets(s1);
	printf("please input str2\n");
	gets(s2);
	mystrcat(s1,s2);
	printf("Á¬½Óºó£º");
	puts(s1);
}


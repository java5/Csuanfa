#include<stdio.h>
#include<string.h>
void mystrcpy(char *s1,char *s2){
	while(*s1++=*s2++);
} 
void main(){
	char s1[99],s2[99];
	gets(s2);
	mystrcpy(s1,s2);
	puts(s1);
}

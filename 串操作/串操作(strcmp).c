#include<stdio.h>
#include<string.h>
int mystrcmp(char *s1,char *s2){
	while(*s1==*s2){
		if(!(*s1))  //������ȵ��������һ������'\0' 
			return *s1-*s2;
		s1++;
		s2++;
	}
	return *s1-*s2; 
}
void main(){
	char s1[99],s2[99];
	gets(s1);
	gets(s2);
	printf("%d",mystrcmp(s1,s2));
}

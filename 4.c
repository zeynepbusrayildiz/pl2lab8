#include <stdio.h>
#include <stdlib.h>
#include <string.h>

int length(char *str){
	int len=0;
	while(*str++) len++;
	return len;
}

char *copy(char *s1, char *s2){
	char *p;
	p=s1;
	while(*s2)
		*p++=*s2++;
	*p='\0';
	return s1;
}

int compare(char *s1, char *s2){
	while(*s1&&*s2&&*s1==*s2){
		s1++;
		s2++;
	}
	return *s1-*s2;
}

char *add(char *s1, char *s2){
	char *p=s1;
	while(*p++);
	while(*s2++) *p++=*s2;
	*p='\0';
	return s1;
}

int main(){
	char *text, *first, *second;
	text=(char *)malloc(100*sizeof(char));
	first=(char *)malloc(100*sizeof(char));
	second=(char *)malloc(100*sizeof(char));
	int key=1;
	printf("~~Operations~~\n1-Find Length\t2-Copy second string to first\n3-Compare two strings\t4-Add second string to first\nEnter 0 to exit, enter any operation you like:");
	while(key!=0){
		scanf("%d",&key);
		switch(key){
			case 1:
				printf("Enter your text:");
				gets(text);
				int l;
				l=length(text);
				printf("The length of your text is %d",l);
				break;
			case 2:
				printf("Enter your first string:");
				gets(first);
				printfI("Enter your second string:");
				gets(second);
				copy(first,second);
				printf("Copied string : %s",first);
				break;
			case 3:
				printf("Enter your first string:");
				gets(first);
				printf("Enter your second string:");
				gets(second);
				int result;
				result=compare(first,second);
				if(result==0) printf("These strings are the same.");
				else printf("These strings are different.");
				break;
			case 4:
				printf("Enter your first string:");
				gets(first);
				printfI("Enter your second string:");
				gets(second);
				add(first,second);
				printf("Added string : %s",first);
				break;
		}
		printf("~~Operations~~\n1-Find Length\t2-Copy second string to first\n3-Compare two strings\t4-Add second string to first\nEnter 0 to exit, enter any operation you like:");
	}
	return 0;
}

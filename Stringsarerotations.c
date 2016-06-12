#include <stdio.h>
#include <string.h>
int main(void) {
	char str1[100],*p,*q;
	char str2[100];
	scanf("%s",str1);
	scanf("%s",str2);
	p=strcat(str1,str1);
	q=strstr(p,str2);
	if(q)
	    printf("T");
	else
	    printf("F");
	return 0;
}

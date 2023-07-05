#include<stdio.h>
#include<string.h>
int main(){
	char ch1[50],ch2[50];
	gets(ch1);
	gets(ch2);
	strcat(ch1,ch2);
	printf("%s\n",ch1);
	printf("%s\n",strrev(ch1));
	printf("%d\n",strlen(ch1));
	printf("%d\n",sizeof(ch1));
	printf("%s\n",strupr(ch1));
	printf("%s\n",strlwr(ch1));
	printf("%s\n",)
	return 0;
}
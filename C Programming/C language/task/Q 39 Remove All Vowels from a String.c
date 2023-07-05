#include<stdio.h>
#include<string.h>
#include<stdlib.h>
int main(){
	char str[100];
	int i,j,len=0;
	printf("enter the string:");
	//scanf("%s",&str);
	gets(str);
	len=strlen(str);
	for(i=0;i<len;i++){
		if(str[i]=='a' || str[i]=='e' || str[i]=='i' || str[i]=='o' || str[i]=='u' || str[i]=='A' || str[i]=='E' || str[i]=='I' || str[i]=='O' || str[i]=='U'){
			for(j=i;j<len;j++){
				str[j]=str[j+1];
			}
			i--;
			len--;
		}
		str[len+1]='\0';
	}
	puts(str);
	//printf("string after deleting vowels:%s",str);
	return 0;
}
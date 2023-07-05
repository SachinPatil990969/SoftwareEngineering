#include<stdio.h>
isvowel(char c);
isconsonant(char c);
isdigit(char c);
iswhitespace(char c);

int main(){
	char str[100];
	int i,v=0,c=0,d=0,w=0;
	printf("enter the string:");
	gets(str);
	for(i=0;str[i]!=0;i++){
		v=v+isvowel(str[i]);
		c=c+isconsonant(str[i]);
		d=d+isdigit(str[i]);
		w=w+iswhitespace(str[i]);
	}
	printf("vowels:%d\n",v);
	printf("consonant:%d\n",c);
	printf("digit:%d\n",d);
	printf("white space:%d\n",w);
	return 0;
}
int isvowel(char c){
	if (c=='a' || c=='e' || c=='i' || c=='o' || c=='u' || c=='A' || c=='E' || c=='I' || c=='O' || c=='U'){
		return 1;
	}
	else{
		return 0;
	}
}
int isconsonant(char c){
	if(((c>='a' && c<='z') || (c>='A' && c>='Z')) && !isvowel(c)){
		return 1;
	}
	else{
		return 0;
	}
}
int isdigit(char c){
	if(c>='0' && c<='9'){
		return 1;
	}
	else{
		return 0;
	}
}
int iswhitespace(char c){
	if(c==' '){
	return 1;
	}
	else{
		return 0;
	}
}
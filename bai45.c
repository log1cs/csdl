#include <stdio.h>
#include <string.h>

int main () {
	char s[10000];
	printf("Xau S:");
	gets(s);
	int i,k = strlen(s);
	//doi toan bo dau cach o dau xau bang dau cham hoi
	i=0;
	while(s[i] == ' ')
	{
		s[i] = '?';
		i++;
	}
	for(i = 0;i < k - 1; i++)
	{
		if(s[i] == ' '&& s[i+1] == ' ') s[i]='?';
	}
	if(s[k - 1] == ' ') s[k-1]='?';
	
	printf("Chuan hoa S:");
	for(i = 0;i < k; i++)
	{
		if(s[i] != '?') printf("%c",s[i]);
	}
}
	
	

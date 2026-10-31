#include<stdio.h>
int main(){
	char ch;
	ch = getchar();
	if(ch<32)
	{
		printf("This is a control character\n");
	}
	else if(ch>='A'&&ch<='Z')
	{
		printf("This is a capital letter\n");
	}
	else if(ch>='a'&&ch<='z')
	{
		printf("This is a small letter\n");
	}
	else if(ch>='0'&&ch<='9')
	{
		printf("This is a digit\n");
	}
	else
	{
		printf("This is an other character\n");
	}
	return 0;
}
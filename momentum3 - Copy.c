#include<stdio.h>

main()
{
	char ch;
	printf("enter value=");
	scanf("%c",&ch);
	
	
	
	if(ch>='a'&&ch<='z')
	{
		printf("%c  is  small alfhabet,ch");
	}
	
	else if(ch>='a'&&ch<='z')
	{
		printf("%c is capital alphabet",ch);
	}
	else if(ch>='0'&&ch<='9')
	{
		printf("%c is digit",ch);
	}
	else
	{
		printf("%c is special charecter",ch);
	}
}
	

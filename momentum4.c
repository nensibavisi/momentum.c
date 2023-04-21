#include<stdio.h>

main()
{
	int a=10,b=20,c=30,d=40;
	
	if(a>b)
	{
		if (a>d)
		{
			printf("a is max");
		}
		else
		{
			printf("d is max");
		}
	}
	if(b>c)
	{
		if(b>d)
		{
			printf("b is max");
		}
		else
		{
			printf("d is max");
		}	
	}
	else
	{
		if(c>d)
		{
			printf("c is max");
		}
		else
		{
			printf("d is max");
		}
	}
	if(b>c)
	{
		if(b>d)
		{
			printf("b is max");
		}
		else
		{
			printf("d is max");
		}
	}
	else
	{
		if(c>d)
		{
			printf("c is max");
		}
		else 
		{
			printf("d is max");
		}
	}
	
	
}

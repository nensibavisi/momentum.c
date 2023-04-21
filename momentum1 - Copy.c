#include<stdio.h>

main()
{
	char day;
	printf(" m monday");
	printf("\n t tuseday");
	printf("\n w wenesday");
	printf("\n T thursday");
	printf("\n f friday");
	printf("\n s satuerday");
	printf("\n S sunday");
	printf("\n chose eny one character=");
	scanf("%c",&day);
	switch(day)
	{
		case 'm':
			printf("value of monday=");
			break;
			
		case 't':
			printf("value of tuseday=");
			break;
				
		case 'w':
			printf("value of wenesday=");
			break;
				
		case 'T':
			printf("value of thusday=");
			break;
				
		case 'F':
			printf("value of friday=");
			break;
					
		case 's':
			printf("value of satuerday=");
			break;
					
		case 'S':
			printf("value of sunday=");
			break;
			
		default:
		printf("plz enter valid day");			
		
	}
}

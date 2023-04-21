#include<stdio.h>

main()
{
	int unit,ele_bill,sr,total_ele_bill;
	printf("enter electricity unit=");
	scanf("%d",&unit);
	if(unit<=50)
	{
		ele_bill=unit*0.50;
	}
	else if(unit<=15)
	{
		ele_bill=(unit-50)*0.75+25;
	}
	else if(unit<=250)
	{
		ele_bill=(unit-150)*1.20+50;
	}
	     else if(unit-250)
	     {
	     	ele_bill=(unit-250)*1.50+25;
		 }
	     printf("%d",ele_bill);
	

}

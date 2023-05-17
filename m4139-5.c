#include<stdio.h>
int main()
{

float unit,electricity_bill,surcharge,bill;
printf("enter electricity unit=");
scanf("%f",&unit);
if(unit<=50)
{
 bill=unit*0.50;	
}
else if(unit<=150)
{
    bill=50*0.50+(unit-50)*0.75	;
}	
else if(unit<=250)
{
	bill=50*0.50+(unit-50)*0.75+(unit-100)*1.20;
}
else 
{
	bill=50*0.50+(unit-50)*0.75+(unit-100)*1.20+(unit-100)*1.50;
}
surcharge=bill*20/100;
electricity_bill=bill+surcharge;
printf("electricity_bill=%f",electricity_bill);
	
	
	
	
	
	
	
	
	
	

	
}

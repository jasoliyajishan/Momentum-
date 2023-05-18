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
    bill=(unit-50)*0.75+25	;
}	
else if(unit<=250)
{
	bill=(unit-150)*1.20+100;
}
else 
{
	bill=(unit-250)*1.50+220;
}
surcharge=bill*20/100;
electricity_bill=bill+surcharge;
printf("electricity_bill=%f",electricity_bill);












}

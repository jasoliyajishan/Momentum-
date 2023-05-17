#include<stdio.h>
#include<conio.h>
main()
{
char day;
clrscr();
printf("\nm for monday");
printf("\nt for tuesday");
printf("\nw for wednesday");
printf("\nT for thursday");
printf("\nf for friday");
printf("\ns for saturday");
printf("\nS for sunday");
printf("\nenter day=");
scanf("%c",&day);
switch(day)
{
case 'm':
	printf("monday");
	break;
case 't':
	printf("tuesday");
	break;
case 'w':
	printf("wednesday");
	break;
case 'T':
	printf("thursday");
	break;
case 'f':
	printf("friday");
	break;
case 's':
	printf("saturday");
	break;
case 'S':
	printf("sunday");
	break;


default:
	printf("plz enter proper choice");
}





getch();














	
	
	
	
	
	
	
	
}

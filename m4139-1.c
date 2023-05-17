#include<stdio.h>
main()
{
char ch;
printf("enter char");
scanf("%c",&ch);
if(ch>='a'&&ch<='z'|| ch>='A'&&ch<='Z')	
{
	
	printf("value is alphabet",ch);
}
else if(ch>='0'&&ch<='9')
{
	printf("value is digit",ch);
}
else
{
	printf("value is special character",ch);
}	
	
	
	
	
	
	

	
	

}

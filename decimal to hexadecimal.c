#include<stdio.h>
int main()
{
	long int decimal,remainder,quotient;
	int i=1,j,temp;
	char hexadecimal[100];
	printf("enter decimal number");
	scanf("%d",&decimal);
	quotient=decimal;
	while(quotient!=0)
	{
		temp=quotient%16;
		if(temp<10)
		temp=temp+48;
	    else
	    temp=temp+55;
	    hexadecimal[i++]=temp;
	    quotient=quotient/16;
	}
	printf("equivalent hexadecimal value of decimal number %d",decimal);
	for(i=i-1;j>0;j--)
	printf("%c",hexadecimal[i]);
	return 0;
}
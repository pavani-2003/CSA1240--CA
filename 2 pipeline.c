#include<stdio.h>
int main()
{
	int counter=1,num1,num2,op,res,ins,performance_measure;
	printf("enter number 1:");
	scanf("%d",&num1);
	counter=counter+1;
	printf("enter number 2:");
	scanf("%d",&num2);
	counter=counter+1;
	printf("\n 1)Addition \n 2) SUbtraction \n 3)Multiplication \n 4)division");
	scanf("%d",&op);
	switch(op){
		case1:
			printf("performing addition op");
			res=num1+num2;
			counter=counter+1;
			break;
		case2:
			printf("performing subtraction op");
			res=num1-num2;
			counter=counter+1;
			break;
		case3:
			printf("performing multliplication op");
			res=num1*num2;
			counter=counter+1;
			
			break;
		case4:
			if(num2==0)
			{
				printf("\ndenominator cant be zero");
			}
			else
			{
			printf("performing division op");
			res=num1/num2;
			counter=counter+1;
			
			break;
	}
	default:
		printf("invalid case..");
		counter+=3;
		break;
		
}
printf("result is",res);
printf("\ncycle value is :%d",counter);
printf("enter the no. instruction");
scanf("%d",&ins);
performance_measure=ins/counter;
printf("the performace measure is:%d\n",performance_measure);
return 0;
}
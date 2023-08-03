#include<stdio.h>
void main()
{
	int counter =0;
	int input;
	int num1,num2;
	int op;
	int res;
	int ins;
	int performance_measure=0;
	printf("\n enter 1st value:");
	scanf("%d",&num1);
	counter+=1;
	printf("\n enter the 2nd value:");
	scanf("%d",&num2);
	counter+=1;
	printf("\n 1)Addition \n 2) SUbtraction \n 3)Multiplication \n 4)division");
	scanf("%d",&op);
	switch(op){
		case1:
			printf("performing addition op");
			res=num1+num2;
			counter+=1;
			break;
		case2:
			printf("performing subtraction op");
			res=num1-num2;
			counter+=1;
			break;
		case3:
			printf("performing multliplication op");
			res=num1*num2;
			counter+=1;
			
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
			counter+=1;
			
			break;
	}
	default:
		printf("invalid case..");
		counter+=3;
		break;
		
}
printf("result is : %d",res);
printf("\ncycle value is :%d",counter);
printf("enter the no. instruction");
scanf("%d",&ins);
performance_measure=ins/counter;
printf(performance_measure);

}

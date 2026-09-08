#include<stdio.h>
int main()
{
	int a,b;
	char opr;
	printf("Enter first number : \n");
	scanf("%d",&a);
	printf("Enter operator (+,-,*,/) : \n");
	scanf(" %c",&opr);
	printf("Enter second number : \n");
	scanf("%d",&b);
	switch(opr)
	{
		case '+':
				printf("Addition of two number is %d",a+b);
			break;
		case '-':
				printf("Subtraction of two number is %d",a-b);
			break;
		case '*':
				printf("Multiplication of two number is %d",a*b);
			break;
		case '/':
			{
				if(b>0){	
				printf("Addition of two number is %d",a/b);}
				else 
				{
				printf("Error : Division by zero is not allowed");
				}
			}
			break;
		default:
			printf("Enter a valid operator");
	}
	return 0;
}

#include<stdio.h>
int main()
{
	int marks;
	printf("Enter marks from 1 to 100 : ");
	scanf("%d",&marks);
if(marks<=100)
{
	if(marks>=85)
	{
		printf("Grade : A");
	}
	else if(marks>=70)
	{
		printf("Grade : B");
	}
	else if(marks>=60)
	{
		printf("Grade : C");
	}
	else if(marks>=50)
	{
		printf("Grade : D");
	}
	else
	{
		printf("Fail");
	}}
else
{
	printf("Enter valid marks");
}
	
	return 0;
}

#include<stdio.h>

int main()
{
	int score;
	printf("enter your marks");
	scanf("%d",&score);
	if(score<=100 && score>=85)
	{
		printf("Grade A");
	}
	else if(score<85 && score>=70)
	{
		printf("Grade B");
	}
	else if(score<=69 && score>=55)
	{
		printf("Grade C");
	}
	else if(score<=54 && score>=40)
	{
		printf("Grade D");
	}
	else
	{
		printf("Grade F");
	}
	
}

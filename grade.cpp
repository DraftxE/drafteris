#include<conio.h>
#include<stdio.h>
void main(void)
{
	int mark;
	clrscr();
	printf("Enter mark =");
	scanf("%d",&mark);
	if(mark<=0||mark>100)printf("Score Error");
	if(mark>=80&& mark<=100) printf("Grade = 4");
	if(mark>=75&& mark<=79) printf("Grade = 3.5");
	if(mark>=70&& mark<=74) printf("Grade = 3");
	if(mark>=65&& mark<=69) printf("Grade = 2.5");
	if(mark>=60&& mark<=64) printf("Grade = 2");
	if(mark>=55&& mark<=59) printf("Grade = 1.5");
	if(mark>=50&& mark<=54) printf("Grade = 1");
	if(mark>=0&& mark<=49) printf("Grade = 0");
	getch();
}



#include<stdio.h>
#include<conio.h>
void main(void)
{
	int num,count=1;
	clrscr();
	printf("program sutkun\n");
	printf("==============\n");
	printf("Enter Sutkun : ");
	scanf("%d",&num);
	do
	{
		printf("%20d x %20d = %20d\n",num,count,count*num);
		count++;
	}
	while(count<=12);
	getch();

}

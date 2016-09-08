#include<stdio.h>
#include<conio.h>
void main(void)
{
	int num,count=1;
	clrscr();
	printf("program sutkun\n");
	printf("==============\n");
	printf("Enter Sutkun : ");
	printf("%d",&num);
	while(count<=12)
	{
		printf("%d x %d = %d\n",num,count,count*num);
		count++;
	}
	getch();
}

#include<stdio.h>
#include<conio.h>
void main(void){
	char c;
	int i,num;
	clrscr();
	printf("Program sutkun\n");
	do{
		printf("\n");
		printf("Enter Number = ");
		scanf("%d",&num);
		for(i=1;i<=12;i++)
			printf("%3d x %3d = %3d\n",num,i,num*i);
			printf("Do you want to continue? (Y/N)?");
			c=getche();
	}while(c=='Y'||c=='y')
getch();
}

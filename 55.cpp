#include<stdio.h>
#include<conio.h>
void main(void){
	int x=1;
	int sum=0;
	clrscr();
	while(x<=10){
		sum=sum+x;
		x++;
	}
	printf("Sum 1 to 10 = %d",sum);
	getch();
}

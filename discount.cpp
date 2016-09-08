#include <stdio.h>
#include <conio.h>
void main(void){
	int choice;
	float buy,discount,pay;
	printf(" Program for Discount\n");
	printf("Enter select choice 1-4 : ");
	scanf("%d",choice);
	printf("Buy : ");
	scanf("%f",&buy);
	switch(choice) {
		case 1:discount = buy*0.20;break;
		case 2:discount = buy*0.15;break;
		case 3:discount = buy*0.10;break;
		case 4:discount = buy*0;break;
		default:printf("Please select choice 1-4\n");
	}
	pay = buy-discount;
	printf("Discount = %.2f\n",discount);
	printf("Pay = %.2f\n",pay);
	getch();
}

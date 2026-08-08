#include<stdio.h>
#include<conio.h>
int main(){
	int price,qty,cost;
	printf("Enter Price: ");
	scanf("%d",&price);
	printf("Enter Quantity: ");
	scanf("%d",&qty);
	cost=qty*price;
	printf("Total Cost:%dRs",cost);
	return 0;
}

#include<stdio.h>
#include<conio.h>
int main(){
	int days,week,remaining;
	printf("Enter Days: ");
	scanf("%d",&days);
	week=(days%365)/7;
	remaining=(days%365)%7;
	printf("Total Week:%d",week);
	printf("\tRemaining Days:%d",remaining);
	return 0;
}

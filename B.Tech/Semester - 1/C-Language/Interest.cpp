#include<stdio.h>
#include<conio.h>
int main(){
	float celsius,fahreinheit;
	printf("Enter temperature in celsius: ");
	scanf("%f",&celsius);
	fahreinheit=(celsius*1.8)+32;
	printf("Temperature in Fahreinheit:%f ",fahreinheit);
	return 0;
}

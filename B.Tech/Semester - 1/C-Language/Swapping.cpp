#include<stdio.h>
#include<conio.h>
int main(){
	int num1,num2,temp;
	printf("Enter Value: ");
	scanf("%d",&num1);
	printf("Enter Value:");
	scanf("%d",&num2);
	temp=num1;
	num1=num2;
	num2=temp;
	printf("\nSwapped Values:\n");
	printf("First number:%d\n",num1);
	printf("Second number:%d",num2);
	return 0;
}

#include<stdio.h>
#include<conio.h>
int main(){
	int m1,m2,m3;
	double percent,total;
	printf("Enter Marks of Subject 1:");
	scanf("%d",&m1);
	printf("Enter Marks of Subject 2:");
	scanf("%d",&m2);
	printf("Enter Marks of Subject 3:");
	scanf("%d",&m3);
	total=m1+m2+m3;
	percent=((total)/300.0)*100.0;
	printf("Total marks obtained:%lf\n",total);
	printf("Percentage obtained:%lf\n",percent);
	return 0;
	
}

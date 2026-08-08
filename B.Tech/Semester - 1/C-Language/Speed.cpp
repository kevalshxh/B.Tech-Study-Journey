#include<stdio.h>
#include<conio.h>
int main(){
	int dis,time,spd;
	printf("Enter Distance: ");
	scanf("%d",&dis);
	printf("Enter Time: ");
	scanf("%d",&time);
	spd=dis/time;
	printf("Speed:%dKm/hr",spd);
}

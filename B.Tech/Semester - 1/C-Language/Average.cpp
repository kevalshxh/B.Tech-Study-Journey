#include<stdio.h>
#include<conio.h>
int main(){
    int rollno;
    char name[5];
    float percentage;
    printf("Enter Roll Number: ");
    scanf("%d", &rollno);
    printf("Enter Name: ");
    scanf("%s", &name);
    printf("Enter Percentage: ");
    scanf("%f", &percentage);
    printf("\n----- REPORT CARD -----\n");
    printf("Roll Number : %d\n", rollno);
    printf("Name        : %s\n", name);
    printf("Percentage  : %.2f%%\n", percentage);
    return 0;
}

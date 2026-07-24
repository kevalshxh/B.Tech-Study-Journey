#include <stdio.h>
#include <conio.h>

int main(){
    int i=0,num;
    printf("Enter a number to print its table: ");
    scanf("%d",&num);
    for(i = 1; i <= 10; i++) {         
        printf("%d x %d = %d\n", num, i, num*i);
    }   
}
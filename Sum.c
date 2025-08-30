#include<stdio.h>

int main(){
    
    int num1,num2,num3;
    printf("Enter the number 1 : ");
    scanf("%d",&num1);
    printf("\nEnter the number 2 : ");
    scanf("%d",&num2);
    num3 = num1 + num2;
    
    printf ("the sum of %d and %d is %d ",num1,num2,num3);
    return 0;

}

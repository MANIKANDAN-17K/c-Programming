#include <stdio.h>

int main(){
    float number, doubled;
    printf("Enter a floating point number :");
    scanf("%f",&number);
    doubled = number * 2;
    printf("the orginal number :  %f \n",number);
    printf("the double number : %f \n",doubled);
    
    return 0;
}

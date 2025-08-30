#include <stdio.h>

int main(){
    printf("Enter the value of n factorial :");
    int n;
    scanf("%d",&n);
    int fact = 1;
    for(int i = 1;i<=n;i++){
        fact *= i;
    }
    printf("the factorial value is %d",fact);
    return 0;
}

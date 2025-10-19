#include<stdio.h>
int reverse(int);

int main(){
    int n;
    printf("Enter the reverse for reverse ");
    scanf("%d",&n);
    printf("the reverse number is %d ",reverse(n));
    return 0;
}

int reverse(int n){
    int rev = 0;
    while(n>0){
        int digit = n%10;
        rev = rev * 10 + digit;
        n = n/10;  
    }
    return rev;
}

#include<stdio.h>
#include<stdbool.h> 

bool isPalindrome(int n);

int main() 
{
    int n;
    printf("Enter the integer for check the palidrome or not : ");
    scanf("%d",&n);
    
    if(isPalindrome(n)){
        printf("Give number is palidrome");
    }else{
        printf("Give number is not palidrome");
    }
    return 0;
    
}
bool isPalindrome(int n){
    
    int divisor = 1;
    int count = 0;
    while (n/divisor > 10){
        divisor = divisor * 10;
    }
    while (n > 0){
        int left = n / divisor;
        int right = n % 10;
        if(left != right){
            return false;
        }
        
        n = (n % divisor) / 10;
        divisor = divisor / 100;
        
        
    }
    return true;
}

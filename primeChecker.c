#include<stdio.h>
#include<stdbool.h>
#include<math.h>
bool isPrime(int);
int main(){
    int n;
    printf("Enter the value for check the number is prime or not :");
    scanf("%d",&n);
    
    if(isPrime(n)){
        printf("the give number is prime");
    }else{
        printf("the given number is not prime");
    }
    return 0;
}
bool isPrime(int n){
    if(n<2) return false;
    if(n==2) return true;
    if(n%2 == 0) return false;
    for(int i = 3;i<sqrt(n);i++){
        if(n%i==0){
            return false;
        }
    }
    return true;
}

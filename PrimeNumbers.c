#include<stdio.h>
#include<stdbool.h>
#include<math.h>

bool isPrime(int n);

int main(){
    int n;
    printf("Enter the ending value of prime number :");
    scanf("%d",&n);
    for(int i = 0;i<=n;i++){
        if(isPrime(i)){
            printf(" %d",i);
        }
    }
    return 0;
}

bool isPrime(int n){
    if(n < 2) return false;
    if(n == 2) return true;
    if(n%2 == 0) return false;
    for(int i =3;i<=sqrt(n);i+=2){
        if(n%i == 0){
            return false;
        }
    }
    return true;
}

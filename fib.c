#include<stdio.h>

int main(){
    int n;
    printf("Enter the value of n for fibonacci series :");
    scanf("%d",&n);
    int a = 0;
    int b = 1;
    int c;
    printf(" %d ",a);
    for(int i = 0;i<n;i++){
        c = a+b;
        a = b;
        b = c;
        printf(" %d ",a);
    }
    return 0;
}

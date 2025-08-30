#include <stdio.h>
#include <string.h>

int main(){
    char str[100];
    
    printf("Enter the string : ");
    scanf("%[^\n]",str);
    
    printf("You entered : \"%s\"\n",str);
    printf("Length of the string %lu character \n",strlen(str));
    
    return 0;
}

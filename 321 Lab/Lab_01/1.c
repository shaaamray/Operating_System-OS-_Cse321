#include <stdio.h>

int main(){
    int a, b;
    printf("Enter first number :");
    scanf("%d", &a);
    //printf("%d",a);
    printf("Enter second number :");
    scanf("%d", &b);
    //printf("%d", b);
    int c = 0;
    if (a>b){
        c = a/b;
        printf("%d", c);
    }
    else if (a<b){
        c = a+b;
        printf("%d", c);
    }
    else{
        c = a*b;
        printf("%d", c);
    }
}

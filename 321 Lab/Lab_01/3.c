#include<stdio.h>
int main(){
    char pass[30];
    printf("Enter a password :");
    scanf("%s", pass);
    int i;
    int upper,lower,digit,special;
    for(i = 0, upper = 0, lower = 0, digit = 0, special = 0; i <=strlen(pass)-1; i++){
        if (pass[i]>64 && pass[i]<91 && upper<=0){
            upper++;
        }
        if(pass[i]>96 && pass[i]<123 && lower<=0){
            lower++;
        }
        if(pass[i]>47 && pass[i]<57 && digit<=0){
            digit++;
        }
        if(pass[i]==95 || pass[i]==35 || pass[i]==36 || pass[i]==64 && special<=0){
            special++;
        }
    }
    if(upper <= 0){
        printf("Uppercase Character Missing ");
    }
    if(lower <= 0){
        printf("Lowercase Character Missing ");
    }
    if(digit <= 0){
        printf("Digit Missing ");
    }
    if(special <= 0){
        printf("Special Character Missing ");
    }
    if(upper >= 1 && lower >= 1 && digit >= 1 && special >= 1){
        printf("OK");
    }
}

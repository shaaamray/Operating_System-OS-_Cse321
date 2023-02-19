#include <stdio.h>
#include <string.h>
int main(){
    char str[30];
    printf("Enter a String :");
    scanf("%s", str);
    char pal[30];
    int i = 0;
    int j = 0;
    for (i = strlen(str)-1; i >= 0; i--, j++){
        pal[j] = str[i];

    }
    if (strcmp(str, pal)==0){
        printf("Palindrome");
    }
    else{
        printf("Not Palindrome");
    }
}

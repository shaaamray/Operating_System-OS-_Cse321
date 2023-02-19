#include <stdio.h>
#include <string.h>
int main(){
    char mail[100];
    printf("Enter a mail :");
    scanf("%s", mail);
    char checker[100];
    int i = 0;
    int j = 0;
    for(i = strlen(mail)-3; i <= strlen(mail)-1; i++, j++){
        checker[j] = mail[i];
    }
    //printf("%s",checker);
    char compare[] = "com";
    if (strcmp(checker, compare)==0){
        printf("Email address is outdated");
    }
    else{
        printf("Email address is okay");
    }
}

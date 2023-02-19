#include <stdio.h>
int main(){
    freopen("file.txt", "r", stdin);
    freopen("file1.txt", "w", stdout);
    char str[50];
    gets(str);
    char copy[50];
    int i, j;
    for (i = 0, j=0; i< strlen(str); i++){
        if(i>0 && str[i] == ' ' && str[i-1] == ' '){

        }
        else{
           copy[j] = str[i];
            j++;
        }
    }
    printf("%s", copy);
}

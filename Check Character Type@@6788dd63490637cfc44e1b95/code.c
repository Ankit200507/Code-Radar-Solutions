#include <stdio.h>
#include <ctype.h>
int main() {
    int ch;
    scanf("%d",&ch);
    if( ch== 'a' || ch== 'e' || ch== 'i'| ch== 'o' || ch== 'u' || ch== 'A' || ch== 'E' || ch== 'I' || ch== 'O' || ch== 'U'){
        printf("Vowel");
    }else if(isalpha(ch)){
        printf("Consonent");
    }else if(isdigit(ch)){
        printf("Digit");
    }else{
        printf("Special Character");
    }

    return 0;
}
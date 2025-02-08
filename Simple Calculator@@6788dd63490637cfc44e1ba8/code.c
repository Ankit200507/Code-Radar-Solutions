#include <stdio.h>
int main() {
    int a,b;
    char s;
    scanf("%d %d %c",&a,&b,&s);
    switch (c){
        case '+':
        printf("%d", a + b);
        break;
        case '-':
        printf("%d", a - b);
        break;
        case '*':
        printf("%d", a * b);
        break;
        case '/':
        printf("%d", a / b);
        break;
        default:
        printf("Invalid");
        break;
    }

    return 0;
}
#include <stdio.h>
int main() {
    int a:
    scanf("%d",&a);
    int b= 1<<31;
    if(a & b){
        printf("Set");
    }else{
        printf("Not Set");
    }
    return 0;
}
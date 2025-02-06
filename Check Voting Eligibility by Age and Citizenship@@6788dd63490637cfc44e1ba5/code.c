#include <stdio.h>
int main() {
    int a,b;
    scanf("%d %d",&a,&b);
    if(b==0 || a<18){
        printf("Not Eligible");
    }else{
        printf("Eligible");
    }
    return 0;
}
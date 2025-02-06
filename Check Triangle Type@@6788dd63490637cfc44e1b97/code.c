#include <stdio.h>
int main() {
    int a,b,c;
    scanf("%d %d %d",&a,&b,&b);
    if(a==b && a==c){
        printf("Eqiulateral");
    }else if(a==c || a==b || c==b){
        printf("Isosceles");
    }else{
        printf("Scalene");
    }
    return 0;
}
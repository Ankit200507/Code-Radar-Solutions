#include <stdio.h>
int main() {
    int a,b,c;
    scanf("%d %d %d",&a,&b,&b);
    if(a==b && b==c){
        printf("Eqiulateral");
    }else if(a==b || b==c || c==a){
        printf("Isosceles");
    }else{
        printf("Scalene");
    }
    return 0;
}
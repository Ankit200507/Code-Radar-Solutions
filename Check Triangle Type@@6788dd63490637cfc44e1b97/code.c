#include <stdio.h>
int main() {
    int a,b,c;
    scanf("%d %d %d",&a,&b,&b);
    if(a!=b && a!=c && b!=c){
        printf("Scalene");
    }else if((a==c && (a!=b && c!=b)) || (b==c && (b!=a && c!=a))|| (b==a && (b!=c && a!=c))){
        printf("Isosceles");
    }else{
        printf("ScaleneEqiulateral");
    }
    return 0;
}
#include <stdio.h>
#include <math.h>
int main() {
    int a,i;
    scanf("%d",&a);
    int b=1;
    if(a<=1){
        b=0;
    }else{
        for( i=2; i<=a; i++){
            if(a%i==0){
                b=0;
                break;
            }
        }
    }
    if(b){
        printf("Prime");
    }else{
        printf("Not Prime");
    }

    return 0;
}
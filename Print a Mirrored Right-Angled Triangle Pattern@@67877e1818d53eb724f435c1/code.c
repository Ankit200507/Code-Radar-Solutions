#include <stdio.h>
int main(){
    int n,j,k,i;
    scanf("%d",&n);
    for(int i=n;i>=1;i--){
        for(int j=1;j<i;j++){
            printf(" ");
        }for( int k=i; k<=n;k++){
            printf("*");
        }printf("\n");
    }return 0;
}
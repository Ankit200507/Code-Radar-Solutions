#include <stdio,h>
int main(){
    int n,j;
    scanf("%d",&n);
    for(int i=n;i>=1;i--){
        for(int j=1;j<i;j++){
            printf(" ");
        }for( int k=1; k<=j-i;k++){
            printf("*");
        }printf("\n");
    }return 0;
}
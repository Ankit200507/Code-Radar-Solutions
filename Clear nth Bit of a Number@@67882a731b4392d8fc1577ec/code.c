#include <stdio.h>
int main() {
    int a,n;
    scanf("%d %d",&a,&n);
    int cl=~(1>>n);
    int a= a & cl;
    printf("%d",a);
    return 0;
}
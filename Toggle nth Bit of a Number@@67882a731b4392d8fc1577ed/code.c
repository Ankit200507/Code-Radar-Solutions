#include <stdio.h>
int main() {
    int a,n;
    scanf("%d %d",&a,&n);
    int t=1<<n;
    a=a^t;
    printf("%d",a);
    return 0;
}
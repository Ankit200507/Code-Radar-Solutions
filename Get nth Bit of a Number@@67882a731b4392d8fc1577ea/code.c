#include <stdio.h>
int main() {
    int a,b;
    scanf("%d %d",&a,&b);
    int s= (a>>b) & 1;
    printf("%d",s);
    return 0;
}
#include <stdio.h>


int main() {
    int a,b,t;
    float res;
    scanf("%d %d %d",&a,&b,&t);
    res =(float)(a+b+t)/3;
    printf("Average: %.2f",res);
    return 0;
}
#include<stdio.h>
int main(){

    int n,a=1,b=0,c,count=1;
    scanf("%d",&n);
    printf("%d %d ",b,a);
    for (int i = 3; i <= n; i++)
    {
        c = (a+b);
        printf("%d ",c);
        b=a;
        a=c;
    }
    return 0;
}
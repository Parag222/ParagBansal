#include<stdio.h>
#include<math.h>
int main(){
    int sum=0,a=0,n;
    scanf("%d",&n);
    int k= log10(n);
    k++;
    int b=n;
    while (n>0)
    {
        a = n%10;
        sum += pow(a,k);
        n = n/10;
    }
    if (sum==b)
    {
        printf("Armstrong");
    }
    else
    {
        printf("not armstrong");
    }
    return 0;
}
#include<stdio.h>
int main(){
    int n,m,max,min;
    scanf("%d %d",&n,&m);
    if (n>m)
    {
        max=n;
        min=m;
    }
    else
    {
        max=m;
        min=n;
    }
    for (int i = max; ; i++)
    {
        if (i%max==0 && i%min==0)
        {
            printf("%d is the LCM",i);
            break;
        }   
    }
    return 0;
}
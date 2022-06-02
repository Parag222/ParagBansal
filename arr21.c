#include<stdio.h>
int main(){
    int n,p;
    scanf("%d",&n);
    int a[n];
    for (int i = 0; i < n; i++)
    scanf("%d",&a[i]);
    printf("enter the position from where you want to right rotate\n");
    scanf("%d",&p);
    for (int i = p; i <= n; i++)
    {
        int j,last = a[n-1];
        for (j = n-1; j >=0; j--)
        {
            a[j]=a[j-1];
        }
        a[0]=last;
    }
    for (int i = 0; i < n; i++)
    printf("%d",a[i]);
return 0;
}
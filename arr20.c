#include<stdio.h>
int main(){
    int n,p;
    scanf("%d",&n);
    int a[n];
    for (int i = 0; i < n; i++)
    scanf("%d",&a[i]);
    printf("enter the position from where you want to left rotate\n");
    scanf("%d",&p);
    for (int i = 0; i < p; i++)
    {
        int j,first = a[0];
        for (j = 0; j < n-1; j++)
        {
            a[j]=a[j+1];
        }
        a[j]=first;
    }
    for (int i = 0; i < n; i++)
    printf("%d",a[i]);
    
        
return 0;
}
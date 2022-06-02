#include<stdio.h>
int main(){
    int n,m,e,p;
    printf("enter size of array");
    scanf("%d",&n);
    int a[n];
    printf("enter no. of elements in array");
    scanf("%d",&m);
    for (int i = 0; i < m; i++)
    {
        scanf("%d",&a[i]);
    }
    printf("enter the element and its position");
    scanf("%d %d",&e,&p);
    for (int i = m-1; i>=p; i--)
    {
        a[i+1]=a[i];
    }
    a[p]=e;
    m++;
    for (int i = 0; i < m; i++)
    {
        printf("%d",a[i]);        
    }   
    return 0;
}
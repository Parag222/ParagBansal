#include<stdio.h>
int main(){
    int n,m,p;
    printf("enter size of array");
    scanf("%d",&n);
    int a[n];
    printf("enter no. of elements in array");
    scanf("%d",&m);
    for (int i = 0; i < m; i++)
        scanf("%d",&a[i]);
    printf("enter the position");
    scanf("%d",&p);
    a[p]=0;
    for (int i = p; i<m-1; i++)
    {
        a[i]=a[i+1];
    }
    m--;
    for (int i = 0; i < m; i++)
        printf("%d ",a[i]);    
    return 0;
}
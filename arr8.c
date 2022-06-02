#include<stdio.h>
int main(){
    int n,m;
    printf("enter size of array");
    scanf("%d",&n);
    int a[n],b[n];
    printf("enter no. of elements in array");
    scanf("%d",&m);
    for (int i = 0; i < m; i++)
        scanf("%d",&a[i]);
    for (int j = 0; j < m; j++)
        {
            b[j]=a[j];
        }
    for (int i = 0; i < m; i++)
        printf("%d ",b[i]);
    return 0;
}
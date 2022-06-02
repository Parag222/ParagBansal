/*WAP to print all the elements of 2-D array with help of pointer */
#include<stdio.h>
int main(){
    int n;
    scanf("%d",&n);
    int arr[n][n];
    int (*p)[n];
    p=arr;
    for (int i = 0; i < n; i++)
    {
        for (int  j = 0; j < n; j++)
        {
            scanf("%d",&p[i][j]);
        }
    }
    for (int i = 0; i < n; i++)
    {
        for (int j = 0; j < n; j++)
        {
            printf("%d ",p[i][j]);
        }
        printf("\n");
    }
return 0;
} 
/*WAP to print all the elements of 2-D array with help of pointer */

#include<stdio.h>
int main(){
    int *p,n;
    scanf("%d",&n);
    int arr[n][n];
    for (int i = 0; i < n; i++)
    {
        for (int  j = 0; j < n; j++)
        {
            scanf("%d",&arr[i][j]);
        }
    }
    for (int i = 0; i < n; i++)
    {
        for (int j = 0; j < n; j++)
        {
            p = &arr[i][j];
            printf("%d ",*p);
        }
        printf("\n");
    }      
return 0;
}
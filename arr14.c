#include<stdio.h>
int main(){
    int n,m;
    printf("enter size of array");
    scanf("%d",&n);
    int a[n];
    printf("enter no. of elements in array");
    scanf("%d",&m);
    for (int i = 0; i < m; i++)
        scanf("%d",&a[i]);

    for (int i = 0; i < m; i++)
    {
        for (int j = 0; j < m; j++)
        {
            if (i!=j)
            {
                if (a[i]==a[j])
                {
                   a[j]=0;
                   m--;
                   for (int k=j; k < m; k++)
                   {
                       a[k]=a[k+1];
                   }
                   
                }   
            }
        }
    }
    for (int i = 0; i < m; i++)
    {
        printf("%d ",a[i]);
    }
return 0;
}
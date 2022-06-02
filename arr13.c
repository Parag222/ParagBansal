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
    int count=0;
    for (int i = 0; i < m; i++)
    {
        for (int j = 0; j < m; j++)
        {
            if (i!=j)
            {
                if (a[i]==a[j])
                {
                    count++;
                    a[j]=0;
                    m--;
                    for (int k=j; k < m; k++)
                    {
                        a[k]=a[k+1];
                    }
                    break;
                }   
            }
        }
    }
    
    printf("%d ",count);
    
return 0;
}
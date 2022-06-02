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
        int count = 0;
        for (int j = 0; j < m; j++)
        {
            if (i!=j)
            {
                if (a[i]==a[j])
                {
                   count+=1; 
                }   
            }
        }
        if (count==0)
        {
            printf("%d",a[i]);
        }   
    }
return 0;
}

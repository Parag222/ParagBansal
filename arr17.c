#include<stdio.h>
int main(){
    int n,j=0,k=0;
    scanf("%d",&n);
    int arr[n],even[n],odd[n];

    for (int i = 0; i < n; i++)
    scanf("%d",&arr[i]);    
    for (int i = 0; i <n; i++)
    {
        if (arr[i]%2==0)
        {
            even[j]=arr[i];
            j++;
        }
        else
        {
            odd[k]=arr[i];
            k++;
        } 
    }
    for (int i = 0; i < j; i++)
        printf("%d",even[i]);
        printf("\n");
    for (int i = 0; i < k; i++)
        printf("%d",odd[i]);

return 0;
}
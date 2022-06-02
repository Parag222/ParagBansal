#include<stdio.h>
int main(){
    int n,eve=0,od=0;
    scanf("%d",&n);
    int arr[n];
    for (int i = 0; i < n; i++)
    {
        scanf("%d",&arr[i]);
    }
    for (int i = 0; i < n; i++)
    {
        if (arr[i]%2==0)
        {
            eve +=1;
        }
        else{
            od +=1;
        }
    }
    printf("%d\n",eve);
    printf("%d",od);
    return 0;
}
#include<stdio.h>
int main(){
    int n,a;
    scanf("%d",&n);
    int arr[n];
    for (int i = 0; i < n; i++)
    scanf("%d",&arr[i]);

    printf("enter the element you want to search\n");
    scanf("%d",&a);
    for(int i = 0; i < n; i++)
    {
        if (arr[i]==a)
        {
            printf("it is at %d position\n",i+1);

        }   
    }
return 0;
}
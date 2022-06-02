#include<stdio.h>
int main(){
    int n,l;
    scanf("%d",&n);
    l=(n/2)+1;
    printf("%d\n",l);
    for (int i = 1; i <= n; i++)
    {
        for (int j = 1; j <= l; j++)
        {
            printf("*");   
        }  
        printf("\n");  
    }
    return 0;
}
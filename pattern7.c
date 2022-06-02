#include<stdio.h>
int main(){
    int n,a,b;
    scanf("%d",&n);
    if (n%2==0)
    {
        printf("This pattern for even no. is not possible");
    }
    else
    {
        a=(n/2)+1;
        b=a;
        for (int i = n; i >=1; i--)
        {
            for (int j = 1; j <=i; j++)
            {
                if (i>=a)
                {
                    printf("*");
                }
                else
                {
                    printf("%d",(n-b));
                }
            }   
        printf("\n");        
        }
    }    
    return 0;
}
#include<stdio.h>
int main(){
    int m1,m2;
    printf("enter no. of elements in array1 and array2\n");
    scanf("%d",&m1);
    scanf("%d",&m2);
    int a[m1],b[m2];
    int c[m1+m2];
    printf("enter elements in array1\n");
    for (int i = 0; i < m1; i++)
        scanf("%d",&a[i]);   
    printf("enter elements in array2\n");    
    for (int i = 0; i < m2; i++)
        scanf("%d",&b[i]);   

    for (int i = 0; i < m1; i++)
    {
        c[i]=a[i];
        if (i==(m1-1))
        {
            for (int j = 0; j < m2; j++)
            c[m1+j]=b[j];
        }
    }        
    for (int i = 0; i < m1+m2; i++)
    {
        printf("%d",c[i]);
    }      
return 0;
}
#include<stdio.h>
int main(){
    int a;
    printf("enter value of numbers: ");
    scanf("%d",&a);
    switch (a%2==0)
    {
    case 0:
    printf("odd");
        break;
    case 1:
    printf("even");
        break;
    }
    return 0;
}
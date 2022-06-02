#include<stdio.h>
int main(){
    int a,b;
    char ch;
    printf("Enter the value of operation to be performed:");
    scanf("%c",&ch);
    printf("enter the value of two numbers:");
    scanf("%d",&a);
    scanf("%d",&b);
    switch (ch)
    {
    case '+':{
        printf("%d",(a+b));
        break;
    }
    case '-':{
        printf("%d",(a-b));
        break;
    }
    
    case '*':{
        printf("%d",(a*b));
        break;
    }
    case '/':{
        printf("%d",(a/b));
        break;
    }
    return 0;
    }
}
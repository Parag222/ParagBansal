#include<stdio.h>
int main(){
    char a,b;
    printf("enter the char value :");
    scanf("%c",&a);
    if ((a>='a' && a<='z') || (a>='A' && a<='Z')){
        b = a;
        switch (b)
    {
    case 'a':
    case 'e':
    case 'i':
    case 'o':
    case 'u':
    case 'A':
    case 'E':
    case 'I':
    case 'O':
    case 'U':
    printf("vowels");
        break;
    default:
    printf("consonants");
        break;
    }
        }
    else{
        printf("enter char value");   
    }
    return 0;
}
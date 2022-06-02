#include<stdio.h>
int main(){
    int a=5,b=6,c;
    int *p=&a,*q=&b;
    c = *p;
    *p = *q;
    *q = c;
    printf("%d\n",*p);
    printf("%d",*q);
return 0;
}
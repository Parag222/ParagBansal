#include<stdio.h>
int main(){
    int a=10,x,*p;
    p=&a;
    printf("%d ,%d\n",x,p);
    x=(*p)++;
    printf("%d ,%d\n",x,p);
    x=*p++;
    printf("%d ,%d\n",x,p);
    x=*(p++);
    printf("%d ,%d\n",x,p);
    x=*(++p);
    printf("%d ,%d\n",x,p);
    x=++*p;
    printf("%d ,%d\n",x,p);
    x=++(*p);
    printf("%d ,%d\n",x,p);
    x=*++p;
    printf("%d ,%d",x,p);
return 0;
}
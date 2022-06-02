// #include<stdio.h>
// int main(){
//     int *p,*q,n;
//     scanf("%d",&n);
//     int a[n];
//     p = &a[0];
//     q = &a[n-1];
//     for (int i = 0; i < n; i++)
//     {
//         scanf("%d",&a[i]);
//     }
//     for ( int *i = q; i >= p; i--)
//     {
//         printf("%d",*i);
//     }
// return 0;
// }
#include<stdio.h>
int main(){
    int *p,*q,n;
    scanf("%d",&n);
    int a[n];
    p = &a[0];
    q = &a[n-1];
    for (int i = 0; i < n; i++)
    {
        scanf("%d",&a[i]);
    }
    while (q>=p)
    {
        printf("%d",*q);
        q--;
    }
return 0;
}
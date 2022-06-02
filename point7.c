
#include <stdio.h>
  
int main()
{
  
    
    int(*a)[5];
  
    int b[5] = { 1, 2, 3, 4, 5 };
  
    int i = 0;
  
    // Points to the whole array b
  
    a = &b;
    for (i = 0; i < 5; i++){
        printf("%d\n",(a+i));
    }
    return 0;
}
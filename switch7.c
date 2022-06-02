#include<stdio.h>
#include<math.h>
int main(){
    float a,b,c;
    float root1,root2,img;
    float D;
    printf("enter values of a,b,c of quadratic eqn(a^2x + bx +c =0)");
    scanf("%f %f %f",&a,&b,&c);
    D = (b*b)-(4*a*c);
    switch (D>0)
    {
    case 1:
    root1 = (-b + sqrt(D))/(2*a); 
    root2 = (-b - sqrt(D))/(2*a);
    printf("two distinct roots of the quadratic equation are %0.2f and %0.2f \n",root1,root2); 
        break;
    
    case 0:
    switch (D<0)
    {
    case 1:
    root1 = root2 = -b / (2 * a);
    img = (sqrt(-D))/2*a;
    printf("two distinct roots are " );
        break;
    case 0:
    root1 = root2 = -b/(2*a);
    printf("Two equal and real roots exists: %.2f and %.2f ",root1,root2);
    }
    }
    return 0;
}
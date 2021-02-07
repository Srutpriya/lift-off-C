#include<stdio.h>
int main()
{
    int r,d,c,a;
    printf("Enter the radius of the circle=\n");
    scanf("%d",& r);
    d=2*r;
    printf("Diameter of the circle=%d\n",d);
    c=2*3.14*r;
    printf("Circumferece of the circle=%d\n",c);
    a=3.14*r*r;
    printf("Area of the circle=%d",a);
    return 0;
}
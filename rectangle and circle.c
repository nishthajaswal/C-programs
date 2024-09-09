#include <stdio.h>
int main()
{
    float l,b,r,ca,cc,ra,rp;
    printf("Enter length of the rectangle:");
    scanf("%f",&l);
    printf("Enter breadth of the rectangle:");
    scanf("%f",&b);
    printf("Enter radius of the circle:");
    scanf("%f",&r);
    ra= l*b;
    rp= 2*(l+b);
    ca=(22/7)*r*r;
    cc= 2*22/7*r;
    printf("Area of rectangle is: %f\n",ra);
    printf("Perimeter of rectangle is: %f\n",rp);
    printf("Area of circle is:%f\n",ca);
    printf("Circumference of circle is:%f\n",cc);
    return 0;
}
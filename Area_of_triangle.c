#include<stdio.h>
#include<math.h>
int main()
{
    int a,b,c,sp,area;
    printf("enter first side of triangle:");
    scanf("%d",&a);
    printf("enter second side of triangle:");
    scanf("%d",&b);
    printf("enter third side of triangle:");
    scanf("%d",&c);
    sp=(a+b+c)/2;
    area= sqrt(sp*(sp-a)*(sp-b)*(sp-c));
    printf("area of the triangle:%d\n",area);
    return 0;
}
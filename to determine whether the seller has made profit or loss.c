#include<stdio.h>
int main()
{
    int cp,sp,p,l;
    printf("Enter cost price of an item:");
    scanf("%d",&cp);
    printf("Enter selling price of an item:");
    scanf("%d",&sp);
    p=(sp-cp);
    l=(cp-sp);
    if (p>0)
    printf("The seller made a profit of rs:%d\n",p);
    if(l>0)
    printf("The seller made a loss of rs:%d\n",l);
    if(p==0)
    printf("There is no loss,no profit\n");
    return 0;
}
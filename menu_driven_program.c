#include<stdio.h>
int main()
{
  int a,b,choice;
  float c,d;
  while(choice!=5)
  {
    printf("\n--------------------------");
    printf("\n        menu");
    printf("\n1.add two number");
    printf("\n2.substract two number");
    printf("\n3.multiply two number");
    printf("\n4.divide two number");
    printf("\n5.break");
    printf("\n----------------------------");
    printf("\nenter your choice:");
    scanf("%d",&choice);
    switch(choice)
    {
      case(1):
        printf("\nenter two numbers");
        scanf("%d%d",&a,&b);
        printf("\naddition of two number is %d",a+b);
        break;
      case(2):
        printf("\nenter two numbers");
        scanf("%d%d",&a,&b);
        printf("\nsubstraction of two number is %d",a-b);
        break;
      case(3):
        printf("\nenter two numbers");
        scanf("%d%d",&a,&b);
        printf("\nmultiplication of two number is %d",a*b);
        break;
      case(4):
        printf("\nenter two numbers");
        scanf("%f%f",&c,&d);
        printf("\ndivision of two number is %f",c/d);
        break;
      case(5):
        break;

      default:
        printf("\nwrong choice");
        break;
    }
  }
  return 0;
}
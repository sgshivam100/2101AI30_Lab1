#include<stdio.h>
void add(int a,int b)
{
    printf("Sum of %d and %d=%d",a,b,a+b);
}
void sub(int a,int b)
{
    printf("subtraction of %d and %d=%d",a,b,a-b);
}

void multi(int a,int b){
    printf("Product of %d and %d=%d",a,b,a*b);
}

void div(float a,float b)
{
    printf("Division of %f by %f=%f",a,b,a/b);
}
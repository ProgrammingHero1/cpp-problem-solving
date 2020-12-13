//Find and fix error(s) in the following program

#include<stdio.h>
struct num{
    float x;
};

int main()
{
    struct num num1,num2,num3;
    num1.x=54.50;
    num2.x=45.50;
    num3=num1+num2;
    printf("%f\n",num3);
    return 0;
}

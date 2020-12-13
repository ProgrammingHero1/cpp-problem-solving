#include<stdio.h>
int main()
{
    //Pointer is a variable which holds the address of other variable
    int num=10;
    int *p;
    
    p=&num;
    printf("*p = %d\n",*p);
    printf("Value of p is %p\n",p);
    
    return 0;
}

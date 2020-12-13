#include<stdio.h>

void swap(int *x, int *y)
{
    int t;
    t=*x;
    *x=*y;
    *y=t;
}

int main()
{
    int x=10, y=20;
    printf("Before swapping: x is %d and y is %d\n\n",x,y);
    swap(&x,&y);
    printf("After swapping: x is %d and y is %d\n",x,y);
    
    return 0;
}

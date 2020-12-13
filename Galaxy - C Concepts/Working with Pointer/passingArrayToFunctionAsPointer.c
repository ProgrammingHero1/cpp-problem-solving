#include<stdio.h>
void printing(int *x)
{
    printf("%d\n",*x);
}

int main()
{
     int i, arr[] = {4,5,3,7,10,1,2,9,8,6};
     for(i=0;i<10;i++)
     {
         //Passing addresses of array elements into function*
         printing(&arr[i]);
     }

     return 0;
}

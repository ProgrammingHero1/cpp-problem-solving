//Write down the exact output of this program without running it
//If you think this program won't run, just simply mention it.

#include <stdio.h>
int main()
{
    int var=999;
    int *ptr2;
    int **ptr1;
    ptr2=&var;
    ptr1=&ptr2;
    printf("Value of var = %d\n",var);
    printf("Value of var using single pointer = %d\n",*ptr2);
    printf("Value of var using double pointer = %d\n",**ptr1);
    
  return 0;
}

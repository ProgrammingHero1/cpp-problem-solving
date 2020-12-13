#include<stdio.h>
int main()
{
    int *num_i;
    double *num_d;
    float *num_f;
    char *ch_c;
    
    printf("Address of the integer variable of this program is: %p\n",num_i);
    printf("Address of the double variable of this program is: %p\n",num_d);
    printf("Address of the float variable of this program is: %p\n",num_f);
    printf("Address of the character variable of this program is: %p\n",ch_c);
    
    return 0;
}

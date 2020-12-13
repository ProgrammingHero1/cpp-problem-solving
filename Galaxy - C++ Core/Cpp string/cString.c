#include<stdio.h>

int main()
{
    char string1[] = "Bangladesh";
    char string2[100];
//    {'B', 'a', 'n', 'g', 'l', 'a', 'd', 'e', 's', 'h'};

    printf("%s\n", string1);
    printf("Enter your name: ");
    // if you use scanf() then you can't insert space(' ') in the string. that's why gets() is used
    gets(string2);
    printf("Your name: %s", string2);

    return 0;
}

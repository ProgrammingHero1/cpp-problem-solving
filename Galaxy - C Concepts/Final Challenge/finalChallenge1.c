#include<stdio.h>
struct Point
{
   int x=20, y=220;
};
  
int main()
{
    //Despite assigning values (x=20, y=220) inside the structure named "Point"
    //Why can't we print the desired output?
    //Explain and fix.
   struct Point point1;
   printf ("x = %d, y = %d", point1.x, point1.y);
  
   return 0;
}

#include <stdio.h>
int gcd(int x, int y);
int main()
{
   int x, y, hcf, lcm;
   printf("Enter 2 numbers:\n");
   scanf("%d %d", &x, &y);
   hcf = gcd(x, y);
   printf("GCD: %d", hcf);
   printf("\nLCM: %d", (x * y) / hcf);
   return 0;
}
int gcd(int x, int y)
{
   if (y == 0) 
   {
      return x;
   }
   else 
   {
      return gcd(y, x % y); 
   }
}
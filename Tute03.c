/*Exercise 3 - Repetition

Write a C program to calculate the sum of the numbers from 1 to n.
Where n is keyboard input.

e.g.

n -> 100
sum = 1+2+3+....+ 99+100 = 5050

n -> 1-
sum = 1+2+3+...+10 = 55 */

#include <stdio.h>
int main()
{
  int i, j;
  int sum=0, s=0, n=6;
  for(int i=1; i<n; i++)
    {
      for(int j=1; j<i; j++)
        {
          s+=j;
        }
      sum+=s;
    }
  printf("The sum of natural numbers upto %d is %d", n, sum);
  return 0;
}
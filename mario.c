#include <stdio.h>
#include <cs50.h>


int n;
int main(void)
{
  do
     { n = get_int("Width: ");
     
     
     }
    while (n <1 || n >8);
  for(int i=0;i<n;i++)
  
  {int m= i;
  for(int k=n-m;k>1;k--)
  {
      printf(" ");
  }
      for(int j=0;j<=m;j++)
      {
          printf("#");
      }printf("  ");
      for(int l=0;l<=m;l++)
      {
          printf("#");
      }printf("\n");
  }
  
}
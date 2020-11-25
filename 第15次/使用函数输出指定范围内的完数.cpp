
#include <stdio.h>

int factorsum( int number );
void PrintPN( int m, int n );

int main()
{
    int m, n;

    scanf("%d %d", &m, &n);
    if ( factorsum(m) == m ) printf("%d is a perfect number\n", m);
    if ( factorsum(n) == n ) printf("%d is a perfect number\n", n);
    PrintPN(m, n);

    return 0;
}

int factorsum( int number )
{
      int i=1,sum=1;
      if(number==1)
         return 1;
      for(i=2;i<number;i++)
      {
        if(number%i==0)
          sum=i+sum;
      }
      return sum;
}
void PrintPN( int m, int n )
{
  int i,j,k=0,flag=1;
  for(i=m;i<=n;i++)
      {    
        flag=1;
        if(factorsum(i)==i)
        {    
            k=1;
            if(i==1)
              printf("%d = 1",i);
            for(j=1;j<i;j++)
            {
              if(i%j==0)
              {
                    if(flag==1)
                    {
                      printf("%d = %d",i,j);
                      flag=0;
                     }
                    else
                      printf(" + %d",j);
              }
            }
          printf("\n");
        }
  }
  if(k==0)
    printf("No perfect number\n");
    
}

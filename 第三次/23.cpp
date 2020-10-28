#include<stdio.h>
int main(void)
{
    int a,b,c,d,x;
    a=3;
    b=5;
    c=6;
    d=4;
    if(a<b)
      if(c<d)x=1; 
    else 
        if(a<c)
            if(b<d)x=2; 
            else x=3; 
        else x=6; 
else x=7; 

    return 0;
}

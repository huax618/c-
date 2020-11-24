#include <stdio.h>
 
int main() 
{
    int n,x;
    int flag = 0;
    scanf("%d%d", &n, &x);
    int a[n];
    for (int i=0; i<n; i++)
	{
        scanf("%d", &a[i]);
        if (a[i] == x) 
		{
            printf("%d", i);
            flag = 1;
        }
    }
    if (flag == 0) 
	{
        printf("Not Found");
    }
    
    return 0;
}

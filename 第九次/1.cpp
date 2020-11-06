 #include<stdio.h>
 int main()
 {
 	int sum,i,n;
 	sum=1;
	for(i=0;i<10;i++)
	{
    scanf("%d",&n);
    	if(n%2==0)
		{
        	sum*=n;
    	}
	}
	printf("%d",sum);

	return 0;
  } 



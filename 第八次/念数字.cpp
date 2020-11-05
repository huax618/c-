#include<stdio.h>
int main(){
	int n,a;
	int cnt=0;
	int i=0;
	int j=0;
	scanf("%d",&n);
	int n1=n;
	if(n<0){
		printf("fu ");
		n=-n;
		n1=-n1;
	}else if(n==0){
		printf("ling");
	}else{
		;
	}
	while(n>0){
		n=n/10;
		cnt++;
	}
	//printf("%d\n",cnt);
	int x=cnt;
	//printf("%d\n",x);
	int m[x];
	for(i;i<x;i++){
		m[i]=0;
	}
	//printf("%d%d%d",m[0],m[1],m[2]);
	do{
		a=n1%10;
		m[x-1]=a;
		x--;
		n1=n1/10;
	}while(n1>0);
	//printf("%d%d%d",m[0],m[1],m[2]);
	//printf("cnt%d\n",cnt);
	//printf("x%d\n",x);
	//printf("i%d\n",i);
	for(j;j<cnt;j++){
		int n2=m[j];
		//printf("j%d",j);
		if(j>0&&j<cnt){
			printf(" ");
		}
	switch(n2){
		case 0:
		printf("ling");
		continue;
		case 1:
		printf("yi");
		continue;
		case 2:
		printf("er");
		continue;
		case 3:
		printf("san");
		continue;
		case 4:
		printf("si");
		continue;
		case 5:
		printf("wu");
		continue;
		case 6:
		printf("liu");
		continue;
		case 7:
		printf("qi");
		continue;
		case 8:
		printf("ba");
		continue;
		case 9:
		printf("jiu");
		continue;

	}
	}
	return 0;
}

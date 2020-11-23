#include <stdio.h>
int main(){
	int x;
	int fen5,fen2,fen1,total,sum;
	int count=0;
	scanf("%d",&x);
	if(x>8&&x<100){
		for(fen5=x/5;fen5>0;fen5--){
			for(fen2=x/2;fen2>0;fen2--){
				for(fen1=x;fen1>0;fen1--){
					if(5*fen5+2*fen2+fen1==x){
						count++;
						total=fen5+fen2+fen1;
						printf("fen5:%d, fen2:%d, fen1:%d, total:%d\n",fen5,fen2,fen1,total);
						total=0;
					}
				}
			}
		}
	}
	printf("count = %d",count);
	return 0;
} 


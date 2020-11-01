#include<stdio.h>
int main()
{
	int h24,m24,h12,m12;
	scanf("%d:%d",&h24,&m24);
	if(h24>12){
		h12= h24-12;
		m12= m24;
		printf("%02d:%02d PM",h12,m12);
	}else{
		if(h24==12){
				if(m24==0){
					printf("%02d:%02d AM",h24,m24);
				}
			else {
				printf("%02d:%02d PM",h24,m24);
			}
	}
}
	return 0;
}

#include<stdio.h>
int main()
{
	int i,n,count=0,sum=0;
	double ave;
	int a[10]; //��������ҪΪ����
	scanf("%d",&n);
	if(n>10||n<1) printf("Invalid.");
	else{ //������Ų���ʡ������
		for(i=0;i<n;i++){ //i��0��ʼ��
		scanf("%d",&a[i]); //������Ԫ����������
		sum=sum+a[i];
	}
	ave=1.0*sum/n;
	printf("%.2f\n",ave);
	for(i=0;i<n;i++){
		if(a[i]>ave){
			printf("%d ",a[i]);
			count++;
		}
	}
	if(count==0) printf("\n");
	}
	return 0;
}

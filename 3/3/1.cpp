#define _CRT_SECURE_NO_WARNINGS 1
#include<stdio.h>
int main(void){
	int n, i, count = 0;

	scanf("%d", &n);
	if (n > 2100 || n <= 2000)
		printf("Invalid year!");
	else if (n > 2000 && n <= 2100){
		for (i = 2001; i <= n; i++){
			if ((i % 4 == 0 && i % 100 != 0) || (i % 400 == 0)){
				count = 1;
				printf("%d\n", i);
			}
		}
		if (count == 0)
			printf("None");

		return 0;
	}
}

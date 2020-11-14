/*ÈçÊäÈë12345£¬Êä³ö1,2,3,4,5*/
#include"stdio.h"
int main()
{
    int pows=1,number,number2;
    scanf("%d",&number);
    number2=number;
    while(number2){
        pows=pows*10;
        number2=number2/10;
 
    }
    pows=pows/10;
    while(number){
        printf("%d\n",number/pows);
        number=number%pows;
        pows=pows/10;
    }
    return 0;
 
}

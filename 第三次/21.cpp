#include<stdio.h>
main()
{
    char ch;
    printf("press a key and then press enter:");
    ch=getchar();
    ch=ch-32;
    printf("%c,%d\n",ch,ch);
}

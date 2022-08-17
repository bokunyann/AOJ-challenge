#include<stdio.h>
int main(void)
{
    int d,l;
    scanf("%d %d",&d,&l);
    int jmp;
    jmp=d/l+d%l;
    printf("%d\n",jmp);
    return 0;
}
#include<stdio.h>
int main(void)
{
    int l1,l2,l3,l4;
    scanf("%d\n%d\n%d\n%d",&l1,&l2,&l3,&l4);
    int sum=l1+l2+l3+l4;
    int m,s;
    m=sum/60;
    s=sum%60;
    printf("%d\n%d\n",m,s);

    return 0;
}
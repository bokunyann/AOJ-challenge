#include<stdio.h>
int main(void)
{
    int a,b,c,d,e;
    scanf("%d\n%d\n%d\n%d\n%d",&a,&b,&c,&d,&e);
    int t;
    if(a<0) t=b*e+d-a*c;
    else t=(b-a)*e;
    printf("%d\n",t);

    return 0;
}
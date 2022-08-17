#include<stdio.h>
int main(void)
{
    int m,f,b;
    scanf("%d %d %d",&m,&f,&b);
    if(b>m+f) printf("NA\n");
    else if(m>=b) printf("0\n");
    else printf("%d\n",b-m);
    return 0;
}
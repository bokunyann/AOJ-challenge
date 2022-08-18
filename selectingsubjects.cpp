#include<stdio.h>
int main(void)
{
    int p,c,b,d,h,g;
    scanf("%d\n%d\n%d\n%d\n%d\n%d",&p,&c,&b,&d,&h,&g);
    int total;
    if(p>=d && c>=d && b>=d && g>=h) total=p+c+b+g;
    else if(p>=d && c>=d && b>=d && h>=g) total=p+b+c+h;
    else if(p>=b && c>=b && d>=b && g>=h) total=p+c+d+g;
    else if(p>=b && c>=b && d>=b && h>=g) total=p+c+d+h;
    else if(p>=c && b>=c && d>=c && g>=h) total=p+b+d+g;
    else if(p>=c && b>=c && d>=c && h>=g) total=p+b+d+h;
    else if(c>=p && b>=p && d>=p && g>=h) total=c+b+d+g;
    else total=c+b+d+h;

    printf("%d\n",total);

    return 0;    
}
#include<stdio.h>
int main(void)
{
    int w,h;
    char c;
    int i,j;
    scanf("%d %d %c",&w,&h,&c);
    for(i=1;i<=h;i++)
    {
        for(j=1;j<=w;j++)
        {
            if(i==1 && j==1) printf("+");
            else if(i==1 && j==w) printf("+");
            else if(i==h && j==1) printf("+");
            else if(i==h && j==w) printf("+");
            else if(i==1 || i==h) printf("-");
            else if(j==1 || j==w) printf("|");
            else if(i==(h+1)/2 && j==(w+1)/2) printf("%c",c);
            else printf(".");
        }
        printf("\n");
    }
    //printf("\n");

    return 0;
}
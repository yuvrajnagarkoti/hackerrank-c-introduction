#include <stdio.h>
#include <string.h>
#include <math.h>
#include <stdlib.h>

int main()
{
    int a,b,sf,sd;
    float x,y,di,df;
    scanf("%d %d",&a,&b);
    scanf("%f %f",&x,&y);
    sd=a+b;
    sf=x+y;
    di=a-b;
    df=x-y;
    printf("%d %d\n",sd,sf);
    printf("%.1f %.1f",di,df);
    return 0;
}

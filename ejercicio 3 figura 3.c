#include <stdio.h>
#include <math.h>
int main()
{
    float l,pt,at,h;
    l=7;
    h=sqrt(pow(l,2)+pow(l,2));
    at=(l*l)*4.5;
    pt=(l*8)+3*h;
    printf("el pt es de:%f\n",pt);
    printf("el at es de:%f",at);
    return 0;
}

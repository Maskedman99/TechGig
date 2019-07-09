#include <stdio.h>
#include <stdlib.h>

void main()
{
    int b,c,si;
    double a,si1;

    scanf("%lf", &a);
    scanf("%d", &b);
    scanf("%d", &c);

    si1 = (a*b*c)/100;
    si = si1;

    if(si1 - si > 0.5)
        si += 1;

    printf("%d", si);

    exit(0);

}
#include <stdio.h>
#include <stdlib.h> 

void main()
{
    int n, k, d, sum = 0;

    scanf("%d", &n);
    d = n;

    while(n>0)
    {
        k = n%10;
        n = n/10;
        k = k*k*k;

        sum += k;
    }

    if(d == sum)
        printf("True");
    else
        printf("False");

    exit(0);    
}
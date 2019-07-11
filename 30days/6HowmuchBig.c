#include <stdio.h>
#include <stdlib.h>

void main()
{
    int n,i;
    scanf("%d", &n);

    for(i=0; n>0; i++)
        n = n/10;

    printf("%d", i);
    exit(0);    
}
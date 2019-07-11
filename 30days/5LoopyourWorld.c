#include <stdio.h>
#include <stdlib.h>

void main()
{
    int n,f=1;
    scanf("%d", &n);

    for(int i=1; i<=n; i++)
        f = f*i;

    printf("%d", f);
    exit(0);    
}
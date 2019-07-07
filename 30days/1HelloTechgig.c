#include <stdio.h>
#include <stdlib.h>

void main()
{
    char s[10000];

    fgets(s,10000,stdin);
    printf("Hello Techgig\n");
    printf("%s", s);
    
    exit(0);
}
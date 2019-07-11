#include<stdio.h>
#include<stdlib.h>

void main()
{
    int a,b,n = 0;
    scanf("%d", &a);
    scanf("%d", &b);

    for(int i=a; i<b; i++)
    {
        for(int j=2; j<i; j++)
        {
            if(i%j == 0)
                break;
            if(j == i-1)
                n += 1;
        }
    }

/*      Wrong Output given in the 1st Test Case so    
    if(a==1 && b==20)
    {
        printf("7");
        exit(0);
    }
*/
    if(a<2)         // 2 is a prime number
        n += 1;

    printf("%d", n);
    exit(0);
}
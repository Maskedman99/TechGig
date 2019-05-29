#include<stdio.h>
#include<stdlib.h>

int T,k;
long int r, c, R[100000], C[100000];

void split()
{
    long int i, j;
    for(i=0; i<r; i++)
    {
        long int sum = 0;
        for(j=0; j<c; j++)
        {
            if(R[i] > sum)
            {
                if(C[j] > 0)
                {
                    C[j] -= 1;
                    sum += 1;
                }
            }    
            else
                break;
                       
            if(j == c-1)
                if(R[i] != sum)
                {
                    printf("NO\n");         
                    return;  
                }    
        }
    }

    printf("YES\n");
}

void sumfunc()
{
    long int i, rsum = 0, csum = 0;
    for(i=0; i<r; i++)
        rsum += R[i];
    for(i=0; i<c; i++)
        csum += C[i];

    if(rsum != csum)
        printf("NO\n");
    else
        split();    //  3x3, 3 0 0, 3 0 0  and 3x1, 2 1 0, 3 can't form the matrix.
        
}

void main()
{
    scanf("%d",&T);
    for(k=0; k<T; k++)
    {
        long int i, rsum, csum;     
        scanf("%ld",&r);
        scanf("%ld",&c);

        for(i=0;i<r;i++)
            scanf("%ld", &R[i]);
        for(i=0;i<c;i++)
            scanf("%ld", &C[i]);

        sumfunc();

    }

    exit(0);
}

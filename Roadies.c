#include<stdio.h>
#include<stdlib.h>

int T,N;
long int A[105];

int check(int B[10], int n)
{
    for(int i=0; i<10; i++)
        if(n == B[i])
            return 0;                   // 0 => is present => False 
    return 1;                           // 1 => is not present => True
}

void digit(int B[10], int*  Btop, long int n)
{
    long int temp = n;
    while(n > 0)
    {
        temp = n % 10;
        if(check(B, temp))
        {
            B[*Btop] = temp; 
            *Btop += 1;
        }
        n = n/10;                
    }
}

int sumfunc(int n)
{
    int B[10],i, boolean, Btop = 0;
    long int temp = 0, sum = 0; 

    for(i=0; i<10; i++)
        B[i] = -1;

    for(i=n;i<N;i++)
        {
            temp = A[i];
            boolean = 1;
            while(temp > 0)
            {
                int x = check(B, temp%10);
                temp = temp/10;
                boolean *= x; 
            }
            if(boolean)
            {
            sum += A[i];
            digit(B, &Btop, A[i]);
            }
        }
    for(i=0;i<n;i++)
        {
            temp = A[i];
            boolean = 1;
            while(temp > 0)
            {
                int x = check(B, temp%10);
                temp = temp/10;
                boolean *= x; 
            }
            if(boolean)
            {
            sum += A[i];
            digit(B, &Btop, A[i]);
            }
        }    
    return sum;
}

void main()
{
    int k,i;

    scanf("%d",&T);
    for(k=0; k<T; k++)
    {    
        scanf("%d",&N);
        for(i=0; i<N; i++)
            scanf("%ld", &A[i]);
        long int sum = 0, temp = 0;

        for(i=0; i<N; i++)
        {
            temp = sumfunc(i);
            if(temp > sum)
                sum = temp;
        }        
        printf("%ld\n", sum);    

    }

    exit(0);
}
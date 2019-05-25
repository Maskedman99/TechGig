#include<stdio.h>
#include<stdlib.h>

void main()
{
    int T, n, V[1001], P[1001], i, j, temp;
    scanf("%d", &T);

    for(int k=0; k<T; k++)
    {
        scanf("%d", &n);
        for(i=0;i<n;i++)
            scanf("%d", &V[i]);
        for(i=0;i<n;i++)
            scanf("%d", &P[i]);

        //Bubble Sort
        for(i = 0; i < n-1; i++)          
            for(j = 0; j < n-i-1; j++)
            {  
                if(V[j] > V[j+1])
                {
                    temp = V[j];
                    V[j] = V[j+1];
                    V[j+1] = temp;
                } 
                if(P[j] > P[j+1])
                {
                    temp = P[j];
                    P[j] = P[j+1];
                    P[j+1] = temp;
                }    
            }

        for(i=0;i<n;i++)
            if(V[i] >= P[i])
                break;

        if(i==n)           
            printf("WIN\n");
        else
            printf("LOSE\n");
            
    }

    exit(0);
}

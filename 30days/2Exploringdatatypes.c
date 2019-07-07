#include <stdio.h>
#include <stdlib.h>

void main()
{
    char s[10000],str[10000];
    double d;
    int i;

    fgets(s,10000,stdin);

    if(sscanf(s,"%lf", &d) == 1)
    {
        i = (int)d;
        if (d-i != 0)  
            printf("This input is of type Float.");         
        else 
            printf("This input is of type Integer."); 
    }

    else if (sscanf(s, "%s", str) == 1)      
        printf("This input is of type string."); 
      
    else     
        printf("This is something else."); 

    exit(0);
}
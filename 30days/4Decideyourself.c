#include<stdio.h>
#include<stdlib.h>

void main()
{
    int age;

    scanf("%d", &age);

    if(age<10)
        printf("I am happy as having no responsibilities.");
    else if(age>=10 && age<18)
        printf("I am still happy but starts feeling pressure of life.");
    else
        printf("I am very much happy as i handled the pressure very well.");

    exit(0);    
           
}
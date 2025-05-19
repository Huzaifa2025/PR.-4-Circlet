// Develop a program that prints the given Floyd's tringle pattern
// using a nested for loop.

#include<stdio.h>

int main()
{
    int i , j;
    int t = 11;

    for(i=0 ; i<=3 ; i++)
    {
        for (j=1 ; j<=i+1 ; j++)
        {
            printf("%d ",t);
            t++;
        }

        printf("\n");
        
    }
    return 0;
}
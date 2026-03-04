#include<stdio.h>

int main()
{
    char table[3][3] =
    {
        {'E','T',' '},
        {'T','F',' '},
        {'F','i',' '}
    };

    int i,j;

    printf("Predictive Parsing Table\n");

    for(i=0;i<3;i++)
    {
        for(j=0;j<3;j++)
            printf("%c ",table[i][j]);
        printf("\n");
    }

    return 0;
}
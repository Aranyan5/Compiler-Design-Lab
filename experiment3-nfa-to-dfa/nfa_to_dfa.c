#include<stdio.h>

int main()
{
    int nfa[10][2],dfa[10][2];
    int states,i,j;

    printf("Enter number of states: ");
    scanf("%d",&states);

    printf("Enter NFA transition table (for 0 and 1):\n");

    for(i=0;i<states;i++)
    {
        printf("State %d:\n",i);
        for(j=0;j<2;j++)
            scanf("%d",&nfa[i][j]);
    }

    printf("\nDFA Transition Table\n");

    for(i=0;i<states;i++)
    {
        for(j=0;j<2;j++)
        {
            dfa[i][j]=nfa[i][j];
            printf("%d ",dfa[i][j]);
        }
        printf("\n");
    }

    return 0;
}
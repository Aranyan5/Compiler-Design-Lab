#include<stdio.h>
#include<string.h>

int main()
{
    char re[20];
    int i,state=0;

    printf("Enter Regular Expression: ");
    scanf("%s",re);

    printf("\nState Transitions\n");

    for(i=0;i<strlen(re);i++)
    {
        if(re[i]=='|')
            printf("Union operator detected\n");
        else if(re[i]=='*')
            printf("Kleene Closure on state %d\n",state);
        else
        {
            printf("q%d --%c--> q%d\n",state,re[i],state+1);
            state++;
        }
    }

    printf("\nStart State: q0");
    printf("\nFinal State: q%d\n",state);

    return 0;
}
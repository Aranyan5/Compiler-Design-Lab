#include<stdio.h>
#include<string.h>

int main()
{
    char nt,alpha[20],beta[20];

    printf("Enter Non-terminal: ");
    scanf(" %c",&nt);

    printf("Enter recursive production part: ");
    scanf("%s",alpha);

    printf("Enter non-recursive production part: ");
    scanf("%s",beta);

    printf("\nGrammar after removing left recursion\n");

    printf("%c -> %s%c'\n",nt,beta,nt);
    printf("%c' -> %s%c' | ε\n",nt,alpha,nt);

    return 0;
}
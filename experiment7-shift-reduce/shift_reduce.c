#include<stdio.h>
#include<string.h>

char stack[50],input[50];
int top=-1,i=0;

void push(char c)
{
    stack[++top]=c;
    stack[top+1]='\0';
}

int main()
{
    printf("Enter input string: ");
    scanf("%s",input);

    printf("\nSTACK\tINPUT\tACTION\n");

    while(input[i]!='\0')
    {
        push(input[i]);
        printf("%s\t%s\tSHIFT\n",stack,input+i);
        i++;
    }

    printf("%s\t\tACCEPT\n",stack);

    return 0;
}
#include<stdio.h>
#include<ctype.h>
#include<string.h>

char keywords[][10] = {
"auto","break","case","char","const","continue","default","do","double",
"else","enum","extern","float","for","goto","if","int","long","register",
"return","short","signed","sizeof","static","struct","switch","typedef",
"union","unsigned","void","volatile","while"};

int isKeyword(char *word)
{
    for(int i=0;i<32;i++)
        if(strcmp(word,keywords[i])==0)
            return 1;
    return 0;
}

int main()
{
    char str[200],buffer[50];
    int i=0,j=0;

    printf("Enter a C statement:\n");
    fgets(str,200,stdin);

    while(str[i]!='\0')
    {
        if(isalnum(str[i]))
            buffer[j++]=str[i];
        else
        {
            if(j!=0)
            {
                buffer[j]='\0';

                if(isKeyword(buffer))
                    printf("%s -> Keyword\n",buffer);
                else if(isdigit(buffer[0]))
                    printf("%s -> Constant\n",buffer);
                else
                    printf("%s -> Identifier\n",buffer);

                j=0;
            }

            if(strchr("+-*/=%",str[i]))
                printf("%c -> Operator\n",str[i]);
        }
        i++;
    }
    return 0;
}
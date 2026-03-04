#include<stdio.h>
#include<string.h>

char production[10][10];

int main()
{
    int n,i;

    printf("Enter number of productions: ");
    scanf("%d",&n);

    printf("Enter productions (Example E=TR)\n");

    for(i=0;i<n;i++)
        scanf("%s",production[i]);

    printf("\nFIRST sets\n");

    for(i=0;i<n;i++)
        printf("FIRST(%c) = { %c }\n",production[i][0],production[i][2]);

    printf("\nFOLLOW sets\n");

    for(i=0;i<n;i++)
        printf("FOLLOW(%c) = { $ }\n",production[i][0]);

    return 0;
}
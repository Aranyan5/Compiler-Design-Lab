#include<stdio.h>

int main()
{
    char leading[10],trailing[10];
    int i,n;

    printf("Enter number of elements: ");
    scanf("%d",&n);

    printf("Enter LEADING set elements\n");
    for(i=0;i<n;i++)
        scanf(" %c",&leading[i]);

    printf("Enter TRAILING set elements\n");
    for(i=0;i<n;i++)
        scanf(" %c",&trailing[i]);

    printf("\nLEADING = { ");
    for(i=0;i<n;i++)
        printf("%c ",leading[i]);
    printf("}\n");

    printf("TRAILING = { ");
    for(i=0;i<n;i++)
        printf("%c ",trailing[i]);
    printf("}\n");

    return 0;
}
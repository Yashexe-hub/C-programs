#include <stdio.h>
int main()
{
    char i[50], j[50], k[50];

    printf("Enter first name\t");
    scanf("%s", i);
    printf("Enter middle name\t");
    scanf("%s", j);
    printf("Enter last name\t");
    scanf("%s", k);

    printf("Full name is %s\t%s\t%s\t",i, j, k);
    return 0;
}
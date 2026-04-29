#include<stdio.h>

int main()
{
    char arr[6] = {'H','E','L','L','O','\0'};
    char brr[] = {'H','E','L','L','O','\0'};
    char crr[] = "Hello";
    
    printf("%s\n",arr);
    printf("%s\n",brr);
    printf("%s\n",crr);

    return 0;
}
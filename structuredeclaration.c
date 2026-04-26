#include<stdio.h>

// Declaration

    struct Demo
    {
        
        int i;   //4 bytes
        float f; //4 bytes
    };           //8 bytes

int main()
{
    struct Demo dobj;

    printf("%d\n",sizeof(dobj));
    return 0;
}

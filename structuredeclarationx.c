#include<stdio.h>

// Declaration
#pragma pack(1)
    struct Demo
    {
        
        int i;   //4 bytes
        char ch;
        float f; //4 bytes
    };           //8 bytes

int main()
{
    struct Demo dobj;

    printf("%d\n",sizeof(dobj)); // 9
    return 0;
}

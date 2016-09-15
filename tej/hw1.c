#include "hw1.h"
char reverse_string(char *str,int length)
{ 
    char destarr[20];
    char *dst_ptr= destarr;

    int i = 0;
    int j = 0;
    
    for (i=length-1; i>=0; i--)
    {
        *dst_ptr++ = *(str+i);
    }

    dst_ptr-=length;

    for (j=0;j<100;j++)
    {
        destarr[j] = *dst_ptr++;
    }

    destarr[j] = '\0';
    
    printf("Dest Array is %s\n", destarr);

    return 0;
}


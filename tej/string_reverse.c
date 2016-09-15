#include <stdio.h>
#include <stdlib.h>
#include <string.h>

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


void main()
{
    char src_array[] = "Does it reverse \n\0\t correctly";
    char ret_status;   
 
    printf("Src Array is %s\n", src_array);

    ret_status = reverse_string(src_array, strlen(src_array));
    if (ret_status != 0)
    { 
        printf("Reverse String failure\n");
    }
    else
    {
        printf("Reverse string success\n");
    }
}


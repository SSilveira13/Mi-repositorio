#include <stdio.h>
#include <stdlib.h>

int main()
{
    /*
    int a=15;
    int *b=NULL;
    b=&a;
    printf("%p\n",b);
    b++;
    printf("%p\n",b);
    printf("%d\n",*b);
    *b=22;
    printf("%d\n",*b);
    */


    int i,vec[5],*ptr;
    ptr=vec;
    for(i=0;i<5;i++)
    {
        //vec[i]=(i+1);
        *(ptr+i)=(i+1);
    }
    for(i=0;i<5;i++)
    {
        //printf("%d\n",vec[i]);
        printf("%d\n",*(ptr+i));
    }




    return 0;
}

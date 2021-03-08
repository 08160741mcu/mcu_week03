#include <stdio.h>

int main(int argc,char** argv)
{
    printf("now argc is :$d\n",argc);
    for(int i = 0;i < argc;i++)
    {
        printf("argv[%d] is :%s\n",i,argv[i]);
    }
}

#include<stdio.h>
#include<stdlib.h>
void main()
{
    FILE* harsh;
    harsh=fopen("2darray.c","r");
    if(harsh==NULL)
    {
        printf("Couldnt open file!");/*1.File doesnot exist.
                                        2.Permission not granted*/

    }
    else exit(1);
}
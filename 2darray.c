#include<stdio.h>
void main()
{
    int arr[3][4]={1,2,3,4,5,6,7,8,9,10,11,12};
    for(int j=0;j<3;j++){
        for(int i=0;i<4;i++)
    {if(i<3) printf("%d,",*(*(arr+j)+i));
       else printf("%d",*(*(arr+j)+i));
    }
    printf("\n");
    }
    

}
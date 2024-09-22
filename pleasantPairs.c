#include<stdio.h>
int main()
{
    int t;
    scanf("%d",&t); 
    int count=0;
    for(int i=0;i<t;i++)
    {
        int n;
        scanf("%d",&n);
        int a[n];
        for(int i=0;i<n;i++)
        {
            scanf("%d",&a[i]);
        }
        int count=0;
         for(int i=0;i<n;i++){
             for(int j=i+1;j<n;j++){
                if(i<j && a[i]*a[j]==i+j+2)
                {
                    count++;
                    
                }
                 
             }

         }
         printf("%d\n",count);
     
    }
       
}

    

    
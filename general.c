#include<stdio.h>
int main()
{
    int n;
    scanf("%d",&n);
   int height[n];
    for(int i=0;i<n;i++)
    {
      scanf("%d",&height[i]);
    }
    int max_h=height[0];
    int max_h_ind=0;
     int min_h=height[0];
  int min_h_ind=0;
    for(int i=0;i<n;i++)
    {
        {
            if(height[i]>=height[i+1]) {max_h=height[i];     
                                      max_h_ind=i;}
                                      //  min_h=height[i+1];
                                      //   min_h_ind=i+1;}
           

             if(height[i]<height[i+1]) { max_h=height[i+1];
                   max_h_ind=i+1;}
                  //  min_h=height[i];
                  //  min_h_ind=i;}
        }
    }   
    printf("%d\n%d",max_h,min_h);
    // if(max_h_ind-min_h_ind>0) printf("%d",n-2-min_h_ind+max_h_ind);
    // if(max_h_ind-min_h_ind<0) printf("%d",n-1-min_h_ind+max_h_ind);
    return 0;
}
   
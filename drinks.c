 #include<stdio.h>
 int main()
 {
    int n;
    scanf("%d",&n);
   int p[n];
    for(int i=0;i<n;i++)
    {scanf("%d",&p[i]);}
    float sum=0;
     for(int i=0;i<n;i++){
        sum+=p[i];
     }
     float avg=sum/n;
    printf("%f",avg);
 }
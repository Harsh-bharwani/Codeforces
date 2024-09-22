#include <stdio.h>
#include <string.h>

int main() {
    int t;
   
    scanf("%d", &t);
    for (int  i = 0; i < t; i++) {
         int n;
        scanf("%d", &n);
        long long int a[n];
        for (int i = 0; i < n; i++) {
            scanf("%lld", &a[i]);
        }
        int countR=0,countB=0,sumR=0,sumB=0;
         for(int i=0;i<n/2;i++)
         { for( int i = 0; i < n; i++) {
            if(n%2==0){
             countR=n/2 -1;
             countB=n/2 +1;
             if(a[i]>a[i+1]) {
                               a[i+1]=a[i] +a[i+1];
                              a[i]=a[i+1]-a[i];
                              a[i+1]=a[i+1]-a[i];}
            }
            else   { countR=n/2;
             countB=n/2 +1;
             if(a[i]>a[i+1]) {a[i+1]=a[i] +a[i+1];
                              a[i]=a[i+1]-a[i];
                              a[i+1]=a[i+1]-a[i];}
             }}}
            for(int i=n-1;i>n/2;i--){
                sumR+=a[i];
            }
            for(int i=0;i<=n/2;i++){
                sumB+=a[i];
            }
        if(sumR>sumB) printf("YES\n");
        else  printf("NO\n"); 
       
    }
   
}

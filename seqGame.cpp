#include<iostream>
#include<cstring>
using namespace std;
int main(){
    int t;
    cin>>t;
    for(int i=0;i<t;i++){
        int n;
        cin>>n;
        int b[n];
        for(int j=0;j<n;j++){
            cin>>b[j];
        }
        int a[2*n];
        a[0]=b[0];
        for(int j=1;j<n;j++){
         if(b[j]>=b[j-1])
         a[j]=b[j];
         else{
            a[j]=b[j]-1; 
            a[j+1]=b[j];
            j++;
         }
        }
        // int k=0;
        // while(a[k]!='\0')
        for(int k=0;k<2*n;k++)
       {cout<<a[k];
       k++;}

        

    }
}
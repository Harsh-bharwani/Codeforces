#include<iostream>
#include<string>
using namespace std;
int main(){
    string borze;
    string b;
    cin>>borze;
    for (int i=0,j=0;i<borze.length();i++,j++){
         if( borze[i]=='.')
         {
         b[j]=0;
         }

         else if(borze[i]=='-' && borze[i+1]=='.'){
        
         b[j]=1;
         i++;
         }
         else if(borze[i]=='-' && borze[i+1]=='-')
          {
          b[j]=2;
          i++;
          }
    }
    cout<<b;
}
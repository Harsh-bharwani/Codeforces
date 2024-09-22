// #include<bits/stdc++.h>
// using namespace std;
// int main(){
// ios_base::sync_with_stdio(false);
// cin.tie(NULL);
//     int t;
//     cin>>t;
//     while(t--){
//          int n;
//          cin>>n;
//          vector<int> v(n);
//         vector<int> copy;
//         int sum, ans, ct, first_index;
//         sum=ans=ct=first_index=0;
//          for(int i=0; i < n; i++){
//                cin>>v[i];
//          }
//          copy=v;
//          for(int i=0;i<n;i++){
//             copy.push_back(v[i]);
//          }
//          for(int i=0;i<2*n;i++){
//             if(sum+copy[i] < copy[i]) sum=copy[i], ct=1, first_index=i;
//             else sum+=copy[i], ct++ ;
//             if(ct==n+1) sum-=copy[first_index], first_index++, ct--;
//             ans=max(ans, sum);
//          }
//          cout<<ans;
//    }
// }

#include<bits/stdc++.h>
using namespace std;
int main(){
ios_base::sync_with_stdio(false);
cin.tie(NULL);
    int t;
    cin>>t;
    while(t--){
         int n;
         cin>>n;
         vector<int> v(n);
        int total_sum=0;
        int max_ele=INT_MIN;
         for(int i=0; i < n; i++){
            cin>>v[i];
            total_sum+=v[i];
            max_ele=max(v[i],max_ele);
         }
         int sum=0, min_sum=0, max_sum=0;
         for(int i=0; i < n; i++){
            sum=min(v[i], sum+v[i]);
            min_sum=min(min_sum, sum);
         }
         // cout<<min_sum<<' ';
         sum=0;
         for(int i=0; i < n; i++){
            sum=max(v[i], sum+v[i]);
            max_sum=max(max_sum, sum);
         }
         if((total_sum-min_sum)==0 and  max_sum==0) cout<<max_ele;
         else cout<<max(total_sum-min_sum, max_sum);
   }
}
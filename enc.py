t=int(input())
for i in range(t):
    s=input()
    unique="".join(sorted(set(s)))

    for j in range(len(unique)//2):
        b={unique[i]:unique[-i-1]}
    output=''.join(b[char] for char in s)
    print(output)        
        



# #include<bits/stdc++.h>
# using namespace std;
# int main(){
# int t;
# cin>>t;
# while(t--){
#     int n;
#     cin>>n;
#     string a;
#     string copy;
#     for (int i=0;i<n;i++){
#         cin>>a[i];
#     }
#     set<char> uniqueChars;
#     for (char ch : a) {
#         uniqueChars.insert(ch);
#     }

#     map<char,char> charmap;
#     for (auto it = uniqueChars.begin(); it != uniqueChars.end(); ++it) {
#         copy.append(char(*it));
#     }

# }
# }

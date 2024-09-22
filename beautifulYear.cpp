#include<iostream>
#include<string>
#include<cmath>
using namespace std;
int main(){
    int no;
    int no_digits[4];
    cin>>no;
    while(no!=0){
        int i=1;
        no_digits[i-1]=no/pow(10,4-i);
        no=no % pow(double(10),double(4-i));
        i++;
    }
    
}
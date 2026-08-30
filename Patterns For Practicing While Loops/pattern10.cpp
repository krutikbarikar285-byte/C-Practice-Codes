#include<iostream>
using namespace std;
int main(){
    int n;
    cout<<"Enter the Value of N:"<<endl;
    cin>>n;
    int i=1;
    while(i<=n){
        int value=n-i+1;
        while(value){
            cout<<"*"<<" ";
            value=value-1;
        }
    i=i+1;
    cout<<endl;
    }
}
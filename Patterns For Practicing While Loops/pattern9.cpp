#include<iostream>
#include<string>
using namespace std;
int main(){
    int n;
    cout<<"Enter the Value of N:"<<endl;
    cin>>n;
    int row=1;
    while(row<=n){
        int value = n-row;
        while(value){
        cout<<" ";
        value=value-2;    
    }
        int col=1;
        while(col<=row){
        cout<<"*";
        col=col+1;
        }
        cout<<endl;
        row=row+1;    
   }
}
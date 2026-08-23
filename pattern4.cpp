#include<iostream>
using namespace std;
int main(){
    int n;
    cout<<"Enter the value of N:"<<endl;
    cin>>n;
    int row=1;
    while(row<=n){
        int col=1;
        int value=row;
        while(col<=row && col>0){
           cout<<value<<" ";
           col=col+1;
           value=value-1;        
        }
        cout<<endl;
        row=row+1;
    }
}
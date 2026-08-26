#include<iostream>
using namespace std;
int main(){
    int n;
    cout<<"Enter the Value of N:"<<endl;
    cin>>n;
    int i=1;
    while(i<=n){
        int col=n+i-5;
        while(col){
            cout<<"_";
            col=col-1;
        }
        int value=n-i+1;
        while(value){
        cout<<i;
        value=value-1;
        }
        cout<<endl;
        i=i+1;
    }
}
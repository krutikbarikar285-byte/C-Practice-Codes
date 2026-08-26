#include<iostream>
using namespace std;
int main(){
    int n;
    cout<<"Enter the Value of N:"<<endl;
    cin>>n;
    int i=1;
    while(i<=n){
        int col=n-i;
        while(col){
            cout<<"_";
            col=col-1;
        }
        int v=1;
        while(v<=i){
        cout<<i;
        v=v+1;
        }
        cout<<endl;
        i=i+1;
    }
}
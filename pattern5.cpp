#include<iostream>
using namespace std;
int main(){
    int n;
    cout<<"Enter the value of N:"<<endl;
    cin>>n;
    char yes=64;
    int row=1;
    while(row<=n){
        int col=1;
        yes=yes+1;
        while(col<=n){
            cout<<yes<<" ";
            col=col+1;
        }
        cout<<endl;
        row=row+1;
    }
}
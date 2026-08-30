#include<iostream>
using namespace std;
int main(){
    int n;
    cout<<"Enter the value of N:"<<endl;
    cin>>n;
    int row=1;
    while(row<=n){
        int col = row;
        while(col<row+row){
            cout<<col;   
            col=col+1;
            cout<<" ";
        }
        cout<<endl;    
        row=row+1;
    }
}
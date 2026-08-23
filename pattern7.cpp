#include<iostream>
using namespace std;
int main(){
    int n;
    cout<<"Enter the value of N:"<<endl;
    cin>>n;
    int i=1;
    char value='A';
    while(i<=n){
        int j=1;
        while(j<=n){
            cout<<value<<" ";
            j=j+1;
            value=value+1;
        }
    cout<<endl;
    i=i+1; 
    }
}
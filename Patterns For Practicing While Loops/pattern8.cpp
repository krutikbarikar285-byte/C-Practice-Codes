#include<iostream>
using namespace std;
int main(){
    cout<<"Enter the Value Of of N:"<<endl;
    int n;
    cin>>n;
    int row=1;
    while(row<=n){
        int j=1;
        while(j<=n){
            char sample='A'+row+j-2;
            cout<<sample<<" ";
            j=j+1;
        }
    row=row+1;
    cout<<endl;
    }

}
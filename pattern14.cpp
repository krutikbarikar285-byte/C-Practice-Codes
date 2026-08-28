#include<iostream>
using namespace std;
int main(){
    int n;
    cout<<"Enter the Value of N:"<<endl;
    cin>>n;
    int i=1;
    while(i<=n){
        int v=n-i;
        while(v){
            cout<<" ";
            v=v-1;  
        }
        int j=1;
        
        int m=1;
        while(j<=i){
            cout<<m;
            m=m+1;    
            j=j+1;
        }
        int start =i-1;
        while(start){
            cout<<start;
            start=start-1;
        }
        
        cout<<endl;
        i=i+1;
    }
}
#include<iostream>
using namespace std;

int main(){
    int n;
    cout<<"Ente the Value of N "<<endl;
    cin>>n;
    int i = 2;
    bool indicator=false;
    while(i<n){
        if(n%i==0){
            indicator=true;
        }
        i=i+1;
        }
    if(indicator==true){
        cout<<"N is not an Prime Number"<<endl;
    }
    else{
        cout<<"N is an Prime Number"<<endl;
    } 
}
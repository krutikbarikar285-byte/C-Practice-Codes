#include<iostream>
using namespace std;

int main(){
    char sample;
    cout << "enter the value" << endl;
    cin >> sample;
    if(sample>='A' && sample<='Z'){
        cout<<"It's a uppecase"<<endl;
    }
    else if(sample>='0' && sample<='9'){
        cout<<"It's Number"<<endl;
    }
    else if(sample>='a' && sample<='z'){
        cout<<"I'ts an lowercase"<<endl;
    }
    else{
        cout<<"It's an special letter"<<endl;
    }
}

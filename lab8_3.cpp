#include <iostream>
#include <string>
using namespace std;
int main(){
    
    int age,height,bounty;
    string name;
    cout<<"Enter your age: ";
    cin>>age;
    if(age>60){
        cout<<"Your character = Brook";
    }else if(age>25 && age<=60){
        cout<<"Enter your bounty: ";
        cin>>bounty;
        if(bounty>5e8){
            cout<<"Your character = Jinbe";
        }else{
            cout<<"Your character = Franky";
        }
    }
    else{
        cout<<"Enter your height: ";
        cin>>height;
        if(height<100){
            cout<<"Your character = Chopper";
        }else if(height>=100 && height<180){
            cout<<"Your character = Usopp";
        }else{
            cout<<"Enter your bounty: ";
            cin>>bounty;
            if(bounty>11e8){
                cout<<"Your character = Zoro";
            }else{
                cout<<"Your character = Sanji";
            }
        }
    }
    
}
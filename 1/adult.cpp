#include<bits\stdc++.h>
using namespace std;

int main(){
    int age;
    cout<<"Enter your age: ";
    cin>>age;
    if(age>=18){
        cout<<"Adult";
    }
    else if(age<=0){
        cout<<"Invalid age";
    }
    else{
        cout<<"Not Adult";
    }
}
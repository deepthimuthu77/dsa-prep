#include<bits\stdc++.h>
using namespace std;

void pattern(int n){
    for(int i=n ; i>0 ; i--){
        for(int j=1 ; j<i+1 ; j++){
            cout << "*  ";
        }
        cout << endl;
    }
}

int main(){
    int n;
    cout << "Enter : ";
    cin >> n;
    
    pattern(n);

    return 0;
}
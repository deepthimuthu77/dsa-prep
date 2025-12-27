#include <iostream>
using namespace std;

int main() {
    int num;
    cout << "Enter positive number: ";
    cin >> num ;

    if (num  <= 0){
        cout << "Invalid entry!";
    }
    else if (num >=2){
        cout << "PRIME"; 
    }
    else{
        for (int i =2; i*i <= num ; i++){
            if (num % i == 0){
                cout << "NOT PRIME"; break;
            }
        }
        cout << "PRIME";
    }
    return 0;
}
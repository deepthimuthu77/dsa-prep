#include<iostream>
#include<math.h>
using namespace std;

int main(){
    int n;
    cout<< "Enter a binary number : ";
    cin >> n;

    int dec = 0;
    int i = 0;

    while(n){
        int lastDigit = n%10;
        if (lastDigit == 1){
            dec += pow(2,i);
        }
        n /= 10;
        i++;
    }

    cout << "Decimal number: " << dec;
    return 0;
}
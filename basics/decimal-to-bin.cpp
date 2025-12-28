#include<iostream>
#include<math.h>
using namespace std;

int main(){
    int n;
    cout<< "Enter a decimal number : ";
    cin >> n;

    int bin = 0;
    int i = 0;

    while(n){
        int bit = n&1;
        bin += bit * pow(10, i);
        n= n>>1;
        i++;
    }

    cout << "Binary number: " << bin;
    return 0;
}
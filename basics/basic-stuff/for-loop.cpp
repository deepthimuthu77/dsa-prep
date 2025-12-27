#include<iostream>
using namespace std;

void oneToN(){
    int n;
    cout<< "Enter n: ";
    cin>> n;

    int sum = 0;
    for (int i=1; i<=n; i++){
        sum+=i;
    }

    cout<< "Sum of " << n << " numbers = " << sum;
}

int main(){
    oneToN();
    return 0;
}
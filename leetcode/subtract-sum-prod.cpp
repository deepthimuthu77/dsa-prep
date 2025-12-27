#include<iostream>
using namespace std; 

 int subtractProductAndSum(int num) {
    int prod = 1, sum = 0;
    while(num > 0 ){
        int lastDigit = num %10;
        prod *= lastDigit;
        sum +=lastDigit;
        num /= 10;
    }
    return prod-sum;
}


int main(){
    int n;
    cout << "Enter number: ";
    cin >> n;
    cout << "Result: " << subtractProductAndSum(n);
}
#include<iostream>
#include<cmath>

using namespace std;

bool isArmstrong(int num){
    int sum = 0;
    int temp = num;
    while(num){
        int digit = num % 10;
        sum += pow(digit,3);
        num /= 10;
    }
    cout << sum << endl;
    if(sum == temp) return true;
    return false;
}

int main(){
    int num;
    cout << "Enter number to check: ";
    cin >> num;
    (isArmstrong(num)) ? cout << num << " is an Armstrong number!" : cout << num << " is NOT an Armstrong number!";
    
    return 0;
}
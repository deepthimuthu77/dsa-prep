#include<iostream>
using namespace std; 

int hammingWeight(int n) {
    int count = 0;
    while(n>0){
        if(n%2 != 0) count++;
        n = n>>1;
    }
    return count;
}


int main(){
    int n;
    cout << "Enter number: ";
    cin >> n;
    cout << "No. of set bits: " << hammingWeight(n);
}
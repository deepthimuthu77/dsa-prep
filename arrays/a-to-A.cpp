#include<iostream>
using namespace std;

char convert(char ch){
    return (ch - 'a' + 'A');
}

int main(){
    char in;
    cout << "Enter a character (a to z): ";
    cin >> in;
    cout<< "Result: "<< convert(in);
    return 0;
}
#include<iostream>
using namespace std;

void calculator(){
    int n1,n2,result = 0;
    char op, ch;
    bool run = 1;
    while(run){
        cout << "Enter num 1: ";
        cin >> n1;
        cout << "Enter num 2: ";
        cin >> n2;
        cout << "Enter valid operator (+ - * / %): ";
        cin >> op;
        switch(op){
            case '+': result = n1+n2; break;
            case '-': result = n1-n2; break;
            case '*': result = n1*n2; break;
            case '/': if(n2!=0) result = n1/n2; break;
            case '%': result = n1%n2; break;
            default: cout<< "Invalid operator"; break;
        }
        cout << "Result: " << result << endl;
        cout << "Want to continue? (y/n): ";
        cin >> ch;
        if (!(ch == 'y' || ch == 'Y')) run = 0;        
    }
}

int main(){
    calculator();
    return 0;
}
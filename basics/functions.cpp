#include<iostream>
#include<cmath>
using namespace std;

int power(int a, int b){
    int result = 1;
    for(int i=1; i<=b; i++){
        result *= a;
    }
    return result;
    //return pow(a,b);
}

bool isEven(int a){
    if(a&1) return 0;
    else return 1;
}

int fact(int n){
    if(n==0 || n==1) return 1;
    return fact(n-1) * n;
}

int nCr(int n, int r){
    return fact(n)/(fact(r) * fact(n-r));
}

void isPrime(int n){
    if(n<0) cout<< "Invalid number!"<<endl; return;
    if(n==1 || n==2) cout << n << " : PRIME" <<endl; return; 
    for(int i = 2; i*i < n; ++i){
        if(n%i == 0){
            cout << n <<  " : NOT PRIME";
            return;
        }
    }
    cout << n << " : PRIME" << endl;
}

int nthAP_term(int n){
    return 3*n + 7;
}

int numOfSetBits(int n){
    int count = 0;
    while(n){
        if(n&1 == 1) count++;
        n >>= 1;
    }
    return count;
}

int nthFibNum(int n){
    int n1, n2 = 1;
    int n3;
    if (n <= 0) return 0;
    if (n <= 2) return 1;
    for (int i=3; i<=n; i++){
        n3 = n1+n2;
        n1 = n2;
        n2 = n3;
    }
    return n3;
}

int main(){
    int a,b;
    cin >> a >> b;

    cout<< "Result : " << power(a,b) << endl;
    
    isEven(a)? cout << a << " is even" << endl : cout << a << " is odd" << endl;
    isEven(b)? cout << b << " is even" << endl : cout << b << " is odd" << endl; 

    cout << "nCr: " << nCr(a,b) << endl;

    isPrime(a);
    isPrime(b);

    cout << "nth AP term for " << a<< ": " << nthAP_term(a) << endl;
    cout << "nth AP term for " << b<< ": " << nthAP_term(b) << endl;

    cout << "No. of set bits in " << a << ": " << numOfSetBits(a) << endl;
    cout << "No. of set bits in " << b << ": " << numOfSetBits(b) << endl;

    cout << a << "th Fibonacci term: " << ": " << nthFibNum(a) << endl;
    cout << b << "th Fibonacci term: " << ": " << nthFibNum(b) << endl;
    
    return 0;
}
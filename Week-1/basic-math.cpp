#include<bits\stdc++.h>
using namespace std;

int extractDigits(int n){
    int count = 0;
    while(n > 0){
        int lastDigit = n % 10;
        // cout << lastDigit << " ";
        n /= 10;
        count++;
    }
    return count;

    // count = int (log10(n)) + 1; // Alternative way to count digits
}

int reverseNumber(int n){
    int reversed = 0;
    while(n > 0){
        int lastDigit = n % 10;
        reversed = reversed * 10 + lastDigit;
        n /= 10;
    }
    return reversed;
}

string checkPalindromeNo(int num) {
    int reverse_num;

    if (num == reverseNumber(num)){
        return "Palindrome!";
    } else{
        return "Not Palindrome!";
    }
}

int Armstrong(int num){
    int sum = 0,  len = extractDigits(num);

    while(num > 0){
        sum += pow((num % 10), len);
        num /=  10;
    }
    return sum;
}

string checkArmstrong(int num){
    if(num == Armstrong(num)){
        return "Armstromg No.!";
    } else {
        return "Not Armstromg No.!";
    }
}

void printDivisors(int num){
    vector<int> lst;
    for(int i = 1; i <= sqrt(num); i++){
        if (num % i == 0) {
            lst.push_back(i);
            if(num/i != i){
                lst.push_back(num/i);
            }
        }
    }

    // O(n logn) : n is the no. of factors
    sort(lst.begin(),lst.end());

    for (auto it : lst){
        cout << it << " ";
    }
}

string checkPrime(int num){
    bool prime = true;
    for(int i = 2; i <= sqrt(num); i++){
        if (num % i == 0 ){
            prime = false;
            break;
        }
    }
    if(prime){
        return "Prime";
    } else {
        return "Not Prime";
    }
}

void HCF1(int n1, int n2){
    for(int i = min(n1,n2); i >= 1 ; i--){
        if (n1 % i == 0 && n2 % i == 0){
            cout << i;
            break;
        }
    }
}

int HCF2(int n1, int n2){
    // by euclidean algorithm
    // gcd(a, b) = gcd(a % b, b)
    // time complexity: O(log(min(a, b)))

    while (n1 > 0 && n2 > 0) {
        if (n1 > n2) {
            n1 = n1 % n2;
        } else {
            n2 = n2 % n1;
        }
    }
    if (n1 == 0) {
        cout << n2;
    } else {
        cout << n1;
    }
}

void LCM(int n1, int n2){
    // LCM(a, b) = (a * b) / GCD(a, b)
    // time complexity: O(log(min(a, b)))
    int gcd;
    if (n1 > n2) {
        gcd = HCF2(n1, n2);
    } else {
        gcd = HCF2(n2, n1);
    }
    cout << (n1 * n2) / gcd;
}

int main(){
    int n1, n2;

    cout << "Enter a number: ";
    cin >> n1;

    
    cout << "1. Extract Digits\n";
    cout << "2. Reverse Number\n";
    cout << "3. Check Palindrome\n";
    cout << "4. Check Armstrong Number\n";
    cout << "5. Print Divisors\n";
    cout << "6. Check Prime\n";
    cout << "7. HCF (Method 1)\n";
    cout << "8. HCF (Method 2)\n";
    cout << "9. LCM\n";
    cout << "10. Exit\n";
    cout << "Enter your choice: ";


    cout << extractDigits(n1);
    cout << reverseNumber(n1);
    cout << checkPalindromeNo(n1);
    cout << checkArmstrong(n1);
    printDivisors(n1);
    cout << checkPrime(n1);

    cout << "Enter another number: ";
    cin >> n2;

    HCF1(n1, n2);
    cout << HCF2(n1, n2);
    LCM(n1, n2);
    return 0;
}
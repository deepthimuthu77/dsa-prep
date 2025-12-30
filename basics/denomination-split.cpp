#include<iostream>
#include<vector>
using namespace std;

int main(){
    int amt;
    vector<int> denominations = {2000,500,100,50,20,10,5,2,1};
    cout<< "Enter the amount: " ;
    cin >> amt;
    cout << " =============================================== " << endl;
    for(int i=0; i < denominations.size(); i++){
        cout << "No. of " << denominations[i] << " notes: " << amt/denominations[i];
        amt = amt % denominations[i];
        cout << "  ||  Remaining: " << amt << endl;
    }
    cout << " =============================================== " << endl;
    return 0;
}
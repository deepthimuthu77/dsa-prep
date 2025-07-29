#include<bits\stdc++.h>
using namespace std;

void hashing_array(){
    int n;
    cout << "Enter size of array: ";
    cin >> n;
    int arr[n];
    cout << "Enter array elements: ";
    for(int i = 0;i<n;i++){
        cin >> arr[i];
    }

    //precomputing 
    int hash[n+1] = {0}; // take the hash array size to innclude the query values
    for(int i = 0;i<n;i++){
        hash[arr[i]] ++; // takes the count of each element
    }

    int q;
    cout << "Enter Query size: ";
    cin >> q;
    cout << "Enter Queries: ";
    while (q--){
        int num;
        cin >> num;
        //fetching 
        cout << hash[num] << " ";
    }
}

void hashing_character(){
    string s;
    cin >> s;

    //precompute:
    int hash[256] = {0}; // to include all ASCII characters
    for (int i = 0; i < s.size(); i++) {
        hash[s[i]]++;
    }

    int q;
    cin >> q;
    while (q--) {
        char c;
        cin >> c;
        // fetch:
        cout << hash[c] << endl;
    }
}

void hashing_map(){
    int n;
    cout << "Enter size of array: ";
    cin >> n;
    int arr[n];
    cout << "Enter array elements: ";
    for (int i = 0; i < n; i++) {
        cin >> arr[i];
    }

    //precompute:
    map<int, int> mp;
    for (int i = 0; i < n; i++) {
        mp[arr[i]]++;
    }

    // iterate over the map:
    /* for(auto it : mp){
            cout << it.first << "->" << it.second << endl;
        }
    */

    cout << "Enter Query size: ";
    int qu;
    cin >> qu;
    cout << "Enter Queries: ";
    while (qu--) {
        int number;
        cin >> number;
        // fetch:
        cout << mp[number] << endl;
    }
}

#include<bits/stdc++.h>
using namespace std;


// two-pointer approach
vector<int> arr_intersection(vector<int> v1, vector<int> v2){
    vector<int> res;
    int i,j = 0;

    while(i<v1.size() && j<v2.size()){
        if(v1[i] == v2[j]){
            res.push_back(v1[i]);
            i++; 
            j++;
        } else if(v1[i] < v2[j]){
            i++;
        } else j++;
    }

    return res;
}

int main(){
    vector<int> v1 = {1,2,3,4,5,6,7,8};
    vector<int> v2 = {2,4,6,8,10,12,14};
    vector<int> arr = arr_intersection(v1, v2);
    cout << "Intersection of arrays : " ;
    for(int num : arr){
        cout << num << "  ";
    }
    return 0;
}
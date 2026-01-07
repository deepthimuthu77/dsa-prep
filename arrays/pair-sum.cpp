#include<bits/stdc++.h>
using namespace std;

vector<pair<int,int>> pairSum(vector<int> vec, int s){
    sort(vec.begin(), vec.end());
    vector<pair<int,int>> res;
    int i = 0, j = vec.size()-1;

    while(i<j){
        int sum = vec[i] + vec[j];
        if(sum == s){
            res.push_back({vec[i], vec[j]});
            i++; j--;
        } else if(sum < s){
            i++;
        } else j--;
    }

    return res;
}

int main(){
    vector<int> vec = {1,2,3,4,5,6,7,8,9};
    int s = 10;
    vector<pair<int,int>> res = pairSum(vec,s);
    cout << "Pairs of sum : " << endl ;
    for(auto num : res){
        cout << num.first << "  " << num.second << endl;
    }
    return 0;
}
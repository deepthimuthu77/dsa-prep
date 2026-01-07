#include<bits/stdc++.h>
using namespace std;

vector<vector<int>> _3Sum(vector<int> v, int s){
    sort(v.begin(), v.end());
    int n = v.size();
    vector<vector<int>> triplets;

    for(int i = 0; i<n;i++){
        while(i>0 && v[i] == v[i-1]) continue;

        int j = i+1;
        int k = n-1;

        while(j<k){
            int sum = v[i] + v[j] + v[k];

            if(sum == s){
                triplets.push_back({v[i],v[j],v[k]});

                while(j<k && v[j] == v[j+1]) j++;
                while(j<k && v[k] == v[k-1]) k--;

                j++;k--;

            } else if(sum<s) j++;
            else k--;
        }
    }
    return triplets;
}

int main(){
    vector<int> vec = {1,2,3,4,5,6,7,8,9};
    int s = 10;
    vector<vector<int>> res = _3Sum(vec,s);
    cout << "Pairs of sum : " << endl ;
    for(auto num : res){
        cout << num[0] << "  " << num[1] << "  " << num[2] << endl;
    }
    return 0;
}
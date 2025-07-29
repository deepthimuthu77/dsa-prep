#include<bits\stdc++.h>
using namespace std;

void max_min(int x, int y){
    if(x>y){
        cout << "maximum: "<<x<<"\nminimum: "<<y;
    }
    else if(x<y){
        cout << "maximum: "<<y<<"\nminimum: "<<x;
    }
    else{
        cout << "Both are equal";
    }
}

int main(){
    int x,y;
    cin>>x>>y;
    max_min(x,y);
    return 0;
}
// https://leetcode.com/problems/integer-to-roman/
// 12. Integer to Roman :-
// Medium

#include<iostream>
#include<string>
#include<utility>
#include<vector>

using namespace std;

int main(){
    int n;
    cin>>n;
    vector<pair<string,int>> m = {{"I",1},{"IV",4},{"V",5},{"IX",9},{"X",10},{"XL",40},{"L",50},{"XC",90},{"C",100},{"CD",400},{"D",500},{"CM",900},{"M",1000}};
    string ans;
    for(int i=m.size()-1; i>=0;i--){
        if(n/m[i].second){
            int temp = n/m[i].second;
            while(temp--)ans+=m[i].first;
            n %= m[i].second;
        }
    }
    cout<<ans;
}
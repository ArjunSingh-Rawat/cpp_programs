// https://leetcode.com/problems/single-number/
// 136. Single Number:-
// Easy

#include<iostream>
#include<map>
#include<vector>

using namespace std;

int main(){
    vector<int> v = {1,2,2};
    map<int,int> m;
    int ans;
    for(int i=0; i<v.size();i++){
        m[v[i]]++;
    }
    for(auto it: m){
        if(it.second==1)ans = it.first;
    }
    cout<<ans;

    ////////////
    ans = 0;
    for(int i=0; i<v.size(); i++){
        ans = ans^v[i];
    }
    cout<<endl<<ans;
}
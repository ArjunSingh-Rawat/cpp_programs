// https://leetcode.com/problems/count-and-say/
// 38. Count and Say:-
// Medium

#include<iostream>
#include<string>

using namespace std;

int main(){
    int n;
    cin>>n;
    int count = 1;
    string ans="1~";
    for(int i=1; i<n; i++){
        string temp;
        int si = ans.size();
        for(int j=0; j<si-1; j++){
            if(ans[j]==ans[j+1])count++;
            else{
                temp += to_string(count) + ans[j];
                count = 1;
            }
        }
        ans = temp+'~';
    }
    ans.pop_back();
    cout<<ans;
}
// https://leetcode.com/problems/longest-substring-without-repeating-characters/

// 3. Longest Substring Without Repeating Characters :-

#include<iostream>
#include<string>
#include<map>
#include<vector>

using namespace std;

int main(){
    string s;
    cin>>s;
    map<char,int> m;
        m['1']=0;
        int maxsubstr=0; 
        int right=1,left=1;
        for(int i=0; i<s.size();i++){
            if(m[s[i]]==0)
                m[s[i]] = i+1;
            else{
                left = max(left,m[s[i]]+1);
                m[s[i]] = i+1;
            }
            maxsubstr = max(maxsubstr,right-left+1);
            right++;

        }
        cout<<maxsubstr;
        return 0;
}
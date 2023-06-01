// https://leetcode.com/problems/string-compression/
// 443. String Compression:-

#include<iostream>
#include<string>
#include<vector>

using namespace std;

int main(){
    vector<char> chars={'a','a','b','b','b','c'};
    string s;
    chars.push_back('~');
    int count=1;
    for(int i=1; i<chars.size(); i++){
        if(chars[i]==chars[i-1])count++;
        else{
            s+=chars[i-1];
            if(count!=1)
                s+=to_string(count);
            count = 1;
        }
        
    }
    for(int i=0; i<s.size(); i++){
        chars[i]=s[i];
    }
    for(int i=0; i<s.size(); i++){
        cout<<chars[i]<<" ";
    }
    return 0;
}

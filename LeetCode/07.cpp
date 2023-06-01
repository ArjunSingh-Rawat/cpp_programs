// https://leetcode.com/problems/reverse-integer/
// 7. Reverse Integer :-

#include<iostream>

using namespace std;

int main(){
    int n;
    cin>>n;
    int num = n;
    long long int rev = 0;
    int high= 2147483647;
    int low=-2147483648;
    while(num!=0){
        long long int temp = num % 10;
        num /= 10;
        rev = rev * 10 + temp;
    }
    if(rev>high||rev<low) cout<<0;
    else cout<<rev;
}
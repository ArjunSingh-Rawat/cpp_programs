#include<iostream>
#include<vector>
#include<algorithm>
#define ll long long int

using namespace std;

int main(){
    int t;
    cout<<"\n Enter no. of test cases:";
    cin>>t;
    int n;
    cout<<"\n Enter no. elements in array:";
    cin>>n;
    vector<ll> a(n),b(n),c(n);
    int i;
    cout<<"\n Enter elements for 1st array:";
    for(i=0; i<n; i++){
        cin>>a[i];
    }
    for(i=0; i<n; i++){
        cin>>b[i];
    }
    for(i=0; i<n; i++){
        cin>>c[i];
    }
    sort(a.begin(),a.end());
    sort(b.begin(),b.end());
    sort(c.begin(),c.end());
    for(i=0; i<n; i++){
        cout<<a[i]<<" ";
    }
    cout<<"\n";
    for(i=0; i<n; i++){
        cout<<b[i]<<" ";
    }
    cout<<"\n";
    for(i=0; i<n; i++){
        cout<<c[i]<<" ";
    }
}
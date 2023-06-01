// Link :- https://www.codechef.com/MAY221D/problems/PUSH7PA
#include<iostream>
#include<vector>
#include<algorithm>
#include<map>

#define ll long long int

using namespace std;

int main(){
    ll t,n,m=0,mf=0;
    ll i, j,f=0;
    cin>>t;
    // map<ll,ll>mp;
    ll w;
    for(i=0; i<t; i++){
        cin>>n;
        vector<ll >ar(n);
        for(j=0; j<n; j++){
            cin>>ar[j];
            if(m<ar[j])m=ar[j];
        }
        for(i=0; i<n; i++){
            if(i==0){
                f = count(ar.begin(),ar.end(),ar[i]);
            }
            auto it = upper_bound(ar.begin(),ar.end(),ar[i]);
            if(it==ar.end())break;
            f = count(ar.begin(),ar.end(),it);
            if(mf<f){
                mf=f;
                w=ar[i];
            }
        }
        cout<<"\n array element;";
        for(i=0; i<n; i++){
            cout<<ar[i]<<" ";
        }
        cout<<endl<<mf;
        cout<<endl<<w;
    }
}
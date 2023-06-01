#include <iostream>
#include<vector>
#define ll long long int
using namespace std;

int main() {
	// your code goes here
	// ll t;
	// cin>>t;
	// for(ll i=0; i<t; i++){
	//     vector<ll> v;
	//     ll n,a;
    //     cin>>n;
	//     for(ll j=0; j<n; j++){
	//         cin>>a;
	//         v.push_back(a);
	//     }
	//     for(ll k=0; k<v.size();){
    //         if(v[k]==0)
    //             k++;
	//         if(v[k]==0&&v[k+1]==0)
	//             continue;
    //         ll b;
    //         cout<<"k"<<v[k]<<"  "<<"k+1"<<v[k+1]<<"\n";
    //         b = (v[k]&v[k+1]);
    //         cout<<b<<"\n";
    //         v.erase(v.begin()+k,v.begin()+k+1);
    //         v.insert(v.begin()+k,b);
	//     }
    //     for(ll x=0; x<v.size(); x++){
    //         cout<<v[x];
    //     }

	// }
    vector<ll> v= {2,28,3,22};
    for(int i=0; i<v.size();){
        if(v[i]==0&&v[i+1]==0){
            i++;
            continue;
        }
        cout<<"v of i : "<<v[i]<<"\n";
        int b = v[i]&v[i+1];
        v.erase(v.begin()+i,v.begin()+i+2);
        v.insert(v.begin()+i,b);
        cout<<b;
        cout<<"\n";

    }
    for(auto it:v){
        cout<<it<<" ";
    }
	return 0;
}

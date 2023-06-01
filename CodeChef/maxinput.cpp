#include <iostream>
#define ll long long int
using namespace std;

int main() {
	// your code goes here
	ll t,max=0;
	cin>>t;
	for(ll i=0; i<t; i++){
	    ll m,n;
	    cin>>m>>n;
	    ll ar[n];
	    for(ll j=0; j<n; j++){
	        cin>>ar[j];
	    }
	    for(ll k=0; k<n; k++){
	        ll sum=0;
	        sum = ar[i]+ar[i+1]+((ar[i]-ar[i+1])%m);
            cout<<"\n";
            cout<<"mod"<<((ar[i]-ar[i+1])%m);
	        if(max<sum)
	            max = sum;
	    }
	    cout<<max<<"\n";
	    max=0;
	    
	}
	
	return 0;
}

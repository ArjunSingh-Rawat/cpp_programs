#include<bits/stdc++.h>
#define ll long long int
#define l long int

using namespace std;

int main(){
    ios_base::sync_with_stdio(false);
    cin.tie(0);
    cout.tie(0);
    // freopen("input.txt","r",stdin);
    /////////
    int t;
    cin>>t;
    while(t--){
        int n;
        cin>>n;
        bool ans;
        int a[n],b[n+1];
        for(int i=0; i<n; i++){
            cin>>a[i];
        }
        for(int i=0; i<n; i++){
            if(i==0){
                if(a[i]==0)
                    b[i]=b[i+1]=0;
                else{
                    b[i] = 1;
                    b[i+1] = 0;
                }
                continue;
            }
            if(a[i]==b[i])
                b[i+1] = 0;
            else    
                b[i+1] = 1;
            if(i==n-1)
                if(b[0]==b[n])
                    ans = true;
                else    
                    ans = false;
        }
        if(ans)
            cout<<"YES\n";
        else    
            cout<<"NO\n";
    }
    return 0;
}
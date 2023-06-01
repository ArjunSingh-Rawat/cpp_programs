// Link :- https://www.codechef.com/MAY221D/problems/PUSH7PA
#include<iostream>
#include<vector>
#include<algorithm>
#include<ctime>

#define ll long long int

using namespace std;

int main(){
    time_t start ,end;
    time(&start);
    ll t;
    cin>>t;
    while(t--){
        ll n,x=0,y,i,co=0,c=INT32_MIN,cv,maxv=0,no=0;
        cin>>n;
        ll ar[n];
        for(i=0;i<n;i++){
            cin>>ar[i];
            maxv= max(ar[i],maxv);
        }
        sort(ar,ar+n,greater<int>());
        cout<<"\n Elements of array:";
        for(i=0; i<n; i++){
            cout<<ar[i]<<" ";
        }
        for(i=0; i<n-1;i++){
            if(ar[i]==ar[i+1]&& no==0){
                co+=1;
                cout<<"\n Entered 1st:";
            }
            else if(ar[i]!=ar[i+1]){
                no+=1;
                y=0;
                if(y>=co){
                    cv=x;
                }
                cout<<"\n Entered 2nd:";
            }
            else if(ar[i]==ar[i+1]){
                x=ar[i];
                y+=1;
                cout<<"\n Entered 3rd:";
            }
            c = max(y,c);
            cout<<"\n co:"<<co;
            cout<<"\n no:"<<no;
            cout<<"\n y and x :"<<y<<" "<<x;
            cout<<"\n c:"<<c;
            cout<<"\n cv:"<<cv;
            cout<<"\n I:"<<i;
            cout<<"\n********************\n";
        }
        cout<<"\n";
        maxv= maxv+co;
        c = c+cv;
        int ans = max(maxv,c);
        cout<<ans<<endl;
    }
    time(&end);
    double time_taken = double(end - start);
    cout<<"\n Time take is :"<<fixed<<time_taken;
    return 0;
}
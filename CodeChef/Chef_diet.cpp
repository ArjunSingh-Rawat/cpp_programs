// chef Diet  Linl:- https://www.codechef.com/problems/DIET
#include<iostream>

using namespace std;

int main(){
    int t;
    cin>>t;
    bool x;
    int n,k,a,sum=0,left_over=0;
    for(int i=0; i<t; i++){
        cin>>n>>k;
        int a[n];
        for(int k=0; k<n; k++){cin>>a[k];}
        for(int j=0; j<n; j++){
            a[j]+=sum;
            if(a[j]<k){
                cout<<"No "<<j+1<<endl;
                x=false;
                break;
            }
            else{
                left_over = abs(k-a[j]);
                sum = left_over;
                x= true;
            }

        }
        if(x)
            cout<<"Yes"<<endl;
        sum = 0;
    }
    return 0;
}
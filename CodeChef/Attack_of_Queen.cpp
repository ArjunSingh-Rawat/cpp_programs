//Link:- https://www.codechef.com/MAY221D/problems/QUEENATTACK

#include <iostream>
#include<cstdlib>
using namespace std;

int main() {
	long long int t,i,j,z;
	cin>>t;
	long long int n,x,y,r=0,d=0,k=0;
	for(int z=0; z<t; z++){
	    cin>>n>>x>>y;
	    k = n-1;
	    r = n * 2 - 2;
	    if(n==0||n==1){
	        cout<<0<<"\n";
	        continue;
	    }
	    if(n==2){
	        cout<<3<<"\n";
	        continue;
	    }
	    for(i=1,j=0; i<=n;i++,j++,k+=2){
	        if(x==1||x==n||y==1||y==n){
	            d = k;
	            break;
	        }
	        if((x==i||x==n-j)&&(y>=i&&y<=n-j)){
	            d = k;
	            break;
	        }
	        if((y==i||y==n-j)&&(x>=i&&x<=n-j)){
	            d = k;
	            break;
	        }
	    }
	    cout<<r+d<<"\n";
	}
	return 0;
}

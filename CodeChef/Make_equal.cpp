#include<bits/stdc++.h>

using namespace std;

int main(){
	int t;
	cin>>t;
	int i,j,k;
	int c =0;
	int m=0;
	int a;
	for(k=0; k<t; k++){
		cin.ignore();
		cin>>a;
		int ar[a];
		for(i=0; i<a; i++){cin>>ar[i];}
		for(i=0; i<a; i++){
			for(j=0; j<a; j++){
				if(ar[i]==ar[j])
					c++;
			}
			if(m<c)
				m=c;
			c=0;
		}
		cout<<"\nM:"<<m;
		if(m!=a){
			cout<<a-m<<"\n";
		}
		else 
			cout<<0<<"\n";
		m=0;
	}
	return 0;
}
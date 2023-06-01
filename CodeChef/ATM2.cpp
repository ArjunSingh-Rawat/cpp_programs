#include<iostream>
#include<conio.h>
using namespace std;

int main()
{
    int t;
    cout<<"\n Enter no. of tests cases:";
    cin>>t;
    int n,b;
    for(int j=0; j<t; j++)
    { 
        cout<<"\n Enter no. of people want to withdraw money:";
        cout<<"\n Enter amount available in ATM:";
        cin>>n>>b;
        cout<<"\n Enter amount each people want to withdeaw:";
        int a[n];
        for(int i=0; i<n; i++)
        {
            cin>>a[i];
            if(a[i]<=b)
            {
                cout<<1;
                b=b-a[i];
            }
            else
                cout<<0;
        }
    }
    return 0;
}
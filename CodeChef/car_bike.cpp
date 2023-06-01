#include<iostream>
using namespace std;

int main()
{
    int t;
    cout<<"\n Enter no. of tests cases:";
    cin>>t;
    int n;
    cout<<"\n Enter number of tyers:";
    int i;
    for(i=0; i<t; i++)
    {
        cin>>n;
        if(n%4==0)
            cout<<"NO\n";
        else
            cout<<"Yes\n";
    }
    return 0;
}
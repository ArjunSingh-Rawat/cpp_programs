#include<iostream>
#include<conio.h>
using namespace std;

int main()
{
    int t;
    cout<<"\n Enter number of test cases:";
    cin>>t;
    int a,b,c;
    cout<<"\n Enter submissions:";
    for(int i=0; i<t; i++)
    {
        cin>>a;
        cin>>b;
        cin>>c;
        if(a==b&&b==c&&c==a)
            cout<<"Draw\n";
        if(a<b&&a<c)
            cout<<"DRAW\n";
        else if(b<a&&b<c)
            cout<<"BOB\n";
        else if(c<a&&c<b)
            cout<<"Alice\n";
        
    }
    return 0;
}
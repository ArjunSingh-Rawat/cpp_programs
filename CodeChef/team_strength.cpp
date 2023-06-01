#include<iostream>
using namespace std;

int main()
{
    long long int t;
    cout<<"\n Enter no. of tests:";
    cin>>t;
    long long int x,y;
    long long int i,j;
    long long int last=0, sum=0;
    for(i=0; i<t; i++)
    {
        cout<<"\n Enter value for X:";
        cin>>x;
        cout<<"\n Enter value for Y:";
        cin>>y;
        long long int a[x];
        sum=0;
        for(j=0; j<x; j++)
        {
            a[j]=j+1;
            if(a[j]%y==0)
            {
                last=a[j]%10;
                sum=sum+last;
            }
        }
        cout<<"\n Team Strenght:"<<sum;
    }
    return 0;
}
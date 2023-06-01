#include <cmath>
#include <cstdio>
#include <vector>
#include <iostream>
#include <algorithm>
using namespace std;


int main() {
    /* Enter your code here. Read input from STDIN. Print output to STDOUT */   
    double r;
    cout<<"\n Enter radius:";
    cin>>r;
    double area;
    if(r<0||r>100000){
        cout<<"Invalid Input";
        return 0;
    }
    area = 3.14 * r * r;
    printf("%0.2f",area);
    return 0;
}
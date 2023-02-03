#include<bits/stdc++.h>
using namespace std;

int main()
{
    int reminder,t;
    float count=0.00;
    cin>>t;
    while(t>0)
    {
        reminder=t/2;
        t=reminder;
        count++;
    }
    cout<<setprecision(2)<<fixed;
    cout<<count;
}

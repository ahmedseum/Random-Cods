#include<bits/stdc++.h>
using namespace std;

int main()
{
    int num,power,sum=0;
    cin>>num>>power;
    for(int i=0;i<=power;i++)
    {
        sum+=pow(num,i);
    }
    cout<<sum;
}

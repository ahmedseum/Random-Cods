#include<bits/stdc++.h>
using namespace std;

int main()
{
    int number,array[1000],sum=0,p=1;
    cin>>number;
    array[2]=number%10;
    int i=2;
    while(i--)
    {
        array[i]=(number/(pow(10,p)));
        p++;
    }
    for(int j=0;j<3;j++)
    {
        sum+=pow(array[j],3);
    }
    if(sum==number)
    {
        cout<<"Yes"<<endl;
    }else
    {
        cout<<"No"<<endl;
    }
    cout<<sum;
    for(int j=0;j<3;j++)
    {
       cout<<array[j]<<endl;
    }
}

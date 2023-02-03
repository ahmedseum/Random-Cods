#include<iostream>
using namespace std;

int main()
{
    int limit;
    cin>>limit;

    while(limit--)
    {
        int num,reminder,sum=0;
        num=limit;
    for(int i=1;i<num;i++)
    {
        reminder=num%i;
        if(reminder==0)
        {
            sum+=i;
        }

    }
    if(sum==num)
    {
        cout<<sum<<endl;
    }else
    {

    }
    }
}

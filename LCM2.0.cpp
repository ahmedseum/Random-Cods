#include<bits/stdc++.h>
using namespace std;

int main()
{
    int x,y,sum=1;
    cin>>x>>y;
if(x<y)
    {
        for(int i=1;i<y;i++)
        { sum=x*i;
            if(sum>y)
            {
                break;
            }
            else
            {
                cout<<sum<<endl;
            }
        }
    }
    else
    {
        cout<<"INVALID"<<endl;
    }
}

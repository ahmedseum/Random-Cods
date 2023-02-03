#include <cmath>
#include <cstdio>
#include <vector>
#include <iostream>
#include <algorithm>
using namespace std;


int main() {
int limit,array[1000],i=0,k=2;
cin>>limit;
for(int i=0;i<limit;i++)
{
    cin>>array[i];
}
for(int j=0;j<limit;j++)
{
    { int count =0;
    if(array[j]==1)
    {
        cout<<"Not prime"<<endl;
        continue;
    }
        for(int k=2;k<array[j];k++)
        {
            if(array[j]%k==0)
            {
                count ++;
            }
        }
        if(count>0)
        {
            cout<<"Not prime"<<endl;
        }
        else if(count<=0){
            cout<<"Prime"<<endl;
        }count =0;
    }
}
    return 0;
}


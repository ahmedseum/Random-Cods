#include<bits/stdc++.h>
using namespace std;

int main()
{
    int limit,count=0,num[1000],cnum[1000];
    cin>>limit;
    for(int i=0;i<limit;i++)
    {
        cin>>num[i];
    }
    cnum[0]=num[0];
    for(int j=1;j<limit;j++)
    {
        cnum[j]=cnum[0]+j;
    }

    for(int k=0;k<limit;k++)
    {

        if(num[k]!=cnum[k])
        {
            count++;
        }
    }
    if(count>0)
    {
        cout<<"NO"<<endl;
    }
    else{
        cout<<"Yes"<<endl;
    }
}

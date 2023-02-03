#include<bits/stdc++.h>
using namespace std;

int main()
{
    int limit;
    cin>>limit;
    char s[1000];
    while(limit--)
    {
        cin>>s;
        for(int i=0;i<strlen(s);i++)
        {
            if(i%2==0)
            {
                cout<<s[i];
            }
        }
        cout<<" ";
        for(int j=0;j<strlen(s);j++)
        {
            if(j%2!=0)
            {
                cout<<s[j];
            }
        }
        cout<<endl;
    }
}

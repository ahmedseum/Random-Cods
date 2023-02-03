#include<bits/stdc++.h>
using namespace std;

int main()
{
    char input[10000];
    cin>>input;
    for(int i=0;i<strlen(input);i++)
    {
        if(input[i]=='L')
        {
            cout<<input[i-1];
        }
        else if(input[i]=='R')
        {
            cout<<input[i+1];
        }
        else
        {
            cout<<input[i];
        }
    }
}

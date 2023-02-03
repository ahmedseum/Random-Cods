#include<bits/stdc++.h>
using namespace std;

int main()
{
    char input[2000],combination[2000];
    cin.getline(input,2000);
    int j=0,count=0;
    for(int i=(strlen(input)-1);i>=0;i--)
    {
        combination[j]=input[i];
        j++;
    }
    for(int k=0;k<strlen(input);k++)
    {
        if(combination[k]==input[k])
        {
            count++;
        }
    }
    if(count == strlen(input))
    {
        cout<<"YES"<<endl;
    }
    else
    {
        cout<<"NO"<<endl;
    }

}

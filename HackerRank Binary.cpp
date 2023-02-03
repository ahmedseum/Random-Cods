#include<bits/stdc++.h>
using namespace std;

int main()
{
    int number,reminder,div,binary[10000],i=0,j;
    int count =0,s=0,s1=0,p=0;
    cin>>number;
    while(number>0)
    {
        reminder=number%2;
        div=number/2;
        number=div;
        binary[i]=reminder;
        i++;
    }
// binary numbers in reverse-------------------
    for(int j=i;j>=0;j--)
    {
        if(binary[j]==1)
        {
            count++;
            cout<<"pp "<<count<<endl;
        }else if(binary[j]==0)
        {
            if(s<=count)
            {
                s=count;
                count=0;
              cout<< "ss "<<s<<endl;
            }
            else if(s>count)
            {
                s1=count;
                count=0;
               // s=s1;
                cout<<s1<<" dd "<<endl;
            }
        }
}
cout<<endl;
if(s>count)
{

    cout<<s;
}

else
    {cout<<count;}
    cout<<endl;
        for(int j=i-1;j>=0;j--)

    {
    cout<<binary[j];
    }
}


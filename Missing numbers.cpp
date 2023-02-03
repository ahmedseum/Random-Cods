#include<bits/stdc++.h>
using namespace std;

int main()
{
    int numbers[10000],limit;
    cin>>limit;
    for(int i=0;i<limit;i++)
    {
        cin>>numbers[i];
    }
    int low=numbers[0];
    for(int j=1;j<limit;j++)
    {
        if(low>numbers[j])
        {
            low=numbers[j];
        }
    }
    int array[2000],k;
    for(int i=0;i<limit;i++)
    {
        array[i]=low+i;
    }
    for(int k=0;k<limit;k++)
    {
        int count =0;
        for(int d=0;d<limit;d++)
        {
            if(numbers[d]!=array[k])
            {
                 count++;
            }

        }
        if(count==limit)
        {
            cout<<array[k];
        }
    }
}

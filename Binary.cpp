#include<bits/stdc++.h>
using namespace std;

int main()

{while(1){
    int number,reminder,div,binary[10000],i=0;
    cin>>number;
    while(number>0)
    {
        reminder=number%2;
        div=number/2;
        number=div;
        binary[i]=reminder;
        i++;
    }
    for(int j=i-1;j>=0;j--)
    {
        cout<<binary[j];
    }

}}

#include<iostream>
using namespace std;

int main()
{
    int x,y,reminder;
    cin>>x>>y;
    if(x>y)
    {
        reminder=x%y;
    }
    else
    {
        reminder=y%x;
    }
    if(reminder==0)
    {
     {
         if(x>y)
         {
             cout<<x;
         }
         else
         {
             cout<<y;
         }
     }
    }else
    {
        cout<<(x/reminder)*(y/reminder)*reminder;4
    }

}

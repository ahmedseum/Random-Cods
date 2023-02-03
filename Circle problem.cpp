#include<bits/stdc++.h>
using namespace std;

int main()
{
    int c1,c2,r,x,y,rxy;
    cin>>c1>>c2>>r>>x>>y;
    rxy=pow((pow((c1-x),2)+pow((c2-y),2)),.5);
    if(rxy<=r)
    {
        cout<<"Inside the circle"<<endl;
    }
    else
    {
        cout<<"Outside the circle"<<endl;
    }
}

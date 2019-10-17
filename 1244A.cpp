#include<bits/stdc++.h>
using namespace std;
int main()
{
int t;
cin>>t;
while(t--)
{
float a,b,c,d,k;
cin>>a>>b>>c>>d>>k;
int x=ceil(a/c);
int y=ceil(b/d);
if(x+y<=k)
cout<<x<<" "<<y<<"\n";
else
cout<<-1<<endl;
}
}
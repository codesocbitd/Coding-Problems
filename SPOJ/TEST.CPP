#include <iostream>
using namespace std;
int main()
{
int a[100],i;
for(i=0;i<=100;i++)
{
cin>>a[i];
if(a[i]!=42)
cout<<a[i]<<"\n";
else
break;
}
return 0;
}

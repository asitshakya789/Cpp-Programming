#include<iostream>.h
using namespace std;
int main()

{
int  n ,i,j,k;
cout<<"Enter the number";
cin>> n;
for(i=0;i<=n;i++)
{
    for(j=5;j>=i;j--)
    {
        cout<<"*"<<endl;
        cout<<"/n";

    }
    return 0 ;
}
}
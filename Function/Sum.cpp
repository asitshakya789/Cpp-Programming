#include<iostream>
using namespace std;
int sum (int n, int m)
{
    int ans = m+n;
    return ans;
}
int main()
{
    int a,b;
    cout<<"Enter 2 number=";
    cin>>a>>b;
    cout<<sum(a,b);
    cout<<endl;
}
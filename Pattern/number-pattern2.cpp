#include<iostream>
using namespace std;
int main()
{
    int n;
    cout<<"Enter the number:-";
    cin>>n;
    for(int i =1;i<=n;i++)
    {
        for(int j= 5 ;j>=i;j--)
        {
            cout<<i;
        }
        cout<<endl;
    }
}
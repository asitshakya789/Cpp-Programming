#include<iostream>
using namespace std;
int main()
{
    int n;
    cout<<"Enter the number:-";
    cin>>n;
    for(int i = 1 ; i<=5 ; i++)
    {
        for(int j = 1;j<=n-i;j++)
        cout<<"  ";
        for( int j =i ;j>=i;j--)
        {
            cout<<i<<" ";
        }
        cout<<endl;
    }

}
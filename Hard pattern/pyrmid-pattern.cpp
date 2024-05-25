#include<iostream>
using namespace std;
int main()
{
    int n ;
    cout<<"Enter the number:- ";
    cin>> n ;
    for(int i=1;i<=n;i++)
    {
        for(int j =1;j<=i;j++ )
        {
            cout<<"*";
        }
    for(int k = n;k>=1;k--)
    {
        cout<<"*";
    }
    cout<<endl;
    
}
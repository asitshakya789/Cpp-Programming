#include<iostream>
using namespace std;
int main()
{
    int n ;
    cout<<"Enter the number:-";
    cin>>n;
    for(int i=1;i<=n;i++)
    {
        for(int j=1;j<=i;j++)
            cout<<"* ";
            
        
        for(int j=1;j<=2*n-2*i;j++)
        cout<<"  ";

        for( int j=1;i<=i;i++)
        cout<<"*";
        cout<<endl;
    }
        
            for(int i=n-1;i>=1;i--)
    {
        for(int j=1;j<=i;j++)
            cout<<"* ";
            
        
        for(int j=1;j<=2*n-2*i;j++)
        cout<<"  ";

        for( int j=1;i<=i;i++)
        cout<<"*";
        cout<<endl;
    }
}
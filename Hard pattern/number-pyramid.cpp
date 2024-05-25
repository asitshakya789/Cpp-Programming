#include<iostream>
using namespace std;
int main()
{
    int n;
    cout<<"Enter the number:-";
    cin>> n;
    for(int i= 0 ;i<=n;i++)
    {
        for(int j = 1;j <=n-i;j++)
        {
            cout<<"  ";
        }
        for(int k =1;k<=i;k++)
        cout<<k<<" ";
        for(int k=i-1;k>=1;k--)
        {
            cout<<k<<" ";
        }
        cout<<endl;
    }

}
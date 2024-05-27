#include<iostream>
using namespace std;
int main()
{
    int n;
    cout<<"Enter the number:-";
    cin>>n;
    for(int i =1;i<=n;i++)
    {
        char name = 'f'+i-1;
        for(int j= 1 ;j<=n;j++)
        {
            cout<<name<<" ";
            ++name;
        }
        cout<<endl;
    }
}
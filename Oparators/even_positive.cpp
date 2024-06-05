#include<iostream>
using namespace std;
int main()
{
    int n;
    cout<<"Enter the mnumber:-";
    cin>>n;
    if(n%2==0 && n >0)
    { 
        cout<<"number is positive or even";
    }
    else
    {
        cout<<"Number is negative or odd";
    }
}
#include<iostream>
using namespace std;

bool prime (int n)
{
    if(n<2)
    return 0 ;
    
    for(int i=2; i<n;i++)
    {
        if(n%i==0)
        return 0;
    }
    return 1;
}
int main()
{
    int a,b;
    cout<<"Enter a value:=";
    cin>>a;
    cout<<"Enter b value :=";
    cin>>b;  
    cout<<prime(a);

}
#include<iostream> 
using namespace std;
int main()
{
    int n,i=1;
    for(i=1;i<=100;i++)
    {
        if(i%4==0)
        continue;
        cout<<i<<" ";
    }
}
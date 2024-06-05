#include<iostream> 
using namespace std;
int main()
{
    int t;
    cout<<"Enter the termperature:-";
    cin>>t;
    if(t>70 && t<90)
    {
        cout<<"Yes temp is medium";
    }
    else{
        cout<<"No";
    }
}
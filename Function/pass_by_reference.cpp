#include<iostream>
using namespace std;
int incre (int &n)
{
    n++;
}
int main()
{
    int a = 4;
    cout<<a;
    cout<<endl;
    cout<<incre(a);
}
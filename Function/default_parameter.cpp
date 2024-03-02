#include<iostream>
using namespace std;
int sum(int a=2, int b=4)/// value assigne are called default parameter
{
    return a+b;

}
int main() 
{
    int a,b;
    cout<<sum();// default parameter
}
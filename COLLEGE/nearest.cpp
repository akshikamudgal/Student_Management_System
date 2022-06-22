//nearrest prime
#include<iostream>
using namespace std;
bool check(int n)
{
    for(int i=2;i<n;i++)
    {
        if(n%i==0)
        {
            return false;
        }
    }
    return true;
}
int nearest(int n)
{
    int out1,out2;
    for(int i=n-1;i>1;i--)
    {
        if(check(i))
        {
            out1=i;
        }
    }
    for(int i=n+1;i<n+20;i++)
    {
        if(check(i))
        {
            out2=i;
        }
    }
    int a=n-out1;
    int b=out2-n;
    if(a<b)
    {
        return out1;
    }
    else
    {
        return out2;
    }
}
int main()
{
    int n;
    cin>>n;
    cout<<nearest(n);
}

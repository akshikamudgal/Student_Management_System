#include <iostream>
#include<vector>
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
int main()
{
    int a,b;
    cin>>a>>b;
    int count=0;
    for(int i=a;i<=b;i++)
    {
        if(check(i)){
            if(check(i+6))
            {
                count++;
            }
        }
    }
    cout<<count;
}

#include<iostream>
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
bool checkUgly(int n)
{
    if(n==2 || n==3 || n==5)
    {
        return true;
    }
}
int factor(int n)
{
    vector <int> v;
    vector <int> ugly;
    for(int i=0;i<n;i++)
    {
        if(n%i==0)
        {
            if(check(i)){
                v.push_back(i);
            }
        }
    }
    if(v.size()==3)
    {
        
    }
}
int main()
{
    int n;
    cin>>n;
    factor(n);
}

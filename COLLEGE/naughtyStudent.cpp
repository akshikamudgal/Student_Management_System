//count the no times student name appears on blackboard , output is name  and then frequency in alphabetical order
#include<bits/stdc++.h>
using namespace std;
int main()
{
    int n;
    string name;
    map<string,int>m;
    cin>>n;
    while(n--)
    {
        cin>>name;
        m[name]++;
    }
    map<string,int>::iterator it;
    for(it=m.begin(); it!=m.end() ;it++)
    {
        cout<<it->first<<" "<<it->second<<endl;
    }
}

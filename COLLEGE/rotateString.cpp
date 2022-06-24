#include <iostream>
#include<string.h>
using namespace std;
string left(string s,int n)
{
    string temp= s+s;
    int l1= s.size();
    string leftTurn=temp.substr(n,l1);
    
    return leftTurn;
}
string right(string s,int n)
{
    return left(s,s.size()-n);
}
int main()
{
    string s;
    cin>>s;
    int j;
    cin>>j;
    char a;
    cin>>a;
    if(a =='L')
    {
        cout<<left(s,j);
    }
    else
    {
        cout<<right(s,j);
    }
}


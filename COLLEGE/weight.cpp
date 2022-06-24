//weight is A=1,B=2*A+A,C=3*B+B.....
#include <iostream>
#include<string.h>
using namespace std;
int main()
{
    
    string s;
    cin>>s;
    int sum=0;
    for(int i=1;i<s.size();i++)
    {
        char n=s[i];
        sum= sum+s[n- 'a'+ 1 ];
    }
    cout<<sum;
}

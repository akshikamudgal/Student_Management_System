#include<bits/stdc++.h>
using namespace std;
int romanToInt(string s) 
{
  map<char,int>m{{'I',1},{'V',5},{'X',10},{'L',50},{'C',100},{'D',500},{'M',1000}};
  int result = 0;
  for(int i=0;i<s.length()-1;i++)
  {
    if(m[s[i]]<m[s[i+1]])
      result -=m[s[i]];
    else
      result +=m[s[i]];

  }
    result+= m[s[s.length()-1]];
    return result;
}
int main()
{
  string s;
  cin>>s;
  cout<<romanToInt(s);
}

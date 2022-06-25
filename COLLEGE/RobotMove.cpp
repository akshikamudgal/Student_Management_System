#include<iostream>
using namespace std;
int total(int cr,int cc,int r,int c)
{
    if(cr>r ||cc>c)
    {
        return 0;
    }
    if(cr==r && cc==c)
    {
        return 1;
    }
    return total(cr,cr+1,r,c) + total(cr+1,cc,r,c);
}
int main()
{
	int m,n;
	cin>>m>>n;
	cout<<total(0,0,m-1,n-1);
	return 0;
}

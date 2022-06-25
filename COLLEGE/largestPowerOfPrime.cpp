/*#include<iostream>
#include<math.h>
using namespace std;
int main()
{
	int p,q;
    int sum=0;
    cin>>p>>q;
    for(int i=0;i<p;i++)
    {
       if(pow(i,2)<p)
       {
           sum=sum+ q/pow(i,2);
       } 
    }
    cout<<sum;
}*/

#include<iostream>
#include<math.h>
using namespace std;
int main()
{
	int p,q;
    int sum=0;
    cin>>p>>q;
    while(p)
    {
       p/=q;
       sum+=p;
    }
    cout<<sum;
}

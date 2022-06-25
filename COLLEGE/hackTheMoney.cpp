// having 1 rupee first hack give 10 rupee and second hack give 20 rupee, I want nrupees in my account.Give no of times have to do the hack for desired amount of money

/*#include<iostream>
using namespace std;
int main()
{
	int n;
    cin>>n;
    int temp,a;
    for(int i=1;i<1000;i++)
    {
        a= i*10;
        temp=a*20;
        if(temp==n)
        {
            cout<<"Yes";
            break;
        }
        else if(temp>n)
        {
            cout<<"No";
            break;
        }
    }
}*/

#include<iostream>
using namespace std;
bool hack(long long, long long);
int main()
{
   int test;
   cin>>test;
   for(int i=0;i<test;i++)
   {
       long long target;
       cin>>target;
       if(hack(target,1))
          cout<<"Yes"<<endl;
       else
          cout<<"No"<<endl;
   }
}
bool hack(long long target, long long current)
{
    if(current==target)
       return true;
    else if(current>target)
       return false;
    else{
        if(hack(target,10*current))
           return true;
        if(hack(target,20*current))
           return true;
    }
    return false;
}

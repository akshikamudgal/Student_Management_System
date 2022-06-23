#include <iostream>
#include<vector>
using namespace std;

int main()
{
   int a,b;
   cin>>a>>b;
   int count=0;
   for(int i=a;i<=b;i++)
   {
       int num1=i%10;
       int num2=i/10;
       if(num1 !=num2)
       {
           count++;
       }
   }
   if(count>0){
   cout<<count;
   }
   else
   {
       cout<<"No Unique Number";
   }
}

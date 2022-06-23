#include<iostream>
using namespace std;
void move(int arr[],int n)
{
    int count=0;
    for(int i=0;i<n;i++)
        if(arr[i]!= 1)
           arr[count++]=arr[i];
    while(count<n)
      arr[count++]=1;
}
int main()
{
   int n;
   cin>>n;
   int arr[n];
   for(int i=0;i<n;i++)
   {
       cin>>arr[i];
   }
   move(arr,n);
   for(int i=0;i<n;i++)
   {
       cout<<arr[i];
   }
}

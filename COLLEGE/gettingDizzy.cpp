// matrix check matrix or not display all elements in a single row
#include<bits/stdc++.h>
using namespace std;
int main()
{
   int n;
   cin>>n;
   int a[n][n];
   for(int i=0;i<n;i++)
   {
     for(int j=0;j<n;j++)
     {
         cin>>a[i][j];
     }  
   }
   int count =1;
   int round =ceil((double)n/2);
   for(int i=0;i<round;i++)
   {
       for(int j=i;j<n-i-1;j++)
       {
           cout<<a[i][j]<<" ";
       }
       for(int j=i+1;j<n-i-1;j++)
       {
           cout<<a[j][n-i-1]<<" ";
       }
       for(int j=n-i-2;j>=i;j--)
       {
           cout<<a[n-i-1][j]<<" ";
       }
       for(int j=n-i-2;j>i;j--)
       {
           cout<<a[j][i]<<" ";
       }
   }
}

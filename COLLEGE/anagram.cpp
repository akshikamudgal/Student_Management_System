#include<iostream>
#include<string.h>
using namespace std;
int main()
{
    char str1[100],str2[100];
    cin>>str1;
    cin>>str2;
    if(strlen(str1)!=strlen(str2)){
        cout<<"Not Anagram";
    }
    else{
      for(int i=0;i<strlen(str1);i++)
      {
          for(int j=0;j<strlen(str1);j++)
          {
              if(str1[i]==str2[j])
              {
                  cout<<"Anagram";
              }
              break;
          }
      }
    }
}

//Extract largest number from string

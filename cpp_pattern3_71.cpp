#include <bits/stdc++.h>
using namespace std;
int main()
{
  int n;
  cin>>n;
  int k=n;
  for(int i{1};i<=n;i++)
  {
    for(int j{1};j<=n;j++)
    {
      if(k<=j)
      {
        cout<<"*";
      }
      else
      {
        cout<<" ";
      }

    }
    k--;cout<<endl;
  }
}

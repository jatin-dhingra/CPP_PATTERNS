#include <bits/stdc++.h>
using namespace std;
int main()
{
  int n;
  cin>>n;
  int num{1};
  int k=n;
  for(int i{1};i<=n;i++)
  {
    for(int j{1};j<=n;j++)
    {

      if(k<=j)
      {
        cout<<num<<"";
      }
      else
      {
        cout<<" ";
      }

    }
    k--;
    num++;
    cout<<endl;
  }
}

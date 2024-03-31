#include<bits/stdc++.h>
using namespace std;
int main()
{
  int testcase;
  cin>>testcase;
  while(testcase--)
  {
    int n;
  cin>>n;
  string s;
  cin>>s;
  int k;
  cin>>k;
  char c[k];
  for(int i = 0;i<k;i++)
  {
    cin>>c[i];
  }
  int last = -1; // holds the last special character
  int max_count = 0;
  for(int i = n-1;i>=0;i--)
  {
    if(last != -1)
    {
      max_count = max(max_count,last -i);
    }
    for(int j = 0;j<k;j++)
    {
      if(s[i] == c[j])
      {
        last = i;
      }
    }
  }

  cout<<max_count<<endl;


  }


  return 0;
}
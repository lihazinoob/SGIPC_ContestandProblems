#include<bits/stdc++.h>
using namespace std;
int main()
{
  int n;
  cin>>n;
  int p[n+1];
  for(int i = 1;i<=n;i++)
  {
    cin>>p[i];
  }
  

  int q;
  cin>>q;
  while (q--)
  {
    /* code */

    int a,b;
    cin>>a>>b;
    int aindex,bindex;
    for(int i = 1;i<=n;i++)
    {
      if(p[i] == a)
      {
        aindex = i;
      }
      else if(p[i] == b)
      {
        bindex = i;
      }
    }
    //cout<<aindex<<" "<<bindex;
    //cout<<endl;
    
    if(aindex <bindex)
    {
      cout<<p[aindex]<<endl;
    }
    else if(aindex>bindex)
    {
      cout<<p[bindex]<<endl;
    }
    
  }
  


  return 0;
}
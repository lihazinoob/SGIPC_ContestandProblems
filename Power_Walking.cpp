#include<bits/stdc++.h>
using namespace std;

void solve()
{
  int n;
  cin>>n;
  int a[n+1];
   set<int>distinctnumbers; // to store the distinct elements of array a
  for(int i = 1;i<=n;i++)
  {
    cin>>a[i];
    distinctnumbers.insert(a[i]);
  }
  int count = distinctnumbers.size(); //count holds the number of distinct elements
 
  //cout<<count<<" ";

  for(int i = 1;i<=n;i++)
  {
    if(i<=count)
    {
      cout<<count<<" ";

    }
    else
    {
      cout<<i<<" ";
    }
  }
  cout<<endl;


}





int main()
{
  int testcase;
  cin>>testcase;
  while (testcase--)
  {
    /* code */
    solve();
  }
  


  return 0;
}
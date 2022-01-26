#include <iostream>
#include <string>
#include <cmath>
#include <algorithm>
using namespace std;

int a,b;
int n;
int tmp[6];

int main()
{
  cin>>a>>b;
  int t=abs(a-b);
  cin>>n;
  for(int i=0;i<n;i++)
  {
      cin>>tmp[i];
      tmp[i]=abs(tmp[i]-b)+1;
  }
  sort(tmp,tmp+n);
  
  if(tmp[0]<t) cout<<tmp[0];
  else cout<<t;
  return 0;
}
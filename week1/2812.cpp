// Example program
#include <iostream>
#include <string>
#include <deque>
using namespace std;
int N,K;
string s;
deque<char> dq;

int main()
{
  cin>>N>>K;
  cin>>s;
  dq.push_back(s[0]);
  
  for(int i=1;i<N;i++)//input string index
  {
       while(!dq.empty( ) && K && dq.back()<s[i] )
       {
            dq.pop_back();
            K--;
       }
       dq.push_back(s[i]);
  }
  
  for(int i=0;i<(dq.size()-K);i++)
  {
      cout<<dq[i];
      //cout<<N-K<<"="<<dq.size()<<'\n';
  }
  return 0;
}


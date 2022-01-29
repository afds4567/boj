// Example program
#include <iostream>
#include <string>
#include <vector>
using namespace std;
int team[20][20];
int N;
int answer = 2000;

int calc(vector<int> &x)
{   
    int tot=0;
    for(auto a:x)
    {
        for(auto b:x)
        {
            tot+=team[a][b];
        }
    }
    return tot;
}

void dfs(vector<int> &a, vector<int> &b, int idx)
{
    if(idx==N)
    {
        if(a.size()<1 || b.size()<1) return;
        answer=min(answer,abs(calc(a)-calc(b)));
        return;
    }
    a.push_back(idx);
    dfs(a,b,idx+1);
    a.pop_back();
    b.push_back(idx);
    dfs(a,b,idx+1);
    b.pop_back();
}

int main()
{
    cin>>N;
  for(int i=0;i<N;i++)
  {
      for(int j=0;j<N;j++)
      {
          cin>>team[i][j];
      }
  }
  
  vector<int> star,link;
  dfs(star,link,0);
  
  cout<<answer;
  return 0;
}
// Example program
#include <iostream>
#include <string>
#include <vector>
#include <algorithm>
using namespace std;

int N,M;
vector <string> s;
int answer=0;
int largest=0;

int main()
{
  cin>>N>>M;
  string tmp;
  for(int i=0;i<N;i++)
  {
      cin>>tmp;
      s.push_back(tmp);
  }
  
  for(int i=0;i<M;i++)
  {
      int a=0,c=0,g=0,t=0;
      
      for(int j=0;j<N;j++)
      {
          char key = s[j][i];
          //switch문 break안 걸어두면 다음 case자동 실행
          switch(key){
            case 'A' : a++;break;
            case 'C' : c++;break;
            case 'G' : g++;break;
            case 'T' : t++;break;
          }
       }
          largest = max(a>c?a:c,g>t?g:t);
          answer+=((N-largest));
          if(a ==largest) cout<<'A';
          else if(largest == c) cout<<'C';
          else if(largest == g) cout<<'G';
          else cout<<'T';
          
      }
      cout<<'\n'<<answer;
      
  
}

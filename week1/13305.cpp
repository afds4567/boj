// Example program
#include <iostream>
#include <string>
using namespace std;

long long price[100000];
long long dist[100000];
int N;
int tot;
int bestp;

int main()
{
  cin>>N;
  for(int i=0;i<N-1;i++)
  {
    cin>> dist[i]; 
  }
  for(int i=0;i<N;i++)
  {
      cin>>price[i];
  }
  
  tot=price[0]*dist[0];
  bestp=price[0];
  
  for(int i=1;i<N-1;i++)
  {
      if(price[i]<bestp) bestp=price[i];
      tot+=(bestp*dist[i]);
  }
  cout<<tot;
  return 0;
}
// Example program
#include <iostream>
#include <string>
using namespace std;
int A,B,N;
int main()
{
  cin>>A>>B;
  cin>>N;
  int answer = abs(B-A);
  for(int i=0;i<N;i++)
  {
      int tmp;
      cin>>tmp;
      if(answer>abs(tmp-B)+1) answer=abs(tmp-B)+1; 
  }
  cout<<answer;
}
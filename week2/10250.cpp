#include <iostream>
#include <string>
#include <functional>
using namespace std;

int T, H, W, N;
int main() {
    cin>>T;
    while(T--)
    {   
        string ans="";
        cin>> H>>W>>N;
        int first = N%H; 
        if(first==0) first = H;
        int second = N/H+1;
        if(N%H==0) second-=1;
        ans += to_string(first);
        if (second<10)  ans+='0';
        ans += to_string(second); 
        cout<<ans<<'\n';
        
    }
}
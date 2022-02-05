#include <iostream>
#include <string>
#include <functional>
#include <stack>
#include <vector>
using namespace std;

int N;
string s;
vector<int> alphabet(26);
int main() {
    
    cin>>N;
    cin>>s;
    for(int i=0;i<N;i++)
    {
        cin>>alphabet[i];   
    }
    
    stack<double> st;
    for(auto c : s)
    {
        if(c>='A' && c<='Z')
        {
            st.push(alphabet[c-'A']);
        }
        else
        {
            if (!st.empty())
            {
            double b = st.top(); st.pop();
            double a = st.top(); st.pop();
            double tmp =0;
            
            if(c=='+') tmp=a+b;
            else if(c=='-') tmp=a-b;
            else if(c=='/') tmp = a/b;
            else if(c=='*') tmp = a*b;
            
            st.push(tmp);
            //cout << tmp<<"()";
            }
        }
    }
    cout << fixed;
	cout.precision(2);
	cout << st.top() << '\n';
	
	return 0;
}
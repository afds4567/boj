#include <bits/stdc++.h>
using namespace std;

int main(void){

    int tc;
    cin>>tc;
    while(tc--) {
        string pwd;
        list<char> L;
        cin>>pwd;
        auto cursor=L.begin();
        for (auto c: pwd){
            if(L.empty()){
                if(c =='<' || c =='>' || c =='-' ){
                    cursor=L.begin();
                }
                else{
                    L.insert(cursor,c);    
                }
            }
            else{
                
                if(c=='<'){
                    if(cursor!=L.begin())cursor--;
                }
                else if(c=='>'){
                    if(cursor!=L.end()) cursor++;
                }
                else if(c=='-'){
                    if(cursor!=L.begin()){
                        cursor--;
                        cursor=L.erase(cursor);
                    }
                }
                else{
                    L.insert(cursor,c);
                    
                } 
            }
        }
        for(auto k : L) cout << k;
        cout << '\n';
    }
}
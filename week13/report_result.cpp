#include <string>
#include <vector>
#include <set>
#include <map>
#include <sstream>
#include <iostream>
using namespace std;

vector<int> solution(vector<string> id_list, vector<string> report, int k) {
    vector<int> answer;
    map<string, set<string>> m;
    map<string, int> m2;
    for(auto a : report){
        set<string> se;
        istringstream foo(a);
        string token;
        vector<string> tmp;
        while(getline(foo,token,' ')){
            tmp.push_back(token);
        }
        // se.insert(tmp[1]);
        // m[tmp[0]]=se;
        m[tmp[0]].insert(tmp[1]);
        //m2[tmp[1]]++;
    }
    
    for(auto b : m){
        set<string>::iterator iter;
        for(auto iter = b.second.begin(); iter != b.second.end(); iter++){
            
            m2[*iter]++;
        }
        
    }
    for(auto a : id_list){
        int cnt=0;
        set<string>::iterator iter;
        for(auto iter = m[a].begin(); iter != m[a].end(); iter++){
            if(m2[*iter]>=k) cnt++;
        }
        answer.push_back(cnt);
    }
    
    return answer;
}
#include <string>
#include <vector>

using namespace std;

int solution(string name) {
    int answer = 0;
    string initial_name;
    for(int i=0;i<name.size();i++){
        initial_name+='A';
    }
    
    int cur_index =0;  
    while(true){
        answer+=min(name[cur_index]-'A', 'Z'-name[cur_index]+1);
        initial_name[cur_index] = name[cur_index];
        
        if(initial_name == name) return answer;
        
        int r_index = cur_index;
        int r_cnt = 0;
        while(name[r_index] == initial_name[r_index]){
            r_index++;
            r_cnt++;
            if(r_index==name.size()) r_index=0;
        }
        int l_index = cur_index;
        int l_cnt = 0;
        while(name[l_index]==initial_name[l_index]){
            l_index--;
            l_cnt++;
            if(l_index==-1) l_index=name.size()-1;
        }
        if(l_cnt<r_cnt){
            answer+=l_cnt;
            cur_index=l_index;
        }
        else{
            answer+=r_cnt;
            cur_index=r_index;
        }
    }
}
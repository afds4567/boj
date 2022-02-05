#include<iostream>
#include<cstring>
#include<string>
#include<queue>
using namespace std;
int tc;
int start;int End;
bool vis[10000];

int main() {
    cin>>tc;
    
    
    while(tc--)
    {
        memset(vis,false,sizeof(vis));
        cin>>start>>End;
        queue<pair<int,string>> q;
        q.push(make_pair(start,""));
        vis[start]=true;
        while(!q.empty())
        {
        int cur = q.front().first;
        string s=q.front().second;
        q.pop();
        
        if(cur==End) {cout<<s<<'\n';break;}
        
        int nx = cur*2;
        if(nx>9999) nx %= 10000;
        if(vis[nx]==false)
        {
            q.push(make_pair(nx,s+"D"));
            vis[nx]=true;
        }
        
        nx = cur-1;
        if(nx<0) nx = 9999;
        if(vis[nx]==false)
        {
            q.push(make_pair(nx,s+"S"));
            vis[nx]=true;
        }
        
        nx = (cur%1000)*10 + cur/1000;
        if(vis[nx]==false)
        {
            q.push(make_pair(nx,s+"L"));
            vis[nx]=true;
        }
        
        nx = (cur%10)*1000 + (cur/10);
        if(vis[nx]==false)
        {
            q.push(make_pair(nx,s+"R"));
            vis[nx]=true;
        }
        }    
    }
    return 0;
}
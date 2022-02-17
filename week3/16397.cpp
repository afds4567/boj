#include <iostream>
#include <queue>
using namespace std;
int N, T, G; 
bool visited[100000];


int BFS(void)
{
    queue<pair<int, int>> q; 
    q.push({ N, 0 }); 
    visited[N] = true; 
    
    while (!q.empty())
    {
        int cur = q.front().first;
        int cnt = q.front().second;
        q.pop();
        if (cnt > T) break;
        if (cur == G)  return cnt;
        int A = cur + 1;
        if (A < 10000 && !visited[A])
        
        {
        visited[A] = true;
        q.push({ A, cnt + 1 });
        }

        int temp = cur * 2;
        if (temp >= 10000) continue;

        int B = temp;
        int digit = 1;
        while (temp)
        {
        temp /= 10;
        digit *= 10;
        }
        digit /= 10;
        B -= digit;
        
        if (B < 10000 && !visited[B])
        {
            visited[B] = true;
            q.push({ B, cnt + 1 });
        }
    
    }
    
    return -1;

}

 

int main(void)

{

     cin >> N >> T >> G;
    int answer = BFS();
    if (answer == -1) cout << "ANG\n";         
    else cout << result << "\n";
    return 0;

}


#include <iostream>
#include <map>
using namespace std;

int main() {
	ios_base::sync_with_stdio(0);
	cin.tie(0);

	int N, M;
	cin >> N >> M;

	map<string, string> m;

	for (int i = 0;i < N;i++)
	{
		string email, password;
		cin >> email >> password;
		m[email] = password;
	}
	for (int i = 0;i < M;i++)
	{
		string email;
		cin >> email;
		cout << m[email] << '\n';
	}

	return 0;
}



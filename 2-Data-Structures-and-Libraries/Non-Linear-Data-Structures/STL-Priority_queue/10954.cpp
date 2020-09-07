#include<bits/stdc++.h>

using namespace std;

#define fast ios_base::sync_with_stdio(0); cin.tie(0); cout.tie(0);
typedef long long ll;
typedef pair<int, int> ii;
typedef vector<ii> vii;
typedef vector<int> vi;
#define INF 1000000000
#define pb push_back
#define mk make_pair

#define flu(i, s, e) for(int i = s; i < e; i++)
#define fld(i, s, e) for(int i = s; i >= e; i--)


int main()
{
	fast;

	// freopen("input.txt", "r", stdin);
	// freopen("myoutput.txt", "w", stdout);

	int n, m;
	
	while(scanf("%d", &n), n)
	{
		priority_queue<int, vector<int>, greater<int>> q;

		while(n--)
		{
			scanf("%d", &m);
			q.push(m);
		}

		int total = 0, cost = 0;
		while(q.size() > 1)
		{
			total = q.top();
			q.pop();
			total += q.top();
			q.pop();
			cost += total;
			q.push(total);
		}
		printf("%d\n", cost);
	}

	return 0;
}
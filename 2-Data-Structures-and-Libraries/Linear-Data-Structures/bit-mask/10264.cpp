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

bool solve(int i, int j)
{
	int n = i ^ j;
	return ((n & (-n)) == n);
}

int main()
{
	fast;

	// freopen("input.txt", "r", stdin);
	// freopen("myoutput.txt", "w", stdout);

	int n, m;
	while(scanf("%d", &n) != EOF)
	{
		n = 1 << n;
		vi v(n, 0);
		flu(i, 0, n)
		{
			scanf("%d", &m);
			flu(j, 0, n)
			{
				if(solve(i, j) && i != j) v[j] += m;
			}
		}

		int ma(0);
		flu(i, 0, n)
		{
			flu(j, 0, n)
			{
				if(i == j || !solve(i, j))
				{
					continue;
				}
				ma = max(ma, v[i] + v[j]);
			}
		}
		printf("%d\n", ma);
	}

	return 0;
}
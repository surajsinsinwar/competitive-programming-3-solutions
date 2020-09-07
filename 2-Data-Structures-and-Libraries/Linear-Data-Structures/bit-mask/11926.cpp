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

bitset<1000001> bt;
int nr[1000001][2], r[1000001][3];
int n, m;

bool solve()
{
	int start, end;
	flu(i, 0, n)
	{
		start = nr[i][0];
		end = nr[i][1];
		flu(j, start + 1, end + 1)
		{
			if(bt.test(j))
			{
				return 1;
			}
			else bt.set(j);
		}
	}

	flu(i, 0, m)
	{
		start = r[i][0];
		end = r[i][1];
		while(start < 1000000)
		{
			flu(j, start + 1, end + 1)
			{
				if(bt.test(j))
				{
					return 1;
				}
				else bt.set(j);
			}
			start += r[i][2];
			end = min(end + r[i][2], 1000000);
		}
	}
	return 0;
}

int main()
{
	fast;

	// freopen("input.txt", "r", stdin);
	// freopen("myoutput.txt", "w", stdout);

	
	while(scanf("%d%d", &n, &m), (n || m))
	{
		bt.reset();
		flu(i, 0, n)
		{
			scanf("%d%d", &nr[i][0], &nr[i][1]);
		}
		flu(i, 0, m)
		{
			scanf("%d%d%d", &r[i][0], &r[i][1], &r[i][2]);
		}
		solve() ? printf("CONFLICT\n") : printf("NO CONFLICT\n");
	}

	return 0;
}
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

	int n, m, t;

	scanf("%d", &t);
	while(t--)
	{
		scanf("%d%d", &n, &m);
		if(m > n) printf("impossible\n");
		else
		{
			ll a, b;
			b = (n - m) / 2;
			a = m + b;
			a + b == n && abs(a - b) == m ? printf("%lld %lld\n", a, b) : printf("impossible\n");
		}
	}

	return 0;
}
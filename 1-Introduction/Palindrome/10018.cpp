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

	int t;
	scanf("%d", &t);
	ll n;

	while(t--)
	{
		scanf("%lld", &n);
		ll a(n), b(0);
		int count(0);
		while(a != b)
		{
			a = n;
			b = 0;
			while(n)
			{
				b = b * 10 + n % 10;
				n /= 10;
			}
			count++;
			n = a + b;
		}
		printf("%d %lld\n", count - 1, a);
	}

	return 0;
}
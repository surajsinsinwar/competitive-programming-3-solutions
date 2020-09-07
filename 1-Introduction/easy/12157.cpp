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

	int t, count(0);
	scanf("%d", &t);

	while(t--)
	{
		int n, temp, m(0), j(0); 
		scanf("%d", &n);

		flu(i, 0, n)
		{
			scanf("%d", &temp);
			m += ((1 + (int)floor(temp / 30)) * 10);
			j += ((1 + (int)floor(temp / 60)) * 15);
		}

		printf("Case %d: ", ++count);

		if(m < j)
		{
			printf("Mile %d\n", m);
		}
		else if(j < m)
		{
			printf("Juice %d\n", j);
		}
		else
		{
			printf("Mile Juice %d\n", m);
		}
	}

	return 0;
}
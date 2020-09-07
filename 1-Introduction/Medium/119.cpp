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

	int n, amount, people, gift, t(0);

	while(scanf("%d", &n) != EOF)
	{
		map<string, int> mp;
		char v[10][13];

		char temp[13];

		flu(i, 0, n)
		{
			scanf("%s", v[i]);
			mp[v[i]] = 0;
		}

		flu(i, 0, n)
		{
			scanf("%s%d%d", temp, &amount, &people);
			if(people == 0)
			{
				continue;
			}
			gift = (int)amount / people;
			mp[temp] -= (int)(gift * people);

			flu(j, 0, people)
			{
				scanf("%s", temp);
				mp[temp] += gift;
			}
		}

		if(t++ > 0) printf("\n");

		flu(i, 0, n)
		{
			printf("%s %d\n", v[i], mp[v[i]]);
		}
	}
	return 0;
}
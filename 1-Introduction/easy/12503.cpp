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

	while(t--)
	{
		int n, x = 0, temp;
		scanf("%d", &n);

		std::vector<char> v(n + 1);
		char arr[20];

		flu(i, 1, n + 1)
		{
			scanf("%s", arr);

			if(arr[0] == 'L')
			{
				v[i] = 'L';
				x--;
			}
			else if(arr[0] == 'R')
			{
				v[i] = 'R';
				x++;
			}
			else
			{
				scanf("%s%d", arr, &temp);
				v[i] = v[temp];
				if(v[temp] == 'R') x++;
				else x--;
			}
		}

		printf("%d\n", x);
	}

	return 0;
}
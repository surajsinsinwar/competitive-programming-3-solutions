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

	int n;
	while((cin >> n), n)
	{
		string s;
		cin >> s;

		int mi = n;
		int r = -n, d = -n;
		flu(i, 0, n)
		{
			if(s[i] == 'Z')
			{
				mi = 0;
				break;
			}
			else if(s[i] == 'R')
			{
				mi = min(mi, i - d);
				r = i;
			}
			else if(s[i] == 'D')
			{
				mi = min(mi, i - r);
				d = i;
			}
		}
		cout << mi << endl;
	}

	return 0;
}
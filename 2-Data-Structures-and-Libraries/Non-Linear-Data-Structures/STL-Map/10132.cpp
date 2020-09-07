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
	cin >> t;

	string s;
	getline(cin, s);
	getline(cin, s);

	while(t--)
	{
		vector<string> v;
		
		while(getline(cin, s) && !s.empty())
		{
			v.pb(s);
		}

		map<string, int> mp;
		flu(i, 0, (int)v.size())
		{
			flu(j, i + 1, (int)v.size())
			{
				mp[v[i] + v[j]]++;
				mp[v[j] + v[i]]++;
			}
		}

		map<string, int>::iterator it = mp.begin();
		map<string, int>::iterator p = mp.begin();
		for(; it != mp.end(); it++){
			if(it -> second > p -> second){
				p = it;
			}
		}

		cout << p -> first << "\n";
		if(t) cout << "\n";
	}

	return 0;
}
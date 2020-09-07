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

string removeSpace(string arr)
{
	int n = arr.length();
	string ans = "";
	flu(i, 0, n)
	{
		if(arr[i] == ' ')
		{
			continue;
		}
		ans.pb(arr[i]);
	}
	sort(ans.begin(), ans.end());
	return ans;
}

int main()
{
	fast;

	// freopen("input.txt", "r", stdin);
	// freopen("myoutput.txt", "w", stdout);

	int t;
	cin >> t;

	cin.ignore();
	cin.ignore();

	while(t--)
	{
		string arr;
		vector<string> v;

		while(getline(cin, arr) && arr != "") v.pb(arr);

		sort(v.begin(), v.end());

		string a, b;

		flu(i, 0, v.size())
		{
			flu(j, i + 1, v.size())
			{
				a = removeSpace(v[i]);
				b = removeSpace(v[j]);
				if(a.compare(b) == 0)
				{
					cout << v[i] << " = " << v[j] << "\n";
				}
			}
		}
		if(t) cout << "\n";
	}

	return 0;
}
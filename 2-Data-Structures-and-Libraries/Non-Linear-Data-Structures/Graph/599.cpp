
//    How strange it is : 
//        We wish to wear high brands,
//        but we feel most comfortable in pajaymas.
//
//        We wish to sit in Taj & Marriot with elight people,
//        but we enjoy roadside tea with friends and with people we love.
//
//        We wish to own big cars and go on long drives,
//        yet we talk our heart out only while walking down a long road.  
//
//    " Don't be serious, Enjoy Life as it Comes ".  
//
//    WORDS OF RATAN TATA         

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

void dfs(vector<int> v[], vector<bool> &flag, int n, int p)
{
	for(auto i : v[p])
	{
		if(flag[i] == 0)
		{
			flag[i] = 1;
			dfs(v, flag, n, i);
		}
	}
	return;
}

int main()
{
	fast;

	// freopen("input.txt", "r", stdin);
	// freopen("myoutput.txt", "w", stdout);

	int t;
	cin >> t;

	string arr;
	vector<bool> flag(26);

	while(t--)
	{
		vi v[26];
		flu(i, 0, 26) flag[i] = 1;

		while(cin >> arr, arr[0] != '*')
		{
			v[arr[1] - 'A'].pb(arr[3] - 'A');
			v[arr[3] - 'A'].pb(arr[1] - 'A');
		}

		cin >> arr;

		flu(i, 0, arr.length())
		{
			flag[arr[i++] - 'A'] = 0;
		}

		int a = 0, b = 0, n= arr.length() / 2;

		flu(i, 0, 26)
		{
			if(flag[i] == 0)
			{
				if(v[i].size() == 0) b++;
				else
				{
					a++;
					dfs(v, flag, n, i);
				}
			}
		}
		cout << "There are "<< a << " tree(s) and " << b <<" acorn(s).\n";
	}

	return 0;
}
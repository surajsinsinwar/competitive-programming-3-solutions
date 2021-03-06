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

bool cmp(char a, char b)
{
	if(a < 'a') a += 32;
	if(b < 'a') b += 32;
	return a < b;
}

int main()
{
	fast;

	// freopen("input.txt", "r", stdin);
	// freopen("myoutput.txt", "w", stdout);

	int n;
	cin >> n;

	string arr;
	while(n--)
	{
		cin >> arr;

		sort(arr.begin(), arr.end(), cmp);

		do
		{
			cout << arr << '\n';
		} while(next_permutation(arr.begin(), arr.end(), cmp));

		cout << '\n';
	} 

	return 0;
}
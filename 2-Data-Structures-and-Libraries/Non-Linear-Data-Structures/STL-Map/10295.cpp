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


int main(){
	fast;

	// freopen("input.txt", "r", stdin);
	// freopen("myoutput.txt", "w", stdout);

	int n, m, value, amount(0);
	scanf("%d%d", &n, &m);

	map<string, int> mp;
	char key[1000001];

	flu(i, 0, n){
		scanf("%s%d", key, &value);
		mp[key] = value;
	}

	flu(i, 0, m){
		amount = 0;
		while(scanf("%s", key), key[0] != '.') amount += mp[key];

		printf("%d\n", amount);
	}

	return 0;
}
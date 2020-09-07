#include<bits/stdc++.h>

using namespace std;

#define fast ios_base::sync_with_stdio(0); cin.tie(0); cout.tie(0);
typedef long long ll;
typedef pair<int, int> ii;
typedef vector<ii> vii;
typedef vector<int> vi;
#define INF 1000000000
#define pb push_back
#define flu(i, s, e) for(int i = s; i < e; i++)
#define fld(i, s, e) for(int i = s; i >= e; i--)


int main(){
	fast;

	// freopen("input.txt", "r", stdin);
	// freopen("myoutput.txt", "w", stdout);

	int j(1), n, i;
	std::vector<int> v;
	while(cin >> n){
		v.pb(n);
		i = floor(j/2); 
		sort(v.begin(), v.end());
		j % 2 != 0 ? cout << v[i] << endl : cout << (int)((v[i - 1] + v[i]) / 2) << endl;
		j++;
	}

	return 0;
}
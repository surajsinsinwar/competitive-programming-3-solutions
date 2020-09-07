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

string lower(string a){
	int n = a.length();
	flu(i, 0, n) if(a[i] >= 'A' && a[i] <='Z') a[i] = char(int(a[i]) - 'A' + 'a');
	return a;
}

int main(){
	fast;

	// freopen("input.txt", "r", stdin);
	// freopen("myoutput.txt", "w", stdout);

	std::vector<string> v;
	std::map<string, int> m;
	string s;
	int n(0);
	while(cin >> s && s != "#"){
		v.pb(s);
		s = lower(s);
		sort(s.begin(), s.end());
		++m[s];
		++n;
	}
	sort(v.begin(), v.end());
	flu(i, 0, n){
		s = v[i];
		s = lower(s);
		sort(s.begin(), s.end());
		if(m[s] == 1) cout << v[i] << endl;
	}

	return 0;
}
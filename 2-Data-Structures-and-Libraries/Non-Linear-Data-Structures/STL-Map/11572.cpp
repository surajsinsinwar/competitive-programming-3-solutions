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

	int t, n, key, ans(0); scanf("%d", &t);
	map<int, bool> mp;
	deque<int> q;
	while(t--){
		ans = 0;
		mp.clear();
		q.clear();
		scanf("%d", &n);
		while(n--){
			scanf("%d", &key);
			if(mp.find(key) == mp.end() || !mp[key]){
				mp[key] = 1;
				q.pb(key);
				ans = max(ans, (int)q.size());
			}
			else{
				while(mp[key]){
					mp[q.front()] = 0;
					q.pop_front();
				}
				q.pb(key);
				mp[key] = 1;
			}
		}
		printf("%d\n", ans);
	}

	return 0;
}
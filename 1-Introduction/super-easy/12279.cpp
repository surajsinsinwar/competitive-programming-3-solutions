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

	int n, count(0), m, j(1), total(0);
	while(scanf("%d", &n), n){
		count = total = 0;
		flu(i, 0, n){
			scanf("%d", &m);
			m == 0 ? total++ : count++;
		}
		printf("Case %d: %d\n", j++, count - total);
	}

	return 0;
}
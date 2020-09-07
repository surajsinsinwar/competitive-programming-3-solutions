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

	int t, n, up(0), down(0); scanf("%d", &t);
	flu(j, 1, t + 1){
		scanf("%d", &n);
		vi v(n); flu(i, 0, n) scanf("%d", &v[i]);
		up = down = 0;
		flu(i, 1, n){
			if(v[i - 1] == v[i]){continue;}
			v[i - 1] < v[i] ? up++ : down++;
		}
		printf("Case %d: %d %d\n", j, up, down);
	}

	return 0;
}
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

	int b, n, a, c, amount;
	vi v(20);
	while(scanf("%d%d", &b, &n), (b && n)){
		flu(i, 0, b) scanf("%d", &v[i]);

		while(n--){
			scanf("%d%d%d", &a, &c, &amount);
			v[a - 1] -= amount;
			v[c - 1] += amount;
		}

		bool flag(1);

		flu(i, 0, b){
			if(v[i] < 0){
				flag = 0;
				break;
			}
		}
		flag ? printf("S\n") : printf("N\n");
	}

	return 0;
}
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

	int t, n;
	ll a, b, c, sum(0);
	scanf("%d", &t);
	while(t--){
		scanf("%d", &n);
		sum = 0;
		while(n--){
			scanf("%lld %lld %lld", &a, &b, &c);
			sum += a*c;
		}
		printf("%lld\n", sum);
	}

	return 0;
}
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

	int t, a, b, c; scanf("%d", &t);
	flu(i, 1, t + 1){
		scanf("%d %d %d", &a, &b, &c);
		a <= 20 && b <= 20 && c <= 20 ? printf("Case %d: good\n", i) : printf("Case %d: bad\n", i);
	}

	return 0;
}
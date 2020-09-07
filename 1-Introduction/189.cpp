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

	int n, a, b, c, temp;
	scanf("%d %d %d %d", &n, &a, &b, &c);
	int t, z, s(0);
	flu(i, 0, n/a + 1){
		flu(j, 0, n/b + 1){
			if((n - (a*i) - (b*j)) % c == 0 && (n - (a*i) - (b*j) >= 0)){
				z = (n - (a*i) - (b*j))/c; t = i + j + z; s = max(t, s);
			}
		}
	}
	printf("%d\n", s);

	return 0;
}
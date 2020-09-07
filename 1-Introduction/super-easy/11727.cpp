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

	freopen("input.txt", "r", stdin);
	freopen("myoutput.txt", "w", stdout);

	int t, a[3]; scanf("%d", &t);
	flu(j, 1, t + 1){
		flu(i, 0, 3) scanf("%d", &a[i]);
		sort(a, a + 3);
		printf("Case %d: ", j);
		printf("%d\n", a[1]);
	}

	return 0;
}
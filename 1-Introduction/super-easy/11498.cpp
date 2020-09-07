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

	int t;
	signed int x, y, a, b;
	while(scanf("%d", &t), (t)){
		scanf("%d %d", &a, &b);
		while(t--){
			scanf("%u %u", &x, &y);
			if(x == a || y == b) printf("divisa\n");
			else{
				if(x < a) y < b ? printf("SO\n") : printf("NO\n");
				else y < b ? printf("SE\n") : printf("NE\n");
			}
		}
	}


	return 0;
}
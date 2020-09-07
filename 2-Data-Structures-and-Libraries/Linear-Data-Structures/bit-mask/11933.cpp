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

	int n;

	while(scanf("%d", &n), n){
		bitset<31> arr(n);
		int a(0), b(0), temp(1), i = arr._Find_first();
		bool flag(1);

		while(i < arr.size()){
			flag ? a += pow(2, i) : b += pow(2, i);
			flag = !flag; i = arr._Find_next(i);
		}
		printf("%d %d\n", a, b);
	}

	return 0;
}
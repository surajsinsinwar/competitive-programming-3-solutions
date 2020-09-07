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

	int t, n, mi(0); scanf("%d", &t);
	int arr[10001];
	flu(i, 1, t + 1){
		mi = 0;
		scanf("%d", &n);
		flu(j, 0, n) {scanf("%d", &arr[j]); mi =  max(mi, arr[j]);}
		printf("Case %d: ", i);
		printf("%d\n", mi);
	}

	return 0;
}
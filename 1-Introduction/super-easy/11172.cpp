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
#define flul(i, s, e) for(ll i = s; i < e; i++)
#define fldl(i, s, e) for(ll i = s; i >= e; i--)


int main(){
	fast;

	// freopen("input.txt", "r", stdin);
	// freopen("myoutput.txt", "w", stdout);

	int t; scanf("%d", &t);
	ll a, b;
	while(t--){
		scanf("%lli %lli", &a, &b);
		if(a > b) printf(">\n");
		else if(a < b) printf("<\n");
		else printf("=\n");
	}

	return 0;
}
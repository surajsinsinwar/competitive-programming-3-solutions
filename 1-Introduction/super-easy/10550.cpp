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

	int start, first, second, third;

	while(scanf("%d %d %d %d", &start, &first, &second, &third), (start || first || second || third)){
		printf("%d\n", 1080 + ((start - first + 40) % 40 + (second - first + 40) % 40 + (second - third + 40)%40)*9);
	}

	return 0;
}
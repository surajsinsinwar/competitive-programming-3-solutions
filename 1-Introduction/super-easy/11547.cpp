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

	ll t, a, temp;
	int b;
	double n;
	scanf("%lld", &t);
	while(t--){
		scanf("%lf", &n);
		n *= 567;
		n /= 9;
		n += 7492;
		n *= 235;
		n /= 47;
		n -= 498;
		a = n < 0 ? ceil(n) : floor(n);
		if(a < 0) temp = a , a -= 2*temp;
		b = a%10;
		a < 0 ? a += b : a -= b;
		a = floor(a/10);
		b = a%10;
		printf("%d\n", b);
	}

	return 0;
}
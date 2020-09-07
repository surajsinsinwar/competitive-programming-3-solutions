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

	int t, n; scanf("%d", &t);
	char a[30001];
	while(t--){
		scanf("%s", a);
		n = strlen(a);
		if(a[n - 1] == '5' && a[n - 2] == '3') printf("-\n");
		else if(a[0] == '9' && a[n - 1] == '4') printf("*\n");
		else if(a[0] == '1' && a[1] == '9' && a[2] == '0') printf("?\n");
		else printf("+\n");
	}

	return 0;
}
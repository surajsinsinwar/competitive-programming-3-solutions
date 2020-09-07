#include<bits/stdc++.h>

using namespace std;

#define fast ios_base::sync_with_stdio(0); cin.tie(0); cout.tie(0);
typedef long long ll;
typedef pair<int, int> ii;
typedef vector<ii> vii;
typedef vector<int> vi;
#define INF 1000000000
#define pb push_back
#define mk make_pair

#define flu(i, s, e) for(int i = s; i < e; i++)
#define fld(i, s, e) for(int i = s; i >= e; i--)


int main(){
	fast;

	// freopen("input.txt", "r", stdin);
	// freopen("myoutput.txt", "w", stdout);

	int n, x;
	queue<int> q;
	while (scanf("%d", &n), n) {
		flu(i, 1, n + 1) q.push(i);
		printf("Discarded cards:");
		while (q.size() > 1) {
			printf(" %d", q.front());
			q.pop();
			x = q.front();
			q.pop();
			if (!q.empty())
				printf(",");
			q.push(x);
		}
		printf("\nRemaining card: %d\n", q.front());
		q.pop();
	}

    return 0; 
} 
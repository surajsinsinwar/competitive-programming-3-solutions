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

    int n, i, j;
    while(scanf("%d", &n) == 1) {
        int y = 0;
        for(i = 0; i < 4; i++) {
            y = (y<<8)|((n>>(8*i))&255);
        }
        printf("%d converts to %d\n", n, y);
    }
    
    return 0;
}
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


int main()
{
	fast;

	// freopen("input.txt", "r", stdin);
	// freopen("myoutput.txt", "w", stdout);

	double h, m;

    while (scanf("%lf:%lf", &h, &m) != EOF && (h || m))
    {
    	h = h * 5;
    	if (h < m) h = h + 60;
        double ans = (h - m + m / 12.0) * 6;
        ans = (ans > 180 ? 360 - ans : ans);
        printf("%.3lf\n", (ans >= 0 ? ans : -ans));
  }

	return 0;
}
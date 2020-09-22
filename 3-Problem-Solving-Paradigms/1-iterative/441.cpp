
// https://onlinejudge.org/index.php?option=onlinejudge&Itemid=99999999&page=show_problem&category=0&problem=382&mosmsg=Submission+received+with+ID+25526409

#include<bits/stdc++.h>
using namespace std;

#ifdef declare

int32_t main()
{
    // fast;
    // freopen("input.txt", "r", stdin);
    // freopen("myoutput.txt", "w", stdout);

    int n;
    si(n);

    while(n != 0)
    {
    	vi v(n);
    	flu(i, 0, n) si(v[i]);

    	for(int a = 0; a < n; a++)
    		for(int b = a + 1; b < n; b++)
    			for(int c = b + 1; c < n; c++)
    				for(int d = c + 1; d < n; d++)
    					for(int e = d + 1; e < n; e++)
    						for(int f = e + 1; f < n; f++)
    							printf("%d %d %d %d %d %d\n",v[a],v[b],v[c],v[d],v[e],v[f]);
    	si(n);
    	if(n != 0) printf("\n");
    }

    return 0;
}





#else


#define fast ios_base::sync_with_stdio(0);cin.tie(0);cout.tie(0);
typedef long long ll;
typedef pair<int, int> ii;
typedef vector<ii> vii;
typedef vector<int> vi;
#define INF 1000000000
#define pb push_back
#define mk make_pair

#define si(a) scanf("%d", &a);
#define pi(a) printf("%d ", a);

#define sl(a) scanf("%lld", &a);
#define pl(a) printf("%lld ", a);

#define sc(a) scanf("%c", &a);
#define pc(a) printf("%c ", a);

#define ss(a) scanf("%s", s);
#define ps(a) printf("%s ", s);

#define flu(i, s, e) for(int i = s; i < e; i++)
#define fld(i, s, e) for(int i = s; i >= e; i--)

#define declare
#include __FILE__
#endif
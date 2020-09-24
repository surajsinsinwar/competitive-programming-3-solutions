
// https://onlinejudge.org/index.php?option=onlinejudge&Itemid=99999999&page=show_problem&category=0&problem=2612&mosmsg=Submission+received+with+ID+25531589

#include<bits/stdc++.h>
using namespace std;

#ifdef declare

int32_t main()
{
    // fast;
    // freopen("input.txt", "r", stdin);
    // freopen("myoutput.txt", "w", stdout);

    int t, A, B, C;
    si(t);

    while(t--)
    {
    	bool sol = false; int x, y, z;
    	scanf("%d%d%d", &A, &B, &C);
    	for (x = -22; x <= 22 && !sol; x++) if (x * x <= C)
    		for (y = -100; y <= 100 && !sol; y++) if (y != x && x * x + y * y <= C)
    			for (z = -100; z <= 100 && !sol; z++)
    				if (z != x && z != y && x + y + z == A && x * y * z == B && x * x + y * y + z * z == C) 
    				{
    					printf("%d %d %d\n", x, y, z);
    					sol = true;
    				}
    	if(!sol) printf("No solution.\n");
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
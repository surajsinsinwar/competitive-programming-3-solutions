
// https://onlinejudge.org/index.php?option=com_onlinejudge&Itemid=8&category=24&page=show_problem&problem=1099

#include<bits/stdc++.h>
using namespace std;

#ifdef declare

int32_t main()
{
    // fast;
    // freopen("input.txt", "r", stdin);
    // freopen("myoutput.txt", "w", stdout);

    int n, a, x, y;
    si(n);

    UnionFind dsu;
    dsu.init(20005);

    while(scanf("%d%d%d", &a, &x, &y), (a || x || y))
    {
        if(a == 1)
        {
            if(dsu.findSet(x) == dsu.findSet(y + n) || dsu.findSet(y) == dsu.findSet(x + n))
            {
                printf("-1\n");
            }
            else
            {
                dsu.unionSet(x, y);
                dsu.unionSet(x + n, y + n);
            }
        }
        else if(a == 2)
        {
            if(dsu.findSet(x) == dsu.findSet(y) || dsu.findSet(x + n) == dsu.findSet(y + n))
            {
                printf("-1\n");
            }
            else
            {
                dsu.unionSet(x, y + n);
                dsu.unionSet(y, x + n);
            }
        }
        else if(a == 3)
        {
            printf("%d\n", dsu.isSameSet(x, y) || dsu.isSameSet(x + n, y + n));
        }
        else
        {
            printf("%d\n", dsu.isSameSet(x, y + n) || dsu.isSameSet(x + n, y));
        }
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
#define pi(a) printf("%d", a);

#define sl(a) scanf("%lld", &a);
#define pl(a) printf("%lld ", a);

#define sc(a) scanf("%c", &a);
#define pc(a) printf("%c ", a);

#define ss(a) scanf("%s", s);
#define ps(a) printf("%s ", s);

#define flu(i, s, e) for(int i = s; i < e; i++)
#define fld(i, s, e) for(int i = s; i >= e; i--)



class UnionFind
{
public:
    vi p, r;

    void init(int n)
    { 
        r.reserve(n + 1);
        p.reserve(n + 1);
        for(int i = 0; i <= n; i++) p[i] = i , r[i] = 1;
            return;
    }

    int findSet(int x)
    { 
        if(p[x] == x) return x; 
        return p[x] = findSet(p[x]);
    }

    bool isSameSet(int a, int b)
    {
        return (findSet(a) == findSet(b));
    }

    void unionSet(int x, int y)
    {
        if(!isSameSet(x, y))
        {
            x = findSet(x); y = findSet(y);
            if(r[x] >= r[y]) p[y] = x , r[x] += r[y];
            else p[x] = y , r[y] += r[x];
        }
        return;
    }

    int numDisjointSets(int n)
    {
        int count = 0;
        for(int i = 1; i <= n; i++)
        {
            p[i] = findSet(i);
            if(p[i] == i) count++;
        }
        return count;
    }

    int sizeOfSet(int x)
    {
        return r[findSet(p[x])];
    }
};

#define declare
#include __FILE__
#endif
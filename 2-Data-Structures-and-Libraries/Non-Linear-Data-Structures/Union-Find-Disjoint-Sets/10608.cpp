
// https://onlinejudge.org/index.php?option=com_onlinejudge&Itemid=8&page=show_problem&category=0&problem=1549&mosmsg=Submission+received+with+ID+25470008

#include<bits/stdc++.h>

using namespace std;

#define fast ios_base::sync_with_stdio(0);cin.tie(0);cout.tie(0);
typedef long long ll;
typedef pair<int, int> ii;
typedef vector<ii> vii;
typedef vector<int> vi;
#define INF 1000000000
#define pb push_back
#define mk make_pair

#define flu(i, s, e) for(int i = s; i < e; i++)
#define fld(i, s, e) for(int i = s; i >= e; i--)

int p[30005], r[30005];

int find(int x)
{
    if(p[x] == x) return x;
    return p[x] = find(p[x]);
}

int Union(int a, int b)
{
    a = find(a);
    b = find(b);

    if(a != b)
    {
        if(r[a] < r[b])
        {
            p[a] = b;
            r[b] += r[a];
            return r[b];
        }
        else
        {
            p[b] = a;
            r[a] += r[b];
            return r[a];
        }
    }
    return r[a];
}

int32_t main()
{
    // fast;
    // freopen("input.txt", "r", stdin);
    // freopen("myoutput.txt", "w", stdout);

    int t;
    scanf("%d", &t);

    while(t--)
    {
        int n, m, a, b, ma = 0;
        scanf("%d%d", &n, &m);

        flu(i, 0, n + 1)
        {
            p[i] = i;
            r[i] = 1;
        }

        while(m--)
        {
            scanf("%d%d", &a, &b);
            ma = max(Union(a, b), ma);
        }

        flu(i, 1, n + 1)
        {
            ma = max(ma, r[i]);
        }

        printf("%d\n", ma);
    }

    return 0;
}
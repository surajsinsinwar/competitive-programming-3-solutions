
/*
How strange it is : 
    We wish to wear high brands,
    but we feel most comfortable in pajaymas.

    We wish to sit in Taj & Marriot with elight people,
    but we enjoy roadside tea with friends and with people we love.

    We wish to own big cars and go on long drives,
    yet we talk our heart out only while walking down a long road.

" Don't be serious, Enjoy Life as it Comes ".  

   WORDS OF RATAN TATA  
*/             

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

int p[50005];

int find(int x)
{
    if(p[x] == x) return x;
    return p[x] = find(p[x]);
}

void init(int n)
{
    for(int i = 1; i <=n ;i++)
    {
        p[i] = i;
    }
    return;
}

int32_t main()
{
    // fast;
    // freopen("input.txt", "r", stdin);
    // freopen("myoutput.txt", "w", stdout);

    int n, m, a, b, t = 1, count = 0;

    while(scanf("%d%d", &n, &m), (n || m))
    {
        init(n);
        count = 0;
        flu(i, 0, m)
        {
            scanf("%d%d", &a, &b);
            a = find(a);
            b = find(b);
            p[b] = a;
        }
        flu(i, 1, n + 1)
        {
            p[i] = find(p[i]);
            if(p[i] == i)
            {
                count++;
            }
        }

        printf("Case %d: %d\n", t++, count);
    }

    return 0;
}
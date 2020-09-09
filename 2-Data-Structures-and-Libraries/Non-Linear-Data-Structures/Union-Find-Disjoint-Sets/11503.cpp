
// https://onlinejudge.org/index.php?option=com_onlinejudge&Itemid=8&page=show_problem&category=0&problem=2498&mosmsg=Submission+received+with+ID+25470153

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

int p[200005], r[200005];

int find(int x)
{
    if(p[x] == x)
    {
        return x;
    }
    return p[x] = find(p[x]);
}

void Union(int a, int b)
{
    a = find(a);
    b = find(b);

    if(a != b)
    {
        p[b] = a;
        r[a] += r[b];
    }

    cout << r[a] << "\n";

    return;
}

int32_t main()
{
    // fast;
    // freopen("input.txt", "r", stdin);
    // freopen("myoutput.txt", "w", stdout);

    int t, n, i;
    cin >> t;

    string a, b;
    map<string, int> mp;

    while(t--)
    {
        cin >> n;
        mp.clear();
        i = 1;

        while(n--)
        {
            cin >> a >> b;
            if(mp.find(a) == mp.end())
            {
                mp[a] = i;
                p[i] = i;
                r[i] = 1;
                i++;
            }
            if(mp.find(b) == mp.end())
            { 
                mp[b] = i;
                p[i] = i;
                r[i] = 1;
                i++;
            }

            Union(mp[a], mp[b]);
        }
    }

    return 0;
}
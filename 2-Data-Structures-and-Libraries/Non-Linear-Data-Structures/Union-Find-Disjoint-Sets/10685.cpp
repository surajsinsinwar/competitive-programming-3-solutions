
// https://onlinejudge.org/index.php?option=com_onlinejudge&Itemid=8&page=show_problem&category=0&problem=1626&mosmsg=Submission+received+with+ID+25473794

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

int p[5005], r[5005];

int find(int x)
{
    if(p[x] == x) return x;
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

    return;
}

int32_t main()
{
    fast;
    // freopen("input.txt", "r", stdin);
    // freopen("myoutput.txt", "w", stdout);

    int n, k, ma = 0;
    string a, b;
    map<string, int> mp;

    while((cin >> n >> k), (n || k))
    {
        flu(i, 1, n + 1)
        {
            cin >> a;
            mp[a] = i;
            p[i] = i;
            r[i] = 1;
        }

        flu(i, 0, k)
        {
            cin >> a >> b;
            Union(mp[a], mp[b]);
        }

        ma = 0;
        flu(i, 1, n + 1)
        {
            ma = max(ma, r[i]);
        }

        cout << ma << "\n";

    }

    return 0;
}
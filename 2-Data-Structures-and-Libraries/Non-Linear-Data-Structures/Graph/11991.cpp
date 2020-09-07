
//    How strange it is : 
//        We wish to wear high brands,
//        but we feel most comfortable in pajaymas.
//
//        We wish to sit in Taj & Marriot with elight people,
//        but we enjoy roadside tea with friends and with people we love.
//
//        We wish to own big cars and go on long drives,
//        yet we talk our heart out only while walking down a long road.  
//
//    " Don't be serious, Enjoy Life as it Comes ".  
//
//    WORDS OF RATAN TATA         

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

    // freopen("input.txt", "r", stdin);
    // freopen("myoutput.txt", "w", stdout);

    int n, m;

    map<int, vector<int>> v;

    while(scanf("%d%d", &n, &m) != EOF)
    {
        int temp;
        flu(i, 1, n + 1)
        {
            scanf("%d", &temp);
            v[temp].pb(i);
        }
        int a, b;
        flu(i, 0, m)
        {
            scanf("%d%d", &a, &b);
            if(v[b].size() >= a)
            {
                printf("%d\n", v[b][a - 1]);
            }
            else
            {
                printf("0\n");
            }
        }
        v.clear();
    }

    return 0;
}
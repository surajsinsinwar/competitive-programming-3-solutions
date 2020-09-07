
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

    int t;
    cin >> t;
    while (t--)
    {
        int min_val = INF;
        int n;
        cin >> n;
        getchar();
        n++;
        vi graph(n, 0);
        flu(i, 1, n)
        {
            string s;
            int x = 1;
            getline(cin, s);
            for (int j = 0; j < s.length(); j++)
            {
                if (s[j] == ' ')
                    x++;
            }

            graph[i] = x;

            min_val = min(min_val, graph[i]);
        }
        vi ans;
        flu(i, 1, n)
        {

            if (graph[i] == min_val)
                ans.push_back(i);
        }
        for (int i = 0; i < ans.size(); i++)
        {
            cout << ans[i] << (i != ans.size() - 1 ? " " : "\n");
        }
    }

    return 0;
}
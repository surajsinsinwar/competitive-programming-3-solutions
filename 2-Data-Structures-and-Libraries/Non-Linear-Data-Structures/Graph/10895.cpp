
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

    vector<int> val[10000 + 1], seq[10000 + 1];
    queue<int> q;

    int total, temp;

    while(scanf("%d%d", &n, &m) == 2)
    {
        flu(i, 0, 10001)
        {
            val[i].clear();
            seq[i].clear();
        }

        flu(i, 1, n + 1)
        {
        	scanf("%d", &total);
        	if(total > 0)
        	{
        		flu(j, 0, total)
        		{
        			scanf("%d", &temp);
        			q.push(temp);
                }
                flu(j, 0, total)
                {
                	scanf("%d", &temp);
                	val[q.front()].pb(temp);
                	seq[q.front()].pb(i);
                	q.pop();
                }
            }
        }

        printf("%d %d\n", m, n);

        flu(i, 1, m + 1)
        {
        	temp = (int)val[i].size();
        	printf("%d", temp);
        	for(auto j : seq[i])
        	{
        		printf(" %d", j);
        	}
        	printf("\n");

        	int count = 0;

        	flu(j, 0, temp)
        	{
        		printf("%d", val[i][j]);
        		if(j < temp - 1) printf(" ");
        	}
        	printf("\n");
        }
    }

    return 0;
}
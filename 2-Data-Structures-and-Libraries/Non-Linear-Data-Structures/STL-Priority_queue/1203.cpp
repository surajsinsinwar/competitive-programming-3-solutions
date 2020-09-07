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

class argus
{
public:
	int id, p, c;
};

class cmp
{
public:
	bool operator() (argus a, argus b)
	{
		if(a.c != b.c)
		{
			return a.c > b.c;
		}
		return a.id > b.id;
	}
};

int main()
{
	fast;

	// freopen("input.txt", "r", stdin);
	// freopen("myoutput.txt", "w", stdout);

	char s[1001];
	int id, p, n;
	argus temp;

	priority_queue<argus, vector<argus>, cmp> q;

	while(scanf("%s", s))
	{
		if(s[0] == '#')
		{
			break;
		}
		scanf("%d %d", &id, &p);
		temp.id = id;
		temp.c = temp.p = p;
		q.push(temp);
	}

	scanf("%d", &n);
	
	while(n--)
	{
		printf("%d\n", q.top().id);
		temp = q.top();
		temp.c += temp.p;
		q.pop();
		q.push(temp);
	}

	return 0;
}
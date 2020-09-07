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
	fast;

	// freopen("input.txt", "r", stdin);
	// freopen("myoutput.txt", "w", stdout);

	int n, m, x;
	

	while(scanf("%d", &n) != EOF)
	{
		stack<int> st;
	    queue<int> q;
	    priority_queue<int> pq;
	    bool isS(1), isQ(1), isPQ(1);
		while(n--)
		{
			scanf("%d%d", &m, &x);
			if(m == 1)
			{
				if(isS) st.push(x);
				if(isQ) q.push(x);
				if(isPQ) pq.push(x);
			}
			else
			{
				if(isS)
				{
					if(st.empty() || st.top() != x) isS = 0;
					else st.pop();
				}
				if(isQ)
				{
					if(q.empty() || q.front() != x) isQ = 0;
					else q.pop();
				}
				if(isPQ)
				{
					if(pq.empty() || pq.top() != x) isPQ = 0;
					else pq.pop();
				}
			}
		}
		if(isS && !isQ && !isPQ) printf("stack\n");
		else if(!isS && isQ && !isPQ) printf("queue\n");
		else if(!isS && !isQ && isPQ) printf("priority queue\n");
		else if(!isS && !isQ && !isPQ) printf("impossible\n");
		else printf("not sure\n");
	}

	return 0;
}
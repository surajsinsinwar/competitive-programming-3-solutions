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

bool cmp(char a, char b)
{
	char aa = tolower(a), bb = tolower(b);
    if (aa == bb) return (a < b);
    return (aa < bb);
}

int main()
{
	fast;

	// freopen("input.txt", "r", stdin);
	// freopen("myoutput.txt", "w", stdout);

	int t;
	scanf("%d", &t);
	while(t--)
	{
		char a[101];
		scanf("%s", a);
		sort(a, a + strlen(a), cmp);
		do 
		{
			printf("%s\n", a);
		}while(next_permutation(a, a + strlen(a), cmp));
	}
	

	return 0;
}
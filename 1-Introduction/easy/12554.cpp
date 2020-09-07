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

	int n;
	scanf("%d", &n);

	char name[101][101], song[16][20] = {"Happy","birthday","to","you","Happy","birthday","to","you","Happy","birthday","to","Rujia","Happy","birthday","to","you"};

	flu(i, 0, n)
	{
		scanf("%s", name[i]);
	}

	int k(0), j(0), m(1);

	if(n > 16) m = floor(n / 16) + 1;

	flu(i, 0, m*16)
	{
		if(k == 16) k = 0;
		if(j == n) j = 0;
		printf("%s: %s\n", name[j], song[k]);
		j++; k++;
	}

	return 0;
}
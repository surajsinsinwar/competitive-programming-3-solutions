#include<bits/stdc++.h>

using namespace std;

#define fast ios_base::sync_with_stdio(0); cin.tie(0); cout.tie(0);
typedef long long ll;
typedef pair<int, int> ii;
typedef vector<ii> vii;
typedef vector<int> vi;
#define INF 1000000000
#define pb push_back
#define flu(i, s, e) for(int i = s; i < e; i++)
#define fld(i, s, e) for(int i = s; i >= e; i--)

int main() {
	fast;
	
	int tc;
	char s[20];

	scanf("%d", &tc);
	while (tc--) {
		scanf("%s", s);
		if (strlen(s) > 3)
			printf("3\n");
		else {
			if(s[0] == 'o' && s[1] == 'n' && s[2] == 'e') printf("1\n");
			else if(s[0] == 'o' && s[1] == 'n') printf("1\n");
			else if(s[0] == 'o' && s[2] == 'e') printf("1\n");
			else if(s[1] == 'n' && s[2] == 'e') printf("1\n");
			else if(s[0] == 't' && s[1] == 'w' && s[2] == 'o') printf("2\n");
			else if(s[0] == 't' && s[1] == 'w') printf("2\n");
			else if(s[0] == 't' && s[2] == 'o') printf("2\n");
			else if(s[1] == 'w' && s[2] == 'o') printf("2\n");
		}
	}

	return 0;
}
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


int main(){

	// freopen("input.txt", "r", stdin);
	// freopen("myoutput.txt", "w", stdout);

	char arr[20];
	scanf("%s", arr);
	for(int t = 1; arr[0] != '*'; ++t, scanf("%s", arr)){
		if(arr[0] == 'H') printf("Case %d: Hajj-e-Akbar\n", t);
		else printf("Case %d: Hajj-e-Asghar\n", t);
	}

	return 0;
}
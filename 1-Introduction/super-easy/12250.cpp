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


int main(){
	fast;

	// freopen("input.txt", "r", stdin);
	// freopen("myoutput.txt", "w", stdout);

	char arr[15];
	int n, j(1);
	while(scanf("%s", arr), (arr[0] != '#')){
		n = strlen(arr);
		printf("Case %d: ", j++);
		if(strcmp(arr,"HELLO")==0) printf("ENGLISH\n");
		else if(strcmp(arr,"HOLA")==0) printf("SPANISH\n");
		else if(strcmp(arr,"HALLO")==0) printf("GERMAN\n");
		else if(strcmp(arr,"BONJOUR")==0) printf("FRENCH\n");
		else if(strcmp(arr,"CIAO")==0) printf("ITALIAN\n");
		else if(strcmp(arr,"ZDRAVSTVUJTE")==0) printf("RUSSIAN\n");
		else printf("UNKNOWN\n");
	}

	return 0;
}
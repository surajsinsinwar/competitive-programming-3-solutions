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

bool palindrome(string arr){
	int n = arr.length();
	int j = n - 1;
	flu(i, 0, floor(n/2)){
		if(arr[i] != arr[j--]) return 0;
	}
	return 1;
}

int main(){
	fast;

	// freopen("input.txt", "r", stdin);
	// freopen("myoutput.txt", "w", stdout);

	char arr[10001];
	
	int n;
	while(scanf("%[^\n]%*c", arr), (strcmp(arr, "DONE"))){
		n = strlen(arr);
		string b;
		flu(i, 0, n){
			if(arr[i] >= 'A' && arr[i] <= 'Z') b.pb(char(int(arr[i]) - 'A' + 'a'));
			else if(arr[i] >= 'a' && arr[i] <= 'z') b.pb(arr[i]);
		}
		palindrome(b) ? printf("You won't be eaten!\n") : printf("Uh oh..\n");
	}

	return 0;
}
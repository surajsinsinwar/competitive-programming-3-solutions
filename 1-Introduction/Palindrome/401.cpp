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

map<char, char> m;

bool palindrome(string arr, int n){
	int j = n - 1;
	flu(i, 0, floor(n/2)){
		if(arr[i] != arr[j--]) return 0;
	}
	return 1;
}

bool reverse(string arr, string arr2, int n){
	int j = n - 1;
	flu(i, 0, n){
		if(arr[i] != arr2[j--]) return 0;
	}
	return 1;
}

int main(){
	fast;

	// freopen("input.txt", "r", stdin);
	// freopen("myoutput.txt", "w", stdout);

	char from[] = {'A', 'E', 'H', 'I', 'J', 'L',
                   'M', 'O', 'S', 'T', 'U', 'V',
                   'W', 'X', 'Y', 'Z', '1', '2',
                   '3', '5', '8'};
    char to[]   = {'A', '3', 'H', 'I', 'L', 'J',
                   'M', 'O', '2', 'T', 'U', 'V',
                   'W', 'X', 'Y', '5', '1', 'S', 
                   'E', 'Z', '8'};

    flu(i, 0, 21) m[from[i]] = to[i];

	char arr[10001], arr2[10001];
	bool p, r;
	int n;
	while(scanf("%s", arr) != EOF){
		n = strlen(arr);
		r = p = 1;
		p = palindrome(arr, n);
		
		flu(i, 0, n){
			if(!m.count(arr[i])){
				r = 0;
				break;
			}
			arr2[i] = m[arr[i]];
		}
		if(r) r = reverse(arr, arr2, n);
		if(p && r) printf("%s -- is a mirrored palindrome.\n", arr);
		else if(p & !r) printf("%s -- is a regular palindrome.\n", arr);
		else if(!p && r) printf("%s -- is a mirrored string.\n", arr);
		else printf("%s -- is not a palindrome.\n", arr);
		printf("\n");
	}

	return 0;
}
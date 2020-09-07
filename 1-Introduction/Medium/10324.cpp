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
	fast;

	// freopen("input.txt", "r", stdin);
	// freopen("myoutput.txt", "w", stdout);

	int Case(1);
	string arr;
	while(cin >> arr){
		int n; cin >> n;
		cout << "Case " << Case++ << ":" << endl;
		while(n--){
			int i, j, mi, ma; cin >> i >> j;
			mi = min(i, j); ma = max(i, j);
			bool flag(1);
			flu(k, mi, ma){
				if(arr[k] != arr[k + 1]){
					flag = 0;
					break;
				}
			}
			cout << (flag ? "Yes\n" : "No\n");
		}
	}

	return 0;
}
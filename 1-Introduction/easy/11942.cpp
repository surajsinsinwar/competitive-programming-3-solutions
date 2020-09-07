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

	int n; scanf("%d", &n);
	vi v(10);
	bool flag(1);
	printf("Lumberjacks:\n");
	while(n--){
		flu(i, 0, 10) scanf("%d", &v[i]);
		flag = 1;
		if(v[0] < v[1]){
			flu(i, 1, 10){
				if(v[i] < v[i - 1]){
					flag = 0;
					break;
				}
			}
		}
		else{
			flu(i, 1, 10){
				if(v[i] > v[i - 1]){
					flag = 0;
					break;
				}
			}
		}
		flag ? printf("Ordered\n") : printf("Unordered\n");
	}

	return 0;
}
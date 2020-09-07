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
#define range 1000010

int main(){
	fast;

	// freopen("input.txt", "r", stdin);
	// freopen("myoutput.txt", "w", stdout);

	int t, n, m, j(1);

	while(cin >> t, t){
		vi v(range, 0);
		vector< queue<int> > team(t + 1);
		queue<int> q;
		vi temp(t + 1, 0);
		flu(i, 1, t + 1){
			cin >> n;
			flu(j, 1, n + 1) cin >> m ,v[m] = i;
		}
		string arr;
		cout << "Scenario #" << j++ << endl;
		while(cin >> arr, (arr[0] != 'S')){
			if(arr[0] == 'E'){
				cin >> m;
				team[v[m]].push(m);
				if(temp[v[m]] == 0) q.push(v[m]);
				temp[v[m]]++;
			}
			else{
				cout << team[q.front()].front() << endl;
				team[q.front()].pop();
				temp[q.front()]--;
				if(temp[q.front()] == 0) q.pop();
			}
		}
		cout << endl;
	}

	return 0;
}
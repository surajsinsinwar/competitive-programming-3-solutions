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

	int n, arr[3001], temp, present, previous;
	while(scanf("%d", &n) == 1){
		flu(i, 0, 3001) arr[i] = 0;
		scanf("%d", &previous);
		flu(i, 1, n){
			scanf("%d", &present);
			temp = abs(present - previous);
			if(temp < n) arr[temp]++;
			previous = present;
		}
		bool flag(1);
		flu(i, 1 , n) if(arr[i] == 0){flag = 0; break;}
		flag ? printf("Jolly\n") : printf("Not jolly\n");
	}

	return 0;
}
#include<bits/stdc++.h>

using namespace std;

#define fast ios_base::sync_with_stdio(0); cin.tie(0); cout.tie(0);
typedef long long ll;
typedef pair<int, int> ii;
typedef vector<ii> vii;
typedef vector<int> vi;
#define INF 100000000
#define pb push_back
#define flu(i, s, e) for(int i = s; i < e; i++)
#define fld(i, s, e) for(int i = s; i >= e; i--)


int main(){
	fast;

	// freopen("input.txt", "r", stdin);
	// freopen("myoutput.txt", "w", stdout);

	int particepants, budget, hotels, weeks, sum, cost, available;
	while(scanf("%d %d %d %d", &particepants, &budget, &hotels, &weeks) == 4){
		sum = budget + 1;
		while(hotels--){
			scanf("%d", &cost);
			
			flu(i, 0, weeks) {
				scanf("%d", &available);
				if(available >= particepants && particepants*cost <= budget) sum = min(particepants*cost, sum);
			}
		}
		sum > budget ? printf("stay home\n") : printf("%d\n", sum);
	}
	return 0;
}
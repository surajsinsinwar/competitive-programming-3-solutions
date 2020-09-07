#include<bits/stdc++.h>
#include<cstdio>

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

	int p, q, a, b, sum; scanf("%d%d", &p, &q);
	map<string, int> mp;
	char party[1000];

	flu(i, 0, p){
		scanf("%s %d.%d", party, &a, &b);
		mp[party] = a * 10 + b;
	}
    getchar();
	flu(i, 1, q + 1){
		fgets(party, 1000, stdin);
		stringstream ss(party);
		printf("Guess #%d was ", i);
		sum = 0;
		while(ss >> party){
			if(strcmp(party, "<") == 0){
				ss >> a;
			    sum < a*10 ? printf("correct.\n") : printf("incorrect.\n");
			}
			else if(strcmp(party, ">") == 0){
				ss >> a;
				sum > a * 10 ? printf("correct.\n") : printf("incorrect.\n");
			}
			else if(strcmp(party, "<=") == 0){
				ss >> a;
				sum <= a * 10 ? printf("correct.\n") : printf("incorrect.\n");
			}
			else if(strcmp(party, ">=") == 0){
				ss >> a;
				sum >= a * 10 ? printf("correct.\n") : printf("incorrect.\n");
			}
			else if(strcmp(party, "=") == 0){
				ss >> a;
				sum == a * 10 ? printf("correct.\n") : printf("incorrect.\n");
			}
			else if(strcmp(party, "+") == 0){continue;}
			else sum += mp[party];
		}
	}
	return 0;
}
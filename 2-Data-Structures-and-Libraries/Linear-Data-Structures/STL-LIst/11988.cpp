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

	char arr[100001];
	int n;
	while(scanf("%s", arr) != EOF){
		list<char> linked_list;
		auto j = linked_list.begin();
		n = strlen(arr);
		flu(i, 0, n){
			if(arr[i] == '[') j = linked_list.begin();
			else if( arr[i] == ']') j = linked_list.end();
			else linked_list.insert(j, arr[i]);
		}
		for(j = linked_list.begin(); j != linked_list.end(); j++) printf("%c", *j);
			printf("\n");
	}

	return 0;
}
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

	map<string, string> mp;
	string key, value, temp;
	while(getline(cin, temp), temp != ""){
		stringstream ss(temp);
		ss >> value >> key;
		mp[key] = value;
	}
	while(getline(cin, key), key != ""){
		cout << (mp.find(key) == mp.end() ? "eh" : mp[key]);
		cout << "\n";
	}

	return 0;
}
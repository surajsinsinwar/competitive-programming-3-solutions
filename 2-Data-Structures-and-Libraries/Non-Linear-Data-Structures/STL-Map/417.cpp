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

map<string, int> mp;

void solve(){
	int top(1);
	string s;
	flu(i, 0, 26){
		s = 'a' + i;
		mp[s] = top++;
	}

	s = "aa";
	flu(i, 0, 26){
		flu(j, i + 1, 26){
			s[0] = 'a' + i, s[1] = 'a' + j;
			mp[s] = top++;
		}
	}

	s = "aaa";
	flu(i, 0, 26){
		flu(j, i + 1, 26){
			flu(k, j + 1, 26){
				s[0] = 'a' + i, s[1] = 'a' + j, s[2] = 'a' + k;
				mp[s] = top++;
			}
		}
	}

	s = "aaaa";
	flu(i, 0, 26){
		flu(j, i + 1, 26){
			flu(k, j + 1, 26){
				flu(l, k + 1, 26){
					s[0] = 'a' + i, s[1] = 'a' + j, s[2] = 'a' + k, s[3] = 'a' + l;
				    mp[s] = top++;
				}	
			}
		}
	}

	s = "aaaaa";
	flu(i, 0, 26){
		flu(j, i + 1, 26){
			flu(k, j + 1, 26){
				flu(l, k + 1, 26){
					flu(m, l + 1, 26){
						s[0] = 'a' + i, s[1] = 'a' + j, s[2] = 'a' + k, s[3] = 'a' + l, s[4] = 'a' + m;
				        mp[s] = top++;
				    }
				}	
			}
		}
	}
}

int main(){
	fast;

	// freopen("input.txt", "r", stdin);
	// freopen("myoutput.txt", "w", stdout);

	solve();

	string key;
	while(cin >> key){
		if(mp.count(key)) cout << mp[key] << "\n";
		else cout << "0\n";
	}


	return 0;
}
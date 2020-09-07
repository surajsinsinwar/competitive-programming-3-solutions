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

long L;
string dir, wire;
map<string, map<string, string> > bends;


int main(){
	fast;

	// freopen("input.txt", "r", stdin);
	// freopen("myoutput.txt", "w", stdout);

	bends["+x"]["+y"] = "+y";
	bends["+x"]["-y"] = "-y";
	bends["+x"]["+z"] = "+z";
	bends["+x"]["-z"] = "-z";
	bends["-x"]["+y"] = "-y";
	bends["-x"]["-y"] = "+y";
	bends["-x"]["+z"] = "-z";
	bends["-x"]["-z"] = "+z";
	bends["+y"]["+y"] = "-x";
	bends["+y"]["-y"] = "+x";
	bends["+y"]["+z"] = "+y";
	bends["+y"]["-z"] = "+y";
	bends["-y"]["+y"] = "+x";
	bends["-y"]["-y"] = "-x";
	bends["-y"]["+z"] = "-y";
	bends["-y"]["-z"] = "-y";
	bends["+z"]["+y"] = "+z";
	bends["+z"]["-y"] = "+z";
	bends["+z"]["+z"] = "-x";
	bends["+z"]["-z"] = "+x";
	bends["-z"]["+y"] = "-z";
	bends["-z"]["-y"] = "-z";
	bends["-z"]["+z"] = "+x";
	bends["-z"]["-z"] = "-x";

	while(cin >> L, (L)) {
		L--;
		wire = "+x";
		for(long i = 0; i < L; i++) {
			cin >> dir;
			if(dir != "No")
				wire = bends[wire][dir];
		}
		cout << wire << endl;
	}

	return 0;
}
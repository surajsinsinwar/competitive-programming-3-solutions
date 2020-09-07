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

	int t;
    cin >> t;
    
    flu(i, 1, t + 1) {
        map<string, int> map;
        int sub, days;
        cin >> sub;
        string subject;
        while(sub--) {
            cin >> subject >> days;
            map[subject] = days;
        }
        cin >> days >> subject;
        cout << "Case " << i << ": ";
        if(map[subject] && map[subject] <= days)
            cout << "Yesss\n";
        else if(map[subject] && map[subject] <= days + 5)
            cout << "Late\n";
        else
            cout << "Do your own homework!\n";    }


	return 0;
}
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

    // freopen("input.txt", "r", stdin);
    // freopen("myoutput.txt", "w", stdout);

    int n; while(scanf("%d", &n), n){
        int ma(0), count(0);
        map<vi, int> mp;
        vi v(5);
        flu(i, 0, n){
            flu(j, 0, 5) scanf("%d", &v[j]);
            sort(v.begin(), v.end());
            mp[v]++;
        }
        for(auto i = mp.begin(); i != mp.end(); i++){
            ma = max(ma, i -> second);
        }

        for(auto i = mp.begin(); i != mp.end(); i++){
            if(i -> second == ma) count++;
        }
        printf("%d\n", ma*count);
    }
    return 0;
}
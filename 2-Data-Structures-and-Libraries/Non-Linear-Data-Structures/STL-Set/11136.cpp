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

    multiset<int> mst;
    multiset<int>::iterator it;
    int n;
    while(scanf("%d", &n), n){
        ll sum = 0;
        mst.clear();
        while(n--){
            int k, m, a, b; scanf("%d", &k);
            while(k--){
                scanf("%d", &m);
                mst.insert(m);
            }
            b = *mst.rbegin();
            a = *mst.begin();
            it = mst.end();
            sum += (b - a);
            mst.erase(mst.begin());
            mst.erase(--it);
        }
        printf("%lld\n", sum);
        
    }

    return 0;
}
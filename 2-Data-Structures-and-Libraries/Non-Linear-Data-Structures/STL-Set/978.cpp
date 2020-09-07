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

    int t; scanf("%d", &t);
    while(t--){
        int b, sg, sb, m;
        scanf("%d%d%d", &b, &sg, &sb);

        multiset<int, greater<int>> ga, ba;
        multiset<int>::iterator it;

        flu(i, 0, sg){
            scanf("%d", &m);
            ga.insert(m);
        }
        flu(i, 0, sb){
            scanf("%d", &m);
            ba.insert(m);
        }

        while(!ga.empty() && !ba.empty()){
            int temp = min(b, min((int)ga.size() , (int)ba.size()));

            vi vg, vb;

            flu(i, 0, temp){
                if(*ga.begin() - *ba.begin() > 0) vg.pb(*ga.begin() - *ba.begin());
                else if(*ba.begin() - *ga.begin() > 0) vb.pb(*ba.begin() - *ga.begin());
                ga.erase(ga.begin());
                ba.erase(ba.begin());
            }

            for(auto i = vg.begin(); i != vg.end(); i++) ga.insert(*i);
            for(auto i = vb.begin(); i != vb.end(); i++) ba.insert(*i);
        }

        if(ga.empty() && ba.empty()) printf("green and blue died\n");
        else if(ga.empty()){
            printf("blue wins\n");
            for(auto i : ba) printf("%d\n", i);
        }
        else{
            printf("green wins\n");
            for(auto i : ga) printf("%d\n", i);
        }
        if(t) printf("\n");
    }

    return 0;
}
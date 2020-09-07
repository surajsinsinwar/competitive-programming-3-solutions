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

    int add[30005], get[30005];
    multiset<int> st;
    multiset<int>::iterator curr;

    int t; scanf("%d", &t);
    while(t--){
        int m, n, index(0);
        scanf("%d%d", &m, &n);
        st.clear();

        flu(i, 0, m) scanf("%d", &add[i]);
        flu(i, 0, n) scanf("%d", &get[i]);

        st.insert(add[0]);
        curr = st.begin();

        int i;
        for(i = 1; i < m; i++){
            while(index < n && get[index] == i){
                printf("%d\n", *curr);
                index++;
                curr++;
            }
            st.insert(add[i]);
            if(curr == st.end() || *curr > add[i]) curr--;
        }
        while(index < n && get[index] == m){
            printf("%d\n", *curr);
            index++;
            curr++;
        }
        if(t) printf("\n");
    }

    return 0;
}
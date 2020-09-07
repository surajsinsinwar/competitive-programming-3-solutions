#include<bits/stdc++.h>
#include <stdio.h>

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

    
    int n, m;
    while(scanf("%d%d", &n, &m), (n && m)){
        set<int> st;
        int count(0), temp;
        flu(i, 0, n){
            scanf("%d", &temp);
            if(st.find(temp) != st.end()) count++;
            else st.insert(temp);
        }
        flu(i, 0, m){
            scanf("%d", &temp);
            if(st.find(temp) != st.end()) count++;
            else st.insert(temp);
        }
        printf("%d\n", count);
    }
    

    return 0;
}
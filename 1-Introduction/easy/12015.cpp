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

    
    int t; scanf("%d", &t);

    flu(i, 1, t + 1){

        int high(0);
        vi v(10, 0);
        char arr[10][105];

        flu(j, 0, 10){
            scanf("%s%d", arr[j], &v[j]);
        }

        high = *max_element(v.begin(), v.end());

        printf("Case #%d:\n", i);
        flu(j, 0, 10){
            if(v[j] == high) printf("%s\n", arr[j]);
        }
    }
    

    return 0;
}
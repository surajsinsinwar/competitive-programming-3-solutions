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

    char arr[300], ch;
    set<string> st;
    int i = 0;
    while((ch = getchar()) != EOF){
        if(ch >= 'A' && ch <= 'Z') arr[i++] = ch + 32;
        else if(ch >= 'a' && ch <= 'z') arr[i++] = ch;
        else{
            arr[i] = '\0';
            st.insert(arr);
            i = 0;
        }
    }
    set<string>::iterator it = st.begin();
    it++;
    for(; it != st.end(); it++) cout << *it << endl;

    return 0;
}
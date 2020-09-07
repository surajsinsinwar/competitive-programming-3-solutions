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

    int T;
    cin>>T;

    while(T--){
        int n,t,m;
        cin >> n >> t >> m;
        queue< ii >left, right;
        vi v(m, 0);
        int c = 0;
        int car = 0;
        bool side = 0;

        flu(i, 0, m){
            int x;string s;
            cin >> x >> s;
                s[0] == 'l' ? left.push(mk(i,x)) : right.push(mk(i,x));
        }

        while(!left.empty() || !right.empty()){

            if(!side){

                if(left.empty()){
                	side = 1;
                	c = max(right.front().second + t,c + t);

                }

                else if(left.front().second <= c){
                	int load = n;
                	while(load && !left.empty() && left.front().second <= c){
                        --load;
                        v[left.front().first] = c + t;
                        left.pop();
                    }
                    c += t;
                    side = 1;

                }

                else if(!right.empty() && right.front().second < left.front().second){
                    side = 1;
                    c = max(right.front().second + t,c + t);
                }

                else c = left.front().second;

            }
            else{

                if(right.empty()){
                	side = 0;
                	c= max(left.front().second+t,c+t);
                }
                else if(right.front().second <= c){
                    int load = n;
                    while(load && !right.empty() && right.front().second <= c){
                        --load;
                        v[right.front().first]=c+t;
                        right.pop();
                    }
                    c += t;
                    side = 0;
                }
                else if(!left.empty() && left.front().second < right.front().second){
                    side = 0;
                    c= max(left.front().second+t,c+t);
                }
                else c = right.front().second;
            }
        }

        flu(i, 0, m) cout << v[i] << "\n";
        if(T != 0)cout<<"\n";
    }

return 0;

}
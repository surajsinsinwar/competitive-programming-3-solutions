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


int main(){
	fast;

	// freopen("input.txt", "r", stdin);
	// freopen("myoutput.txt", "w", stdout);

	int N;
    
    while (cin >> N, N)
    {
        cin.ignore();
        
        vector<int> spaces(N);
        int minSpaces = -1;
        
        string line;
        
        for (int i = 0; i < N; ++i)
        {
            getline(cin, line);
            int spaceCount = 0;
            for (string::const_iterator iter = line.begin(); iter != line.end(); ++iter)
            {
                if (*iter != 'X')
                    ++spaceCount;
            }
            
            spaces[i] = spaceCount;
            if (spaceCount < minSpaces || minSpaces == -1)
                minSpaces = spaceCount;
        }
        
        int total = 0;
        for (int i = 0; i < N; ++i)
            total += spaces[i] - minSpaces;
            
        cout << total << '\n';
    }

	return 0;
}
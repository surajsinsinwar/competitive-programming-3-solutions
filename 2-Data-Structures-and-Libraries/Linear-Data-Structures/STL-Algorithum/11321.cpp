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

int M;

bool SortFunc(int i, int j)
{
    if (i % M != j % M)
        return i % M < j % M;
    if (i & 1) // i is odd
    {
        if (j & 1)
            return i > j;
        return true;
    }
    if (j & 1)
    {
        return false;
    }
    return i < j;
}

int main()
{
	fast;

	// freopen("input.txt", "r", stdin);
	// freopen("myoutput.txt", "w", stdout);

    int N;
    
    vector<int> numbers(10005);
    
    while (cin >> N >> M, cout << N << ' ' << M << '\n', N)
    {
        for (int i = 0; i < N; ++i)
        {
            cin >> numbers[i];
        }
        
        sort(numbers.begin(), numbers.begin() + N, SortFunc);
        ;
        for (int i = 0; i < N; ++i)
            cout << numbers[i] << '\n';
    }
    return 0;
}
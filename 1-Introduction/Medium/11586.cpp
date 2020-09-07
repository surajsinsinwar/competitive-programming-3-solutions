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


int main()
{
	fast;

	// freopen("input.txt", "r", stdin);
	// freopen("myoutput.txt", "w", stdout);

	int n;
    char line[205];
    scanf("%d", &n);
    getchar();
    while(n--)
    {
        gets(line);
        int i, M = 0, F = 0, rM = 0, rF = 0;
        int len = strlen(line), it = 0;
        for(i = 0; i < len; i++)
        {
            if(line[i] != ' ')
            {
                if(line[i] == 'M')  M++;
                else    F++;
                if(line[i+1] == 'M')  rM++;
                else    rF++;
                i++;
                it++;
            }
        }
        if((M == rF  || F == rM) && it > 1)
            puts("LOOP");
        else
            puts("NO LOOP");
    }

    return 0;
}
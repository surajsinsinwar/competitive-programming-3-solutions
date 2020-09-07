
//    How strange it is : 
//        We wish to wear high brands,
//        but we feel most comfortable in pajaymas.
//
//        We wish to sit in Taj & Marriot with elight people,
//        but we enjoy roadside tea with friends and with people we love.
//
//        We wish to own big cars and go on long drives,
//        yet we talk our heart out only while walking down a long road.  
//
//    " Don't be serious, Enjoy Life as it Comes ".  
//
//    WORDS OF RATAN TATA         

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


int main()
{
    fast;

    // freopen("input.txt", "r", stdin);
    // freopen("myoutput.txt", "w", stdout);

    string s, temp;
    map<string, set<string>> mp;
    while(cin >> s, s[0] != 'X')
    {
        temp = s;
        sort(s.begin(), s.end());
        mp[s].insert(temp);
    }

    while(cin >> s, s[0] != 'X')
    {
        sort(s.begin(), s.end());
        if(mp.find(s) != mp.end())
        {
            for(set<string>::iterator it = mp[s].begin(); it != mp[s].end(); it++)
            {
                cout << *it << endl;
            }
        }
        else
        {
            cout << "NOT A VALID WORD\n";
        }
        cout << "******\n";
    }

    return 0;
}
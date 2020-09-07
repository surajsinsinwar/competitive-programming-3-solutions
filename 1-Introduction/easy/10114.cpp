#include<bits/stdc++.h>

using namespace std;

#define fast ios_base::sync_with_stdio(0); cin.tie(0); cout.tie(0);
typedef long long ll;
typedef pair<int, int> ii;
typedef vector<ii> vii;
typedef vector<int> vi;
#define MAX_N 1000
#define pb push_back
#define mk make_pair

#define flu(i, s, e) for(int i = s; i < e; i++)
#define fld(i, s, e) for(int i = s; i >= e; i--)


int main(){
    fast;

    // freopen("input.txt", "r", stdin);
    // freopen("myoutput.txt", "w", stdout);

    int n, m;
    double paid, loan;
    while (scanf("%d %lf %lf %d", &n, &paid, &loan, &m) == 4){
        if (n <= 0)
            break;
        double p[MAX_N] = { 0 };
        bool V[MAX_N] = { false };
        double car, pay;
        pay = loan / n;
        for (int i = 0; i < m; i++){
            int s; double t;
            scanf("%d %lf", &s, &t);
            p[s] = (1.0 - t), V[s] = true;
        }
        for (int i = 1; i <= n; i++){
            if (!V[i])
                p[i] = p[i - 1];
        }
        car = (paid + loan) * p[0];
        int ans;
        for (ans = 1; ans <= n; ans++){
            if (car + 1e-8 > loan)  break;
            car *= p[ans];
            loan -= pay;
        }
        ans--;
        printf("%d month", ans);
        if (ans != 1)   putchar('s');
        putchar('\n');
    }

    return 0;
}
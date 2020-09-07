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

	int H, D, F, d;
	float U, sh, f;

	while(1)
	{
		scanf("%d %f %d %d", &H, &U, &D, &F);
		if(H == 0) break;
		d = 1;		
		sh = 0;
		f = U*F/100;
		while(1){	
			sh += U;
			if(U > 0)
				U -= f;
			if(sh > H) break;			
			sh -= D;			
			if(sh < 0) break;			
			d++;
		}
		sh < 0 ? printf("failure on day %d\n", d) : printf("success on day %d\n", d);
	} 	

	return 0;
}
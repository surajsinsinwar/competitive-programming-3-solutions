
// https://onlinejudge.org/index.php?option=onlinejudge&Itemid=99999999&page=show_problem&category=0&problem=666&mosmsg=Submission+received+with+ID+25526350


/*
How strange it is : 
    We wish to wear high brands,
    but we feel most comfortable in pajaymas.

    We wish to sit in Taj & Marriot with elight people,
    but we enjoy roadside tea with friends and with people we love.

    We wish to own big cars and go on long drives,
    yet we talk our heart out only while walking down a long road.

" Don't be serious, Enjoy Life as it Comes ".  

   WORDS OF RATAN TATA  
*/ 

#include<bits/stdc++.h>
using namespace std;

#ifdef declare

int32_t main()
{
    // fast;
    // freopen("input.txt", "r", stdin);
    // freopen("myoutput.txt", "w", stdout);

    int n;
    si(n);
    
    while(n != 0)
    {
    	bool flag = 1;
    	for(int i = 1234; i <= 98765 / n; i++)
    	{
    		int a = i * n;
    		int tmp, bit = (i < 10000);
    		tmp = i;
    		while(tmp)
    		{
    			bit |= (1 << (tmp % 10));
    			tmp /= 10;
    		}
    		tmp = a;
    		while(tmp)
    		{
    			bit |= (1 << (tmp % 10));
    			tmp /= 10;
    		}
    		if(bit == (1 << 10) - 1)
    		{
    			flag = 0;
    			if(a < 10000) printf("0");
    			printf("%d / ", a);
    			if(i < 10000) printf("0");
    			printf("%d = %d\n", i, n);
    		}
    	}
    	if(flag) printf("There are no solutions for %d.\n", n);
    	si(n);
    	if(n != 0) printf("\n");
    }

    return 0;
}





#else


#define fast ios_base::sync_with_stdio(0);cin.tie(0);cout.tie(0);
typedef long long ll;
typedef pair<int, int> ii;
typedef vector<ii> vii;
typedef vector<int> vi;
#define INF 1000000000
#define pb push_back
#define mk make_pair

#define si(a) scanf("%d", &a);
#define pi(a) printf("%d ", a);

#define sl(a) scanf("%lld", &a);
#define pl(a) printf("%lld ", a);

#define sc(a) scanf("%c", &a);
#define pc(a) printf("%c ", a);

#define ss(a) scanf("%s", s);
#define ps(a) printf("%s ", s);

#define flu(i, s, e) for(int i = s; i < e; i++)
#define fld(i, s, e) for(int i = s; i >= e; i--)

#define declare
#include __FILE__
#endif
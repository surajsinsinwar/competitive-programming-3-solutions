#include<bits/stdc++.h>

using namespace std;

#define fast ios_base::sync_with_stdio(0);cin.tie(0);cout.tie(0);
typedef long long ll;
typedef pair<int, int> ii;
typedef vector<ii> vii;
typedef vector<int> vi;
#define INF 1000000000
#define pb push_back
#define mk make_pair

#define flu(i, s, e) for(int i = s; i < e; i++)
#define fld(i, s, e) for(int i = s; i >= e; i--)

vi P,R,S;

int N;

void inicializar(int n){
    N=n;
    R.assign(N,0);
    S.assign(N,1);
    P.assign(N,0);
    for(int i=0;i<N;i++)
        P[i]=i;
}
int findSet(int x){
    return x==P[x]?x:P[x]=findSet(P[x]);
}
int isSameSet(int x, int y){
    return findSet(x)==findSet(y)?1:0;
}
void unionSet(int x, int y){
    if(!isSameSet(x,y)){
        int p1=findSet(x);
        int p2=findSet(y);
        N--;
        if(R[p1]>R[p2]){
            P[p2]=p1;
            S[p1]+=S[p2];
        }
        else{
            P[p1]=p2;
            S[p2]+=S[p1];
            if(R[p1]==R[p2])
                R[p2]++;
        }
    }
}

int c,i;
int t,n;
char op,op2;

int main(){
    int x,y;
    scanf("%d",&t);
    while(t--){
        scanf("%d\n",&n);
        inicializar(n);

        while((op=getchar())!=EOF && op!='\n'){
            scanf("%d %d",&x,&y);
            getchar();
            if(op=='c')
                unionSet(x-1,y-1);
            else
                isSameSet(x-1,y-1)==1?c++:i++;

        }
        printf("%d,%d\n",c,i);
        if(t)
            printf("\n");
        c = i = 0;

    }
    return 0;

}
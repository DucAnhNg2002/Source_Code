#include <bits/stdc++.h>
#define LL long long 
#define ULL unsigned long long
#define FOR(i,a,b) for(int i=a;i<=b;++i)
#define FO(i,a,b) for(int i=a;i<b;++i)
#define FORD(i,a,b) for(int i=a;i>=b;--i)
#define fi first
#define se second
#define pb push_back
#define mp make_pair
#define endl '\n'
#define debug cout << "YES" << endl
using namespace std;

typedef pair<int,int> pII;
typedef pair<LL,LL> pLL;
const int inf = 1e9;
const LL Linf = (LL) 1e18;
const LL MOD = 1000000007LL;
#define PI 3.141592653589793238;
#define maxn 100005

bool cmp(pLL a,pLL b) {
	if( a.fi == b.fi ) {
		return a.se > b.se;
	}	
	return a.fi < b.fi;
}

void solve() {
	LL n;
	cin >> n;
	pLL a[n+5];
	FOR(i,1,n) {
		cin >> a[i].fi;
		a[i].se = i;
	}
	sort(a+1,a+1+n);
	LL ans = -1;
	LL Min = a[1].se , data = a[1].fi;
	FOR(i,2,n) {
		if( a[i].fi > data ) {
			ans = max(ans,a[i].se-Min);
		}
		if( Min > a[i].se ) {
			Min = a[i].se;
			data = a[i].fi;
		}
	}
	cout << ans << endl;
}

int main(){
   ios::sync_with_stdio(false);
#ifndef ONLINE_JUDGE
    freopen("test.in","r",stdin);
//    freopen("test.out","w",stdout);
#endif
	int T = 1;
	cin >> T;
	while( T-- )
    	solve();
    return 0;
}

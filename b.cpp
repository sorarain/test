#include<bits/stdc++.h>
using namespace std;
#define rep(i,a,b) for (int i=a;i<=b;i++)
#define per(i,a,b) for (int i=b;i>=a;i--)
#define pb push_back
#define lowbit(x) (x&(-x))
#define mk make_pair
#define VI vector<int>
#define il inline
#define ll long long
#define inf 0x3f3f3f3f
#define getc() (p1==p2&&(p2=(p1=buf)+fread(buf,1,1<<15,stdin),p1==p2)?EOF:*p1++)
char buf[1<<15],*p1 = buf,*p2 = buf;
inline int read(){
    #define num ch-'0'
    char ch;bool flag=0;int res;
    while(!isdigit(ch=getc()))
    (ch=='-')&&(flag=true);
    for(res=num;isdigit(ch=getc());res=res*10+num);
    (flag)&&(res=-res);
    #undef num
    return res;
}
#define maxn 101000
ll a[maxn];
void solve()
{
	int n = read();
	rep(i,1,n) a[i] = read();
	ll ans = 0;
	
	rep(k,1,30)
	{
		ll mx = 0;
		ll sum = 0;
		rep(i,1,n)
		{
			if(a[i] > k || a[i] + sum < 0) {
				sum = 0;
				continue;
			}
			sum += a[i];
			ans = max(ans,sum - k);
		}
	}
	cout<<ans<<endl;
}
int main()
{
	#ifndef ONLINE_JUDGE
	freopen("data.txt","r",stdin);
	#endif

	solve();
}

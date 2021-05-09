#include <iostream>
#include <vector>
#include <climits>
#include <algorithm>
#define deb(x) cout<<#x<<" "<<x;
#define ll long long
#define fo(i,n) for(long long i=0;i<n;i++)
#define Fo(i,a,b) for(long long i=a;i<=b;i++)
using namespace std;

long long dif(long long n,long long a,long long b)
{
	long long x,y,z;
	x=abs(a-b);
	y=a+ n-b;
	z=n-a+b;
	return min(x,min(y,z));
}

void solve()
{
	long long w,n,p=-1;
	cin>>w>>n;
	vector<long long> x(w);
	fo(i,w)cin>>x[i];
	sort(x.begin(), x.end());
	long long ans=LLONG_MAX,sm=0;
	for(long long i=0;i<w;i++)
	{
		sm=0;
		if(p!=x[i])
		{
			for(long long j=0;j<w;j++)
			{
				sm += dif(n,x[i],x[j]);
			}
			p=x[i];
		}
		ans=min(ans,sm);
	}
	cout<<ans;    
}


int main()
{
    #ifndef ONLINE_JUDGE
        freopen("input.txt","r",stdin);
        freopen("output.txt","w",stdout);
    #endif
    ios_base::sync_with_stdio(false);
    cin.tie(NULL);
    cout.tie(NULL);

    long long t;
    cin>>t;
    for(long long i=1;i<=t;i++)
    {
        cout<<"Case #"<<i<<": ";
        solve();
        cout<<"\n";
    }
    return 0;
}
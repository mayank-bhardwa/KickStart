#include <iostream>
#define deb(x) cout<<#x<<" "<<x;
#define ll long long
#define fo(i,n) for(int i=0;i<n;i++)
#define Fo(i,a,b) for(int i=a;i<=b;i++)
using namespace std;

void solve()
{
    int n,a,b,c;
    cin >> n >> a >> b >> c;

    if( a+b-c > n || (c==1 && a+b-c<n && (a==1 && b==1))) cout<<"IMPOSSIBLE";
    else
    {
    	for(int i=0;i<a-c;i++)
    	{
    		cout<<i+1<<" ";
    	}
    	for(int i=0;i<c;i++)
    	{
    		cout<<n<<" ";
    	}
    	for(int i=0;i<(n-(a+b-c));i++)  
    	{
    		cout<<1<<" ";
    	}
    	for(int i=0;i<(b-c);i++)
    	{
    		cout<<2<<" ";
    	}
    }
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
    int t;
    cin>>t;
    for(int i=1;i<=t;i++)
    {
        cout<<"Case #"<<i<<": ";
        solve();
        cout<<"\n";
    }
    return 0;
}
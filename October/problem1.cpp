#include <iostream>
#include <vector>
#define deb(x) cout<<#x<<" "<<x;
#define ll long long
#define fo(i,n) for(int i=0;i<n;i++)
#define Fo(i,a,b) for(int i=a;i<=b;i++)
using namespace std;

void solve()
{
	string s;
	cin>>s;
	vector<char> ks;
	for(int i=0;i<s.size();i++)
	{
		if(s.substr(i,4)=="KICK")
		{
			ks.push_back('k');
		}
		else if(s.substr(i,5)=="START")
		{
			ks.push_back('s');#include <iostream>
#include <vector>
#define deb(x) cout<<#x<<" "<<x;
#define ll long long
#define fo(i,n) for(int i=0;i<n;i++)
#define Fo(i,a,b) for(int i=a;i<=b;i++)
using namespace std;

void solve()
{
	string s;
	cin>>s;
	vector<char> ks;
	for(int i=0;i<s.size();i++)
	{
		if(s.substr(i,4)=="KICK")
		{
			ks.push_back('k');
		}
		else if(s.substr(i,5)=="START")
		{
			ks.push_back('s');
		}
	}
	int c=0;
	for(int i=0;i<ks.size();i++)
	{
		if(ks[i]=='k')
		for(int j=i+1;j<ks.size();j++)
		{
			if(ks[j]=='s')c++;
		}
	}
	cout<<c;
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
		}
	}
	int c=0;
	for(int i=0;i<ks.size();i++)
	{
		if(ks[i]=='k')
		for(int j=i+1;j<ks.size();j++)
		{
			if(ks[j]=='s')c++;
		}
	}
	cout<<c;
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
#include<bits/stdc++.h>
using namespace std;

#define ll long long
#define pii pair<int, int>
#define pll pair<long long, long long>
#define vi vector<int>
#define vll vector<long long>
#define mii map<int, int>
#define si set<int>
#define sc set<char>
#define pb push_back
#define ppb pop_back
#define mp make_pair
#define gcd(a,b) __gcd(a,b)
#define lcm(a,b) (a*(b/gcd(a,b)))

#define all(a) (a).begin(),(a).end()
#define rall(a) (a).rbegin(),(a).rend()
#define printv(a) {for(auto u:a) cout<<u<<" "; cout<<endl;}
#define printm(a) {for(auto u:a) cout<<u.f sp u.s<<endl;}
#define rep(i,L,R) for(int i = L; i <R; i++)

#define fastio ios_base::sync_with_stdio(0); cin.tie(0); cout.tie(0)
#define testcase int tc; cin>>tc; while(tc--)

bool prime(ll a) { if (a <= 1) return 0; for (int i = 2; i <= round(sqrt(a)); ++i) if (a % i == 0) return 0; return 1; }
void test() {cout << "Hello World!" << endl;}
void yes() { cout << "YES\n"; }
void no() { cout << "NO\n"; }

void solve()
{
	test();

}


/* Main()  function */

int main()
{
	fastio;

	testcase
	solve();

	return 0;
}
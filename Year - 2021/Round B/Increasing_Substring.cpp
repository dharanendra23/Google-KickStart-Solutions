#include<bits/stdc++.h>
using namespace std;

#define ll  				long long
#define ld 					long double
#define mod 				1000000007
#define inf 				1e9
#define endl 				"\n"
#define pb 					push_back
#define vi 					vector<ll>
#define vs 					vector<string>
#define pii 				pair<ll,ll>
#define ump 				unordered_map
#define mp 					make_pair
#define pq_max 				priority_queue<ll>
#define pq_min 				priority_queue<ll,vi,greater<ll> >
#define all(n) 				n.begin(),n.end()
#define ff 					first
#define ss 					second
#define mid(l,r) 			(l+(r-l)/2)
#define loop(i,a,b) 		for(int i=(a);i<=(b);i++)
#define looprev(i,a,b) 		for(int i=(a);i>=(b);i--)
#define logarr(arr,a,b) 	for(int z=(a);z<=(b);z++) cout<<(arr[z])<<" ";cout<<endl;

void solve() {
	// Write your code here...
	ll n;
	string s;
	cin >> n >> s;

	ll freq[26] = {0}, cnt = 1;
	cout << 1 << " ";
	for(int i = 1; i < n; i++) {

		if(s[i] > s[i - 1]) {

			cnt++;
			cout << cnt << " ";
		}else{

			cnt = 1;
			cout << cnt << " ";
		}
	}

	cout << endl;
}

int main(int argc, char const *argv[]) {
	
	ll t = 1, num = 1;
	cin >> t;

	while(t--) {
		cout << "Case #"<<num++<<": ";
		solve();
	}

	return 0;
}

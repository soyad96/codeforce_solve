#include<bits/stdc++.h>
using namespace std;
int main(){
	ios_base::sync_with_stdio(false);
	cin.tie(nullptr);
	int t; cin>>t;
	while(t--){
		int n; cin>>n;
		vector<int>p(n);
		for(auto& x:p) cin>>x;

		vector<int>bad;
	for(int i=0;i<n;i++){
		if(p[i]!=i+1){
			bad.push_back(i);
		}
	}
	bool ok=true;
	int k=bad.size();
	for(int i=0;i<k;i++){
		if(p[bad[i]]!=bad[k-1-i]+1){
			ok=false;
			break;
		}
	}
	if(ok)cout<<"YES\n";
	else cout<<"NO\n";

	}
	return 0;
}
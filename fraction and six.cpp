#include<bits/stdc++.h>
using namespace std;
int main(){

	ios_base::sync_with_stdio(false);
	cin.tie(nullptr);
	int t; cin>>t;
	while(t--){
		int n,m;
		string p,q;
		cin>>n>>m>>p>>q;
		q +="six";
		vector<int>zc(255,0);
		vector<int>pc(255,0);
		for( auto& z:p) zc[z]++;
		for(auto& z:q) pc[z]++;

	if(pc==zc)cout<<"YES\n";
	else cout<<"NO\n";





	}
	return 0;

}
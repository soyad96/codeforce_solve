#include<bits/stdc++.h>
using namespace std;
int main(){

	ios_base::sync_with_stdio(false);
	cin.tie(nullptr);
	int t; cin>>t;
	while(t--)
	{
		int n; cin>>n;
		vector<int>v(3);
		for(int i=0;i<3;i++){
			cin>>v[i];
		}
		int ans=0;
		ans=max({n-v[2],n-v[1],n-v[0]});
		
	
		cout<<ans<<'\n';

	}
	return 0;


}

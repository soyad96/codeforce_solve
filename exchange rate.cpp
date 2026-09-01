#include<bits/stdc++.h>
using namespace std;
int main(){

	ios_base::sync_with_stdio(false);
	cin.tie(nullptr);
	long long t,c,k;
	cin>>t>>c>>k;
	long long ans=min(c,(t*k));
	cout<<ans<<'\n';
	return 0;
}
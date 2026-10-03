#include<bits/stdc++.h>
using namespace std;
int main(){
	ios_base::sync_with_stdio(false);
	cin.tie(nullptr);
	int t; cin>>t;
	while(t--){
		long long n,k;
		cin>>n>>k;
		long long d=pow(2,n-k+1);
		long long p=2*(k-1);
		long long ans=d+p;
		cout<<ans<<'\n';
	}
	return 0;
}
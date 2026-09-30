#include<bits/stdc++.h>
using namespace std;
int main(){

	ios_base::sync_with_stdio(false);
	cin.tie(nullptr);
	int t; cin>>t;
	while(t--){
		long long a,b,c;
		cin>>a>>b>>c;
		int ans=max(abs(a-b),(a+c-b));
		cout<<ans<<endl;
		
	}
	return 0;

}
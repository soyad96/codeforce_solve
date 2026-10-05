#include<bits/stdc++.h>
using namespace std;
int main(){

ios_base::sync_with_stdio(false);
cin.tie(nullptr);
int t; cin>>t;
while(t--){
	int n; cin>>n;
	char c; cin>>c;
	string s;
	cin>>s;
	int ans=0;
	for(int i=0;i<n/2;++i){
		if(s[i]==s[n-i-1]) continue;
		if(s[i]==c||s[n-i-1]==c) ans++;
		else ans+=2;	
	
	}

	cout<<ans<<'\n';



}
return 0;

}
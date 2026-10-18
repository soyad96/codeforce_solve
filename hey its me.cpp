#include<bits/stdc++.h>
using namespace std;
int main(){
	int t; cin>>t;
	while(t--){
		int n; cin>>n;
		string s; cin>>s;
		int maxx=-1; int minn=1e9;
		int cnt=0;
		for(int i=0;i<n;i++){
			if(s[i]=='1'){
				maxx=max(maxx,i+1);
				minn=min(minn,i+1);
				cnt++;
			}
		}
		if(cnt==1) cout<<0<<endl;
		else if(cnt==2) cout<<1<<endl;
		else cout<<(maxx-minn)<<endl;

	}
	return 0;
}
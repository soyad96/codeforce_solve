#include<bits/stdc++.h>
using namespace std;
int main(){

	ios_base::sync_with_stdio(false);
	cin.tie(nullptr);
	int t; cin>>t;
	while(t--){
		int n,k;
		cin>>n>>k;
		int a[n];
		int b[n];
		for(int i=0;i<n;i++){
			cin>>a[i];
		}
		for(int i=0;i<n;i++){
			cin>>b[i];
		}
		int eca=0;int ecb=0;
		for(int i=0;i<n;i++){
			if(a[i]%2==0)eca++;
		}

		for(int i=0;i<n;i++){
			if(b[i]%2==0) ecb++;
		}
		if(k%2==0&& eca<=ecb){
			cout<<"YES\n";
		}
		else if(k%2!=0 && eca>=ecb){
			cout<<"YES\n";
		}
		else {
			cout<<"NO\n";
		}
	}
	return 0;
}
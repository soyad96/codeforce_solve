#include<bits/stdc++.h>
using namespace std;
int main(){
ios_base::sync_with_stdio(false);
cin.tie(nullptr);
int t; cin>>t; while(t--){
	long long n; cin>>n;
	bool f=false;
	for(int i=2;i<=n;i++){
		if((n+1)%i==0){
			f=true;
		}
	}
	if(f){
		cout<<"NO\n";
	}
	else {
		cout<<"YES\n";
	}
}
return 0;
}
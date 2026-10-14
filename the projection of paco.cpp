#include<bits/stdc++.h>
using namespace std;
int main(){
	ios_base::sync_with_stdio(false);
	cin.tie(nullptr);
	int t; cin>>t;
	while(t--){

		int n; cin>>n;
		int a[n];
		for(int i=0;i<n;i++){
			cin>>a[i];

		}
		
		int ans=0;
		for(int i=n-1;i>=0;i--){
			if((n-1-i)%2==0) ans-=a[i];
			else ans+=a[i];
			
		}
		if(n%2==0)cout<<ans<<endl;
		else {
			cout<<-ans<<endl;
		}
	}
	return 0;
}
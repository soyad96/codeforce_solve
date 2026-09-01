#include<bits/stdc++.h>
using namespace std;
int main(){
ios_base::sync_with_stdio(false);
cin.tie(nullptr);
int t; cin>>t;
while(t--){

	int n; cin>>n;
	long long totalsum=0;
	map<int,int>freq;
	int maxf=0;
	int maxv=0;
	for(int i=0;i<n;i++){
		int x; cin>>x;
		totalsum+=x;
		freq[x]++;
		if(freq[x]>maxf){
			maxf=freq[x];
			maxv=x;
		}
	}
	int others=n-maxf;
	int mjorityplayed=min(maxf,others+2);

long long ans=(totalsum-1LL*maxf*maxv)+1LL*mjorityplayed*maxv;
cout<<ans<<'\n';
}
return 0;
}
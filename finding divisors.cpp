#include<bits/stdc++.h>
using namespace std;

void getdivisor(long long x){
	vector<int>div;
	for(long long i=1;i<=x;i++){
		if(x%i==0){
			div.push_back(i);
		}
	}

	int ev=0; int od=0;
	for(auto d:div){
		if(d%2==0){
			ev++;
		}
		else {
			od++;
		}
	}
	if(ev>od||od>ev){
		cout<<"YES\n";
	}
	else {
		cout<<"NO\n";
	}
}
int main(){
	ios_base::sync_with_stdio(false);
	cin.tie(nullptr);
	int t; cin>>t; while(t--){


	long long x; cin>>x;
	getdivisor(x);


}
return 0;
}
#include<bits/stdc++.h>
using namespace std;
int main(){

	ios_base::sync_with_stdio(false);
	cin.tie(nullptr);
	int t; cin>>t;
	while(t--){
		long long c,h,o;
		cin>>c>>h>>o;
		if(h==(2*c-4)){
			cout<<"Saturated\n";
		}
		else {
			cout<<"Unsaturated\n";
		}
	}
	return 0;
	
}
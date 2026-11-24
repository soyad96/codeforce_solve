#include<bits/stdc++.h>
using namespace std;

void getdivisor(long long x){
    if(x&1) cout<<"YES\n";
    else if(x%4) cout<<"NO\n";
    else cout<<"YES\n";
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
#include<bits/stdc++.h>
using namespace std;
int main(){

	ios_base::sync_with_stdio(false);
	cin.tie(nullptr);
	int t; cin>>t;
	while(t--){
		int n; cin>>n;
		cout<< "? 1 "<< n<<endl;
		int res; cin>>res;
		if(res==0 || res==n){
			cout<<"! NO" <<endl;
			continue;
		}
		cout<< "? 1 "<< res<<endl;
		int x; cin>>x;
		if(x==res){
			cout<<"! NO" <<endl;

		}
		else cout<<"! YES"<<endl;



	}
	return 0;
}
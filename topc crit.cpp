#include<bits/stdc++.h>
using namespace std;
int main(){

ios_base::sync_with_stdio(false);
cin.tie(nullptr);


	long long a,b,c;
	cin>>a>>b>>c;
	long long bsum=b-a;
	long long csum=c-b;
	if(bsum==csum){
		cout<<"secret"<<" "<<(bsum)<<'\n';

	}
	else if(bsum!=csum){
		cout<<"not"<<" "<<"secret"<<'\n';
	}


return 0;

}
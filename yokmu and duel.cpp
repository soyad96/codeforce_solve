#include<bits/stdc++.h>
using namespace std;
int main()
{
	ios_base::sync_with_stdio(false);
	cin.tie(nullptr);
	int t; cin>>t;
	while(t--){
		int x; cin>>x; int best=x;
		for(int i=0;i<=x;i++){
			int d=0,stack=i,moves=i;
			while(d<x){
				if(stack==0){
					moves+=x-d;
					break;
				}
				d+=stack+1;
				--stack;
				++moves;
			}
			best=min(best,moves);
		}
		cout<<best<<endl;
	}
	return 0;
}
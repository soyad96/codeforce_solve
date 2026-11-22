#include<bits/stdc++.h>
using namespace std;

void getdivisor(long long x){
    long long ev = 0, od = 0;
    for(long long i = 1; i * i <= x; i++){
        if(x % i == 0){
            long long j = x / i;
            (i % 2 == 0 ? ev : od)++;
            if(j != i){
                (j % 2 == 0 ? ev : od)++;
            }
        }
    }
    cout << (ev != od ? "YES" : "NO") << "\n";
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
#include <bits/stdc++.h>
using namespace std;

long long MOD=1e9+7;
//a^n
long long power(long long n,long long a){
	
	if(n==0){
		return 1;
	}
	else{
		if(n%2==0){
			return ((power(n/2,a)%MOD)*(power(n/2,a)%MOD))%MOD;
		}
		long long x=power((n-1)/2,a);
		x=x%MOD;
		return ((a*((x*x)%MOD))%MOD)%MOD;
	}
	
}
long long modinverse(long long y,long long i){
	return (y*power(MOD-2,i))%MOD;
}


void  solve(){

 
 
}

int main(){

	int t;
	cin>>t;
	while(t--){
	
	
		solve();
		cout<<endl;	
	}

 
}


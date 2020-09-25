#include <bits/stdc++.h>
using namespace std;

#define rep(i,b) for(long long i = 0; i < (b); i++)
#define all(a) a.begin(),a.end()
#define allr(a) a.rbegin(),a.rend()
using ll = long long;

long long MOD=1e9+7;
//a^n
long long power(long long a,long long n){
	
	if(n==0){
		return 1;
	}
	else{
		if(n%2==0){
			return ((power(a,n/2)%MOD)*(power(a,n/2)%MOD))%MOD;
		}
		long long x=power(a,(n-1)/2);
		x=x%MOD;
		return ((a*((x*x)%MOD))%MOD)%MOD;
	}
	
}
long long modInverse(long long n) 
{ 
    return power(n, MOD - 2); 
} 

long long fac[500001];

void fact(){
	ll n=5e5;
	
    fac[0] = 1; 
    for (ll i = 1; i <= n; i++) 
		{
		fac[i] = (fac[i - 1] * i) % MOD;	
		} 
}

long long nCr( long long n,ll r) 
{ 
    
    if (r == 0) 
    {
    	  return 1;
	   }  

    return (fac[n] * modInverse(fac[r]) % MOD * modInverse(fac[n - r]) %MOD) % MOD; 
} 


void solve()
{
}



int  main(){
	fact();
ll t;
cin>>t;
while(t--){
		solve();
		cout<<endl;

}

}

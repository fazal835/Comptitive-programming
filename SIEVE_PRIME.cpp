#include <bits/stdc++.h>
using namespace std; 

#define rep(i,b) for(long long i = 0; i < (b); i++)
#define all(a) a.begin(),a.end()
#define allr(a) a.rbegin(),a.rend()
using ll = long long;

vector<bool> prime(1001,true);

void isprime(){



	for(int i=2;i*i<=1000;i++){
		if(prime[i]==true){
		
		
			for(int j=i*i;j<=1000;j=j+i){
			
			prime[j]=false;
	
			}

		}
		
	}
	
}

int main(){
	
}


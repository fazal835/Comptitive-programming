#include <bits/stdc++.h>
using namespace std;  
vector<int> vis(1000001,0);

int flag;

int gcd(int a, int b) 
{ 
    if (a == 0) 
        return b; 
    return gcd(b % a, a); 
} 
  

int findGCD(vector<int> arr, int n) 
{ 
    int result = arr[0]; 
    for (int i = 1; i < n; i++) 
    { 
        result = gcd(arr[i], result); 
  
        if(result == 1) 
        { 
           return 1; 
        } 
    } 
    return result; 
} 


void primeFactors(int n)  
{  
     if(n%2==0){
     	if(vis[2]==0){
     		vis[2]=1;
		 	
		 }
		 else{
		 	flag=1;
		 	return;
		 }
	 }
    while (n % 2 == 0)  
    {  
        n = n/2;  
    }  
  
    for (int i = 3; i <= sqrt(n); i = i + 2)  
    {  
   		if(n%i==0){
   			if(vis[i]==0){
   				vis[i]=1;
			   }
			   else{
			   	flag=1;
			   	return;
			   }
		   }
   
        while (n % i == 0)  
        {  
            n = n/i;  
        }  
    }  

    if (n > 2){
    	if(vis[n]==0){
    		vis[n]=1;
		}
		else{
			flag=1;
			return;
		}
	}  
        
}  
void  solve(){
int n;
cin>>n;
vector<int> v(n);
flag=0;
for(int i=0;i<n;i++)
{
	cin>>v[i];
	
}
for(int i=0;i<n;i++){
	if(flag==1){
		break;
	}
	primeFactors(v[i]);	
	
}
if(flag==0){
	cout<<"pairwise coprime";
	return ;
}
if(findGCD(v,v.size())==1){
	cout<<"setwise coprime";
	return ;
}
cout<<"not coprime";
return ;
}

int  main(){

int t;
//cin>>t;
t=1;
while(t--){
	
		solve();
cout<<endl;
}
 
}


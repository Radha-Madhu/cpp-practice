#include<bits/stdc++.h>
using namespace std;
int main(){
	int n,i;
	cin>>n;
	bool isprime=(n>1);
	
	for(i=2;i<n;i++){
	  if(n%i==0){
		isprime=false;
		break;
	}
}
if(isprime){
	cout<<"prime";
}
else{
	cout<<"Not a prime";
}

}

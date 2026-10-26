#include<bits/stdc++.h>
using namespace std;
int main(){
	int n,i;
	cin>>n;
	for(i=1;i*i<=n;i++){
	
		if(n%i==0){
			int b;
			b=n/i;
			cout<<i<<"X"<<b<<endl;
		}
	}
	return 0;
}

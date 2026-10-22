#include<iostream>
using namespace std;
int main(){
	int a,h,m,s;
	cin>>a;
	h=a/3600;
	a=a%3600;
	m=a/60;
	a=a%60;
	cout<<h<<":"<<m<<":"<<s<<endl;
	
	
}

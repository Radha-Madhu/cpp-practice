#include<iostream>
using namespace std;
int main(){
int a,sum=0,first,last;
cin>>a;
	last=a%10;
	first=a/100;
	sum=first+last;
cout<<sum<<endl;
}

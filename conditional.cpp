#include<iostream>
using namespace std;
int main(){
	int a;
	cin>>a;
	if(a%3==0 and a%5==0){
		cout<<"fizzbuzz"<<endl;
	}
	else if(a%3==0){
		cout<<"fizz"<<endl;
	}
	else if (a%5==0){
		cout<<"buzz"<<endl;
	}
	else{
		cout<<"-1";
	}
}










   

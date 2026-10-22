#include<iostream>
using namespace std;
int main(){
	//int a ,sum=0,digit;
	//cin>>a;
	//cout<<a<<endl;
	//while(a>0){
		//digit=a%10;
		//sum+=digit;
		//a=a/10;
	//}
	//cout<<sum<<endl;
//}

int a,sum=0,first,last;
cin>>a;
while(a>0){
	last=a%10;
	first=a/100;
	sum=first+last;
	
}
cout<<sum<<endl;
}



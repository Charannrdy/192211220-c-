#include<iostream>
using namespace std;

int a[5];
int main(){
	int i,j;
	cin>>i>>j;
	try
	{
		if(j==0)
		throw 0;
		else
		cout<<i/j;
	}
	catch(int k)
	{
		cout<<"integer divided by 0";
	}
	cout<<"Hai";
	return 0;
}

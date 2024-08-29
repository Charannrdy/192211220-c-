#include<iostream>
using namespace std;
int main()
{
	int numerataor,denominator,a[]={1,2,3,4,},index;
	cout<<"Enter numerator : \n";
	cin>>numerataor;
	cout<<"Enter denominator : \n";
	cin>>denominator;
	cout<<"Enter index : \n";
	cin>>index;
	try
	{
		if(denominator==0)
		throw string("integer/0");
        else
        cout<<numerataor/denominator;
    }
     catch(string s)
        {
        	cout<<s;
		}
		 try{
		 
        if(index>3)
        throw index;
        else{
        cout<<a[index];
        }
    }
   
	    catch(int k)
	    {
    	    cout<<"array index bounce";
		}
		 cout<<"hai";
	     return 0;
	
}

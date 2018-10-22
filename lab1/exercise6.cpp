//andrew KEOGH 15309051
#include <iostream>
#include <string>
using std::cin; using std::endl;
using std::cout; using std::string;
int main() {
	for(int r=0; r!=5; r++)
	{
		string::size_type c =0;
		while(c!= 8)
		{
			if(r==0||r==4||c==0||c==7)
			cout << "+";
			else
			cout << " ";
			++c;
		}
		cout<<endl;	
	}

	for(int r=0; r!=5; r++)
	{
		string::size_type c =0;
		while(c!= 5)
		{
			if(r==0||r==4||c==0||c==4)
			cout << "+";
			else
			cout << " ";
			++c;
		}
		cout<<endl;	
	}

	for(int r=0; r!=5; r++)
	{
		string::size_type c =0;
		while(c!= 5)
		{
			if(r==0||r==4||c==0||c==4)
			cout << "+";
			else
			cout << " ";
			++c;
		}
		cout<<endl;	
	}
}
